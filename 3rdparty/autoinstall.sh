#!/bin/bash

#set -e  # exit immediately on error
#set -x  # display all commands

current_path=$(pwd);

function perror() {

    echo -e "\033[0;31;1m$1\033[0m"
}

function psucc() {
    echo -e "\e[1;32m$1\e[0m"
}

function go_back()
{
    cd $current_path;
}

function check_dir_exist() 
{
    dir_path=$current_path"/$1";
    if [ ! -d $dir_path ]; then
        perror $dir_path" dir not exist.";
        exit 1;
    fi
}

function check_file_exist() 
{
    if [ ! -f $1 ]; then
        return 1;
    fi
    return 0;
}

function check_lib_exist()
{
    go_back;
    lib_dir_path="$current_path/$1/lib";
    if [ ! -d $lib_dir_path ]; then
        return 1;
    fi

    lib_file_path=$lib_dir_path"/lib$1.a";
    check_file_exist $lib_file_path;
    return $?
}

function check_protobuf_installed()
{
    cd $lib_name;
    bin_dir=$(pwd)"/bin";
    include_dir=$(pwd)"/include";

    if [ ! -d $bin_dir ]; then
        return 1;
    fi
    if [ ! -d $include_dir ]; then
        return 1;
    fi
    check_lib_exist $1;
    return $?;
}

function install_protobuf()
{
    lib_name="protobuf";
    check_dir_exist $lib_name;

    # check if aready install.
    check_protobuf_installed $lib_name;
    if [ $? -eq 0 ]; then
        psucc "$lib_name already installed."
        return;
    fi
    # end check.

    go_back;
    cd $lib_name;

    exist_gmock_dir="../phxpaxos/third_party/gmock";
    if [ -d $exist_gmock_dir ]; then
        if [ ! -d gmock ]; then
            cp -r $exist_gmock_dir  gmock;
        fi
    fi

    ./autogen.sh;
    ./configure CXXFLAGS=-fPIC --prefix=$(pwd);
    make && make install;

    check_protobuf_installed $lib_name;
    if [ $? -eq 1 ]; then
        perror "$lib_name install fail. please check compile error info."
        exit 1;
    fi
    psucc "install $lib_name ok."
}

function install_glog()
{
    lib_name="glog";
    check_dir_exist $lib_name;

    # check if aready install.
    check_lib_exist $lib_name;
    if [ $? -eq 0 ]; then
        psucc "$lib_name already installed."
        return;
    fi
    # end check.

    go_back;
    cd $lib_name;
    ./autogen.sh
    ./configure CXXFLAGS=-fPIC --prefix=$(pwd) --with-gflags=$(pwd)/../gflags/;
    make && make install;

    check_lib_exist $lib_name;
    if [ $? -eq 1 ]; then
        perror "$lib_name install fail. please check compile error info."
        exit 1;
    fi
    psucc "install $lib_name ok."
}

function install_gflag()
{
    lib_name="gflags";
    check_dir_exist $lib_name;

    # check if aready install.
    check_lib_exist $lib_name;
    if [ $? -eq 0 ]; then
        psucc "$lib_name already installed."
        return;
    fi
    # end check.
    go_back;
    cd $lib_name;
    cmake . -DINSTALL_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=$(pwd);
    make VERBOSE=1;
    make && make install;

    check_lib_exist $lib_name;
    if [ $? -eq 1 ]; then
        perror "$lib_name install fail. please check compile error info."
	exit 1;
    fi
    psucc "install $lib_name ok."
}

install_gflag;
install_glog;

psucc "all done."

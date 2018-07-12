////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by slothjson. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __ap_log_msg_20180630142749_h__
#define __ap_log_msg_20180630142749_h__

#include "slothjson.h"

namespace slothjson {

struct ap_log_heart_t
{
    int32_t Result;
    std::string Ack;
    std::string ID;

    void skip_Result() { __skip_Result = true; }
    void skip_Ack() { __skip_Ack = true; }
    void skip_ID() { __skip_ID = true; }

    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_Ack() const { return __json_has_Ack; }
    bool json_has_ID() const { return __json_has_ID; }

    ap_log_heart_t();
    ap_log_heart_t& operator=(const ap_log_heart_t& obj_val);
    bool operator==(const ap_log_heart_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_Result;
    bool __skip_Ack;
    bool __skip_ID;

    bool __json_has_Result;
    bool __json_has_Ack;
    bool __json_has_ID;
};

bool encode(const ap_log_heart_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, ap_log_heart_t& obj_val);

struct ap_log_db_t
{
    std::string RPCMethod;
    std::string ID;
    std::string mac;
    std::string server;
    std::string remote;
    std::string start_time;
    std::string end_time;
    std::string client_ip;
    int32_t direction;
    int32_t Result;
    uint64_t addtime;
    std::string in;
    std::string out;

    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_mac() { __skip_mac = true; }
    void skip_server() { __skip_server = true; }
    void skip_remote() { __skip_remote = true; }
    void skip_start_time() { __skip_start_time = true; }
    void skip_end_time() { __skip_end_time = true; }
    void skip_client_ip() { __skip_client_ip = true; }
    void skip_direction() { __skip_direction = true; }
    void skip_Result() { __skip_Result = true; }
    void skip_addtime() { __skip_addtime = true; }
    void skip_in() { __skip_in = true; }
    void skip_out() { __skip_out = true; }

    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_mac() const { return __json_has_mac; }
    bool json_has_server() const { return __json_has_server; }
    bool json_has_remote() const { return __json_has_remote; }
    bool json_has_start_time() const { return __json_has_start_time; }
    bool json_has_end_time() const { return __json_has_end_time; }
    bool json_has_client_ip() const { return __json_has_client_ip; }
    bool json_has_direction() const { return __json_has_direction; }
    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_addtime() const { return __json_has_addtime; }
    bool json_has_in() const { return __json_has_in; }
    bool json_has_out() const { return __json_has_out; }

    ap_log_db_t();
    ap_log_db_t& operator=(const ap_log_db_t& obj_val);
    bool operator==(const ap_log_db_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_RPCMethod;
    bool __skip_ID;
    bool __skip_mac;
    bool __skip_server;
    bool __skip_remote;
    bool __skip_start_time;
    bool __skip_end_time;
    bool __skip_client_ip;
    bool __skip_direction;
    bool __skip_Result;
    bool __skip_addtime;
    bool __skip_in;
    bool __skip_out;

    bool __json_has_RPCMethod;
    bool __json_has_ID;
    bool __json_has_mac;
    bool __json_has_server;
    bool __json_has_remote;
    bool __json_has_start_time;
    bool __json_has_end_time;
    bool __json_has_client_ip;
    bool __json_has_direction;
    bool __json_has_Result;
    bool __json_has_addtime;
    bool __json_has_in;
    bool __json_has_out;
};

bool encode(const ap_log_db_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, ap_log_db_t& obj_val);

struct params_in_t
{
    std::string RPCMethod;
    std::string ID;
    std::string Plugin_Name;
    std::string Time;
    std::string Message;

    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_Plugin_Name() { __skip_Plugin_Name = true; }
    void skip_Time() { __skip_Time = true; }
    void skip_Message() { __skip_Message = true; }

    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_Plugin_Name() const { return __json_has_Plugin_Name; }
    bool json_has_Time() const { return __json_has_Time; }
    bool json_has_Message() const { return __json_has_Message; }

    params_in_t();
    params_in_t& operator=(const params_in_t& obj_val);
    bool operator==(const params_in_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_RPCMethod;
    bool __skip_ID;
    bool __skip_Plugin_Name;
    bool __skip_Time;
    bool __skip_Message;

    bool __json_has_RPCMethod;
    bool __json_has_ID;
    bool __json_has_Plugin_Name;
    bool __json_has_Time;
    bool __json_has_Message;
};

bool encode(const params_in_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, params_in_t& obj_val);

struct params_out_t
{
    int32_t Result;
    std::string Ack;
    std::string ID;

    void skip_Result() { __skip_Result = true; }
    void skip_Ack() { __skip_Ack = true; }
    void skip_ID() { __skip_ID = true; }

    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_Ack() const { return __json_has_Ack; }
    bool json_has_ID() const { return __json_has_ID; }

    params_out_t();
    params_out_t& operator=(const params_out_t& obj_val);
    bool operator==(const params_out_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_Result;
    bool __skip_Ack;
    bool __skip_ID;

    bool __json_has_Result;
    bool __json_has_Ack;
    bool __json_has_ID;
};

bool encode(const params_out_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, params_out_t& obj_val);

struct params_t
{
    std::string DevID;
    std::string MAC;
    std::string RPCMethod;
    std::string server;
    std::string remote;
    int32_t direction;
    int32_t Result;
    std::string start_time;
    std::string end_time;
    std::string in;
    std::string out;

    void skip_DevID() { __skip_DevID = true; }
    void skip_MAC() { __skip_MAC = true; }
    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_server() { __skip_server = true; }
    void skip_remote() { __skip_remote = true; }
    void skip_direction() { __skip_direction = true; }
    void skip_Result() { __skip_Result = true; }
    void skip_start_time() { __skip_start_time = true; }
    void skip_end_time() { __skip_end_time = true; }
    void skip_in() { __skip_in = true; }
    void skip_out() { __skip_out = true; }

    bool json_has_DevID() const { return __json_has_DevID; }
    bool json_has_MAC() const { return __json_has_MAC; }
    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_server() const { return __json_has_server; }
    bool json_has_remote() const { return __json_has_remote; }
    bool json_has_direction() const { return __json_has_direction; }
    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_start_time() const { return __json_has_start_time; }
    bool json_has_end_time() const { return __json_has_end_time; }
    bool json_has_in() const { return __json_has_in; }
    bool json_has_out() const { return __json_has_out; }

    params_t();
    params_t& operator=(const params_t& obj_val);
    bool operator==(const params_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_DevID;
    bool __skip_MAC;
    bool __skip_RPCMethod;
    bool __skip_server;
    bool __skip_remote;
    bool __skip_direction;
    bool __skip_Result;
    bool __skip_start_time;
    bool __skip_end_time;
    bool __skip_in;
    bool __skip_out;

    bool __json_has_DevID;
    bool __json_has_MAC;
    bool __json_has_RPCMethod;
    bool __json_has_server;
    bool __json_has_remote;
    bool __json_has_direction;
    bool __json_has_Result;
    bool __json_has_start_time;
    bool __json_has_end_time;
    bool __json_has_in;
    bool __json_has_out;
};

bool encode(const params_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, params_t& obj_val);

struct ap_log_cmd_t
{
    std::string RPCMethod;
    std::string ID;
    params_t params;

    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_params() { __skip_params = true; }

    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_params() const { return __json_has_params; }

    ap_log_cmd_t();
    ap_log_cmd_t& operator=(const ap_log_cmd_t& obj_val);
    bool operator==(const ap_log_cmd_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_RPCMethod;
    bool __skip_ID;
    bool __skip_params;

    bool __json_has_RPCMethod;
    bool __json_has_ID;
    bool __json_has_params;
};

bool encode(const ap_log_cmd_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, ap_log_cmd_t& obj_val);

} // namespace slothjson

#endif // __ap_log_msg_20180630142749_h__
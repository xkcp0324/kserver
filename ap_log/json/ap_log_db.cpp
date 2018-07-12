////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by slothjson. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#include "ap_log_db.h"

namespace slothjson {

cs_name_t::cs_name_t()
{
    __skip_Name = false;
    __json_has_Name = false;
}

cs_name_t& cs_name_t::operator=(const cs_name_t& obj_val)
{
    this->Name = obj_val.Name;
    return *this;
}

bool cs_name_t::operator==(const cs_name_t& obj_val) const
{
    if (!(this->Name == obj_val.Name)) return false;
    return true;
}

bool cs_name_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_Name && !encode_field(Name, "Name", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool cs_name_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "Name", Name, __json_has_Name)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const cs_name_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, cs_name_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_create_t::index_create_t()
{
    __skip_indexDef = false;
    __json_has_indexDef = false;

    __skip_pIndexName = false;
    __json_has_pIndexName = false;

    isUnique = 0;
    __skip_isUnique = false;
    __json_has_isUnique = false;

    isEnforced = 0;
    __skip_isEnforced = false;
    __json_has_isEnforced = false;
}

index_create_t& index_create_t::operator=(const index_create_t& obj_val)
{
    this->indexDef = obj_val.indexDef;
    this->pIndexName = obj_val.pIndexName;
    this->isUnique = obj_val.isUnique;
    this->isEnforced = obj_val.isEnforced;
    return *this;
}

bool index_create_t::operator==(const index_create_t& obj_val) const
{
    if (!(this->indexDef == obj_val.indexDef)) return false;
    if (!(this->pIndexName == obj_val.pIndexName)) return false;
    if (!(this->isUnique == obj_val.isUnique)) return false;
    if (!(this->isEnforced == obj_val.isEnforced)) return false;
    return true;
}

bool index_create_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_indexDef && !encode_field(indexDef, "indexDef", alloc, json_val)) break;
        if (!__skip_pIndexName && !encode_field(pIndexName, "pIndexName", alloc, json_val)) break;
        if (!__skip_isUnique && !encode_field(isUnique, "isUnique", alloc, json_val)) break;
        if (!__skip_isEnforced && !encode_field(isEnforced, "isEnforced", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_create_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "indexDef", indexDef, __json_has_indexDef)) break;
        if (!decode_field(json_val, "pIndexName", pIndexName, __json_has_pIndexName)) break;
        if (!decode_field(json_val, "isUnique", isUnique, __json_has_isUnique)) break;
        if (!decode_field(json_val, "isEnforced", isEnforced, __json_has_isEnforced)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_create_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_create_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_param_time_t::index_param_time_t()
{
    index_name = "index_param_time";
    __skip_index_name = false;
    __json_has_index_name = false;

    param_time = 1;
    __skip_param_time = false;
    __json_has_param_time = false;
}

index_param_time_t& index_param_time_t::operator=(const index_param_time_t& obj_val)
{
    this->index_name = obj_val.index_name;
    this->param_time = obj_val.param_time;
    return *this;
}

bool index_param_time_t::operator==(const index_param_time_t& obj_val) const
{
    if (!(this->index_name == obj_val.index_name)) return false;
    if (!(this->param_time == obj_val.param_time)) return false;
    return true;
}

bool index_param_time_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_index_name && !encode_field(index_name, "index_name", alloc, json_val)) break;
        if (!__skip_param_time && !encode_field(param_time, "param_time", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_param_time_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "index_name", index_name, __json_has_index_name)) break;
        if (!decode_field(json_val, "param_time", param_time, __json_has_param_time)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_param_time_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_param_time_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_mac_t::index_mac_t()
{
    index_name = "mac";
    __skip_index_name = false;
    __json_has_index_name = false;

    mac = 1;
    __skip_mac = false;
    __json_has_mac = false;
}

index_mac_t& index_mac_t::operator=(const index_mac_t& obj_val)
{
    this->index_name = obj_val.index_name;
    this->mac = obj_val.mac;
    return *this;
}

bool index_mac_t::operator==(const index_mac_t& obj_val) const
{
    if (!(this->index_name == obj_val.index_name)) return false;
    if (!(this->mac == obj_val.mac)) return false;
    return true;
}

bool index_mac_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_index_name && !encode_field(index_name, "index_name", alloc, json_val)) break;
        if (!__skip_mac && !encode_field(mac, "mac", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_mac_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "index_name", index_name, __json_has_index_name)) break;
        if (!decode_field(json_val, "mac", mac, __json_has_mac)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_mac_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_mac_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_ID_t::index_ID_t()
{
    index_name = "index_ID";
    __skip_index_name = false;
    __json_has_index_name = false;

    ID = 1;
    __skip_ID = false;
    __json_has_ID = false;
}

index_ID_t& index_ID_t::operator=(const index_ID_t& obj_val)
{
    this->index_name = obj_val.index_name;
    this->ID = obj_val.ID;
    return *this;
}

bool index_ID_t::operator==(const index_ID_t& obj_val) const
{
    if (!(this->index_name == obj_val.index_name)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    return true;
}

bool index_ID_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_index_name && !encode_field(index_name, "index_name", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_ID_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "index_name", index_name, __json_has_index_name)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_ID_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_ID_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_addtime_t::index_addtime_t()
{
    index_name = "index_addtime";
    __skip_index_name = false;
    __json_has_index_name = false;

    addtime = 1;
    __skip_addtime = false;
    __json_has_addtime = false;
}

index_addtime_t& index_addtime_t::operator=(const index_addtime_t& obj_val)
{
    this->index_name = obj_val.index_name;
    this->addtime = obj_val.addtime;
    return *this;
}

bool index_addtime_t::operator==(const index_addtime_t& obj_val) const
{
    if (!(this->index_name == obj_val.index_name)) return false;
    if (!(this->addtime == obj_val.addtime)) return false;
    return true;
}

bool index_addtime_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_index_name && !encode_field(index_name, "index_name", alloc, json_val)) break;
        if (!__skip_addtime && !encode_field(addtime, "addtime", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_addtime_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "index_name", index_name, __json_has_index_name)) break;
        if (!decode_field(json_val, "addtime", addtime, __json_has_addtime)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_addtime_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_addtime_t& obj_val)
{
    return obj_val.decode(json_val);
}

index_mac_RPCMethod_t::index_mac_RPCMethod_t()
{
    index_name = "index_mac";
    __skip_index_name = false;
    __json_has_index_name = false;

    mac = 1;
    __skip_mac = false;
    __json_has_mac = false;

    RPCMethod = 1;
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;
}

index_mac_RPCMethod_t& index_mac_RPCMethod_t::operator=(const index_mac_RPCMethod_t& obj_val)
{
    this->index_name = obj_val.index_name;
    this->mac = obj_val.mac;
    this->RPCMethod = obj_val.RPCMethod;
    return *this;
}

bool index_mac_RPCMethod_t::operator==(const index_mac_RPCMethod_t& obj_val) const
{
    if (!(this->index_name == obj_val.index_name)) return false;
    if (!(this->mac == obj_val.mac)) return false;
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    return true;
}

bool index_mac_RPCMethod_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_index_name && !encode_field(index_name, "index_name", alloc, json_val)) break;
        if (!__skip_mac && !encode_field(mac, "mac", alloc, json_val)) break;
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool index_mac_RPCMethod_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "index_name", index_name, __json_has_index_name)) break;
        if (!decode_field(json_val, "mac", mac, __json_has_mac)) break;
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const index_mac_RPCMethod_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, index_mac_RPCMethod_t& obj_val)
{
    return obj_val.decode(json_val);
}

ap_log_config_t::ap_log_config_t()
{
    __skip_param_name = false;
    __json_has_param_name = false;

    param_time = 0;
    __skip_param_time = false;
    __json_has_param_time = false;

    param_value = 0;
    __skip_param_value = false;
    __json_has_param_value = false;
}

ap_log_config_t& ap_log_config_t::operator=(const ap_log_config_t& obj_val)
{
    this->param_name = obj_val.param_name;
    this->param_time = obj_val.param_time;
    this->param_value = obj_val.param_value;
    return *this;
}

bool ap_log_config_t::operator==(const ap_log_config_t& obj_val) const
{
    if (!(this->param_name == obj_val.param_name)) return false;
    if (!(this->param_time == obj_val.param_time)) return false;
    if (!(this->param_value == obj_val.param_value)) return false;
    return true;
}

bool ap_log_config_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_param_name && !encode_field(param_name, "param_name", alloc, json_val)) break;
        if (!__skip_param_time && !encode_field(param_time, "param_time", alloc, json_val)) break;
        if (!__skip_param_value && !encode_field(param_value, "param_value", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool ap_log_config_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "param_name", param_name, __json_has_param_name)) break;
        if (!decode_field(json_val, "param_time", param_time, __json_has_param_time)) break;
        if (!decode_field(json_val, "param_value", param_value, __json_has_param_value)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const ap_log_config_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, ap_log_config_t& obj_val)
{
    return obj_val.decode(json_val);
}

ap_log_qos_vip_t::ap_log_qos_vip_t()
{
    __skip_mac = false;
    __json_has_mac = false;

    addtime = 0;
    __skip_addtime = false;
    __json_has_addtime = false;

    __skip_info = false;
    __json_has_info = false;

    loglev = 0;
    __skip_loglev = false;
    __json_has_loglev = false;
}

ap_log_qos_vip_t& ap_log_qos_vip_t::operator=(const ap_log_qos_vip_t& obj_val)
{
    this->mac = obj_val.mac;
    this->addtime = obj_val.addtime;
    this->info = obj_val.info;
    this->loglev = obj_val.loglev;
    return *this;
}

bool ap_log_qos_vip_t::operator==(const ap_log_qos_vip_t& obj_val) const
{
    if (!(this->mac == obj_val.mac)) return false;
    if (!(this->addtime == obj_val.addtime)) return false;
    if (!(this->info == obj_val.info)) return false;
    if (!(this->loglev == obj_val.loglev)) return false;
    return true;
}

bool ap_log_qos_vip_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_mac && !encode_field(mac, "mac", alloc, json_val)) break;
        if (!__skip_addtime && !encode_field(addtime, "addtime", alloc, json_val)) break;
        if (!__skip_info && !encode_field(info, "info", alloc, json_val)) break;
        if (!__skip_loglev && !encode_field(loglev, "loglev", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool ap_log_qos_vip_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "mac", mac, __json_has_mac)) break;
        if (!decode_field(json_val, "addtime", addtime, __json_has_addtime)) break;
        if (!decode_field(json_val, "info", info, __json_has_info)) break;
        if (!decode_field(json_val, "loglev", loglev, __json_has_loglev)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const ap_log_qos_vip_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, ap_log_qos_vip_t& obj_val)
{
    return obj_val.decode(json_val);
}

ap_log_dev_t::ap_log_dev_t()
{
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_mac = false;
    __json_has_mac = false;

    __skip_server = false;
    __json_has_server = false;

    __skip_remote = false;
    __json_has_remote = false;

    __skip_start_time = false;
    __json_has_start_time = false;

    __skip_end_time = false;
    __json_has_end_time = false;

    __skip_client_ip = false;
    __json_has_client_ip = false;

    direction = 0;
    __skip_direction = false;
    __json_has_direction = false;

    Result = 0;
    __skip_Result = false;
    __json_has_Result = false;

    addtime = 0;
    __skip_addtime = false;
    __json_has_addtime = false;

    __skip_in = false;
    __json_has_in = false;

    __skip_out = false;
    __json_has_out = false;
}

ap_log_dev_t& ap_log_dev_t::operator=(const ap_log_dev_t& obj_val)
{
    this->RPCMethod = obj_val.RPCMethod;
    this->ID = obj_val.ID;
    this->mac = obj_val.mac;
    this->server = obj_val.server;
    this->remote = obj_val.remote;
    this->start_time = obj_val.start_time;
    this->end_time = obj_val.end_time;
    this->client_ip = obj_val.client_ip;
    this->direction = obj_val.direction;
    this->Result = obj_val.Result;
    this->addtime = obj_val.addtime;
    this->in = obj_val.in;
    this->out = obj_val.out;
    return *this;
}

bool ap_log_dev_t::operator==(const ap_log_dev_t& obj_val) const
{
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->mac == obj_val.mac)) return false;
    if (!(this->server == obj_val.server)) return false;
    if (!(this->remote == obj_val.remote)) return false;
    if (!(this->start_time == obj_val.start_time)) return false;
    if (!(this->end_time == obj_val.end_time)) return false;
    if (!(this->client_ip == obj_val.client_ip)) return false;
    if (!(this->direction == obj_val.direction)) return false;
    if (!(this->Result == obj_val.Result)) return false;
    if (!(this->addtime == obj_val.addtime)) return false;
    if (!(this->in == obj_val.in)) return false;
    if (!(this->out == obj_val.out)) return false;
    return true;
}

bool ap_log_dev_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_mac && !encode_field(mac, "mac", alloc, json_val)) break;
        if (!__skip_server && !encode_field(server, "server", alloc, json_val)) break;
        if (!__skip_remote && !encode_field(remote, "remote", alloc, json_val)) break;
        if (!__skip_start_time && !encode_field(start_time, "start_time", alloc, json_val)) break;
        if (!__skip_end_time && !encode_field(end_time, "end_time", alloc, json_val)) break;
        if (!__skip_client_ip && !encode_field(client_ip, "client_ip", alloc, json_val)) break;
        if (!__skip_direction && !encode_field(direction, "direction", alloc, json_val)) break;
        if (!__skip_Result && !encode_field(Result, "Result", alloc, json_val)) break;
        if (!__skip_addtime && !encode_field(addtime, "addtime", alloc, json_val)) break;
        if (!__skip_in && !encode_field(in, "in", alloc, json_val)) break;
        if (!__skip_out && !encode_field(out, "out", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool ap_log_dev_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "mac", mac, __json_has_mac)) break;
        if (!decode_field(json_val, "server", server, __json_has_server)) break;
        if (!decode_field(json_val, "remote", remote, __json_has_remote)) break;
        if (!decode_field(json_val, "start_time", start_time, __json_has_start_time)) break;
        if (!decode_field(json_val, "end_time", end_time, __json_has_end_time)) break;
        if (!decode_field(json_val, "client_ip", client_ip, __json_has_client_ip)) break;
        if (!decode_field(json_val, "direction", direction, __json_has_direction)) break;
        if (!decode_field(json_val, "Result", Result, __json_has_Result)) break;
        if (!decode_field(json_val, "addtime", addtime, __json_has_addtime)) break;
        if (!decode_field(json_val, "in", in, __json_has_in)) break;
        if (!decode_field(json_val, "out", out, __json_has_out)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const ap_log_dev_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, ap_log_dev_t& obj_val)
{
    return obj_val.decode(json_val);
}

} // namespace slothjson
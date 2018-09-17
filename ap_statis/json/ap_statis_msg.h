////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by slothjson. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __ap_statis_msg_20180906143558_h__
#define __ap_statis_msg_20180906143558_h__

#include "slothjson.h"

namespace slothjson {

struct Heartbeat_t
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

    Heartbeat_t();
    Heartbeat_t& operator=(const Heartbeat_t& obj_val);
    bool operator==(const Heartbeat_t& obj_val) const;
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

bool encode(const Heartbeat_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, Heartbeat_t& obj_val);

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
    std::string return_Parameter;

    void skip_Result() { __skip_Result = true; }
    void skip_Ack() { __skip_Ack = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_return_Parameter() { __skip_return_Parameter = true; }

    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_Ack() const { return __json_has_Ack; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_return_Parameter() const { return __json_has_return_Parameter; }

    params_out_t();
    params_out_t& operator=(const params_out_t& obj_val);
    bool operator==(const params_out_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_Result;
    bool __skip_Ack;
    bool __skip_ID;
    bool __skip_return_Parameter;

    bool __json_has_Result;
    bool __json_has_Ack;
    bool __json_has_ID;
    bool __json_has_return_Parameter;
};

bool encode(const params_out_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, params_out_t& obj_val);

struct params_t
{
    std::string MAC;
    std::string DevID;
    std::string remote;
    std::string Vendor;
    std::string Model;
    std::string HardwareVer;
    std::string FirmwareVer;
    std::string SN;
    std::string CloudClientVer;
    std::string MiddleWareVer;
    std::string MiddleWareBakVer;
    std::string IPAddr;
    std::string PlatformID;
    std::string LOID;
    std::string province;
    std::string city;
    uint64_t time;

    void skip_MAC() { __skip_MAC = true; }
    void skip_DevID() { __skip_DevID = true; }
    void skip_remote() { __skip_remote = true; }
    void skip_Vendor() { __skip_Vendor = true; }
    void skip_Model() { __skip_Model = true; }
    void skip_HardwareVer() { __skip_HardwareVer = true; }
    void skip_FirmwareVer() { __skip_FirmwareVer = true; }
    void skip_SN() { __skip_SN = true; }
    void skip_CloudClientVer() { __skip_CloudClientVer = true; }
    void skip_MiddleWareVer() { __skip_MiddleWareVer = true; }
    void skip_MiddleWareBakVer() { __skip_MiddleWareBakVer = true; }
    void skip_IPAddr() { __skip_IPAddr = true; }
    void skip_PlatformID() { __skip_PlatformID = true; }
    void skip_LOID() { __skip_LOID = true; }
    void skip_province() { __skip_province = true; }
    void skip_city() { __skip_city = true; }
    void skip_time() { __skip_time = true; }

    bool json_has_MAC() const { return __json_has_MAC; }
    bool json_has_DevID() const { return __json_has_DevID; }
    bool json_has_remote() const { return __json_has_remote; }
    bool json_has_Vendor() const { return __json_has_Vendor; }
    bool json_has_Model() const { return __json_has_Model; }
    bool json_has_HardwareVer() const { return __json_has_HardwareVer; }
    bool json_has_FirmwareVer() const { return __json_has_FirmwareVer; }
    bool json_has_SN() const { return __json_has_SN; }
    bool json_has_CloudClientVer() const { return __json_has_CloudClientVer; }
    bool json_has_MiddleWareVer() const { return __json_has_MiddleWareVer; }
    bool json_has_MiddleWareBakVer() const { return __json_has_MiddleWareBakVer; }
    bool json_has_IPAddr() const { return __json_has_IPAddr; }
    bool json_has_PlatformID() const { return __json_has_PlatformID; }
    bool json_has_LOID() const { return __json_has_LOID; }
    bool json_has_province() const { return __json_has_province; }
    bool json_has_city() const { return __json_has_city; }
    bool json_has_time() const { return __json_has_time; }

    params_t();
    params_t& operator=(const params_t& obj_val);
    bool operator==(const params_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_MAC;
    bool __skip_DevID;
    bool __skip_remote;
    bool __skip_Vendor;
    bool __skip_Model;
    bool __skip_HardwareVer;
    bool __skip_FirmwareVer;
    bool __skip_SN;
    bool __skip_CloudClientVer;
    bool __skip_MiddleWareVer;
    bool __skip_MiddleWareBakVer;
    bool __skip_IPAddr;
    bool __skip_PlatformID;
    bool __skip_LOID;
    bool __skip_province;
    bool __skip_city;
    bool __skip_time;

    bool __json_has_MAC;
    bool __json_has_DevID;
    bool __json_has_remote;
    bool __json_has_Vendor;
    bool __json_has_Model;
    bool __json_has_HardwareVer;
    bool __json_has_FirmwareVer;
    bool __json_has_SN;
    bool __json_has_CloudClientVer;
    bool __json_has_MiddleWareVer;
    bool __json_has_MiddleWareBakVer;
    bool __json_has_IPAddr;
    bool __json_has_PlatformID;
    bool __json_has_LOID;
    bool __json_has_province;
    bool __json_has_city;
    bool __json_has_time;
};

bool encode(const params_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, params_t& obj_val);

struct onoffline_t
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

    onoffline_t();
    onoffline_t& operator=(const onoffline_t& obj_val);
    bool operator==(const onoffline_t& obj_val) const;
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

bool encode(const onoffline_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, onoffline_t& obj_val);

struct PluginNotification_t
{
    std::string RPCMethod;
    std::string ID;
    std::string Plugin_Name;
    std::string Version;
    std::string Time;
    std::string Message;

    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_Plugin_Name() { __skip_Plugin_Name = true; }
    void skip_Version() { __skip_Version = true; }
    void skip_Time() { __skip_Time = true; }
    void skip_Message() { __skip_Message = true; }

    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_Plugin_Name() const { return __json_has_Plugin_Name; }
    bool json_has_Version() const { return __json_has_Version; }
    bool json_has_Time() const { return __json_has_Time; }
    bool json_has_Message() const { return __json_has_Message; }

    PluginNotification_t();
    PluginNotification_t& operator=(const PluginNotification_t& obj_val);
    bool operator==(const PluginNotification_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_RPCMethod;
    bool __skip_ID;
    bool __skip_Plugin_Name;
    bool __skip_Version;
    bool __skip_Time;
    bool __skip_Message;

    bool __json_has_RPCMethod;
    bool __json_has_ID;
    bool __json_has_Plugin_Name;
    bool __json_has_Version;
    bool __json_has_Time;
    bool __json_has_Message;
};

bool encode(const PluginNotification_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, PluginNotification_t& obj_val);

struct SetPluginParams_t
{
    int32_t Result;
    std::string Ack;
    std::string return_Parameter;
    std::string ID;
    std::string MAC;

    void skip_Result() { __skip_Result = true; }
    void skip_Ack() { __skip_Ack = true; }
    void skip_return_Parameter() { __skip_return_Parameter = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_MAC() { __skip_MAC = true; }

    bool json_has_Result() const { return __json_has_Result; }
    bool json_has_Ack() const { return __json_has_Ack; }
    bool json_has_return_Parameter() const { return __json_has_return_Parameter; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_MAC() const { return __json_has_MAC; }

    SetPluginParams_t();
    SetPluginParams_t& operator=(const SetPluginParams_t& obj_val);
    bool operator==(const SetPluginParams_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_Result;
    bool __skip_Ack;
    bool __skip_return_Parameter;
    bool __skip_ID;
    bool __skip_MAC;

    bool __json_has_Result;
    bool __json_has_Ack;
    bool __json_has_return_Parameter;
    bool __json_has_ID;
    bool __json_has_MAC;
};

bool encode(const SetPluginParams_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, SetPluginParams_t& obj_val);

struct cmd_t
{
    std::string RPCMethod;
    std::string ID;
    std::string Ack;

    void skip_RPCMethod() { __skip_RPCMethod = true; }
    void skip_ID() { __skip_ID = true; }
    void skip_Ack() { __skip_Ack = true; }

    bool json_has_RPCMethod() const { return __json_has_RPCMethod; }
    bool json_has_ID() const { return __json_has_ID; }
    bool json_has_Ack() const { return __json_has_Ack; }

    cmd_t();
    cmd_t& operator=(const cmd_t& obj_val);
    bool operator==(const cmd_t& obj_val) const;
    bool encode(allocator_t& alloc, rapidjson::Value& json_val) const;
    bool decode(const rapidjson::Value& json_val);

private:
    bool __skip_RPCMethod;
    bool __skip_ID;
    bool __skip_Ack;

    bool __json_has_RPCMethod;
    bool __json_has_ID;
    bool __json_has_Ack;
};

bool encode(const cmd_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val);
bool decode(const rapidjson::Value& json_val, cmd_t& obj_val);

} // namespace slothjson

#endif // __ap_statis_msg_20180906143558_h__
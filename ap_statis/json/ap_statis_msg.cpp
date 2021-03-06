////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by slothjson. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#include "ap_statis_msg.h"

namespace slothjson {

Heartbeat_t::Heartbeat_t()
{
    Result = 0;
    __skip_Result = false;
    __json_has_Result = false;

    Ack = "Heartbeat";
    __skip_Ack = false;
    __json_has_Ack = false;

    __skip_ID = false;
    __json_has_ID = false;
}

Heartbeat_t& Heartbeat_t::operator=(const Heartbeat_t& obj_val)
{
    this->Result = obj_val.Result;
    this->Ack = obj_val.Ack;
    this->ID = obj_val.ID;
    return *this;
}

bool Heartbeat_t::operator==(const Heartbeat_t& obj_val) const
{
    if (!(this->Result == obj_val.Result)) return false;
    if (!(this->Ack == obj_val.Ack)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    return true;
}

bool Heartbeat_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_Result && !encode_field(Result, "Result", alloc, json_val)) break;
        if (!__skip_Ack && !encode_field(Ack, "Ack", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool Heartbeat_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "Result", Result, __json_has_Result)) break;
        if (!decode_field(json_val, "Ack", Ack, __json_has_Ack)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const Heartbeat_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, Heartbeat_t& obj_val)
{
    return obj_val.decode(json_val);
}

params_in_t::params_in_t()
{
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_Plugin_Name = false;
    __json_has_Plugin_Name = false;

    __skip_Time = false;
    __json_has_Time = false;

    __skip_Message = false;
    __json_has_Message = false;
}

params_in_t& params_in_t::operator=(const params_in_t& obj_val)
{
    this->RPCMethod = obj_val.RPCMethod;
    this->ID = obj_val.ID;
    this->Plugin_Name = obj_val.Plugin_Name;
    this->Time = obj_val.Time;
    this->Message = obj_val.Message;
    return *this;
}

bool params_in_t::operator==(const params_in_t& obj_val) const
{
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->Plugin_Name == obj_val.Plugin_Name)) return false;
    if (!(this->Time == obj_val.Time)) return false;
    if (!(this->Message == obj_val.Message)) return false;
    return true;
}

bool params_in_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_Plugin_Name && !encode_field(Plugin_Name, "Plugin_Name", alloc, json_val)) break;
        if (!__skip_Time && !encode_field(Time, "Time", alloc, json_val)) break;
        if (!__skip_Message && !encode_field(Message, "Message", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool params_in_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "Plugin_Name", Plugin_Name, __json_has_Plugin_Name)) break;
        if (!decode_field(json_val, "Time", Time, __json_has_Time)) break;
        if (!decode_field(json_val, "Message", Message, __json_has_Message)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const params_in_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, params_in_t& obj_val)
{
    return obj_val.decode(json_val);
}

params_out_t::params_out_t()
{
    Result = 0;
    __skip_Result = false;
    __json_has_Result = false;

    __skip_Ack = false;
    __json_has_Ack = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_return_Parameter = false;
    __json_has_return_Parameter = false;
}

params_out_t& params_out_t::operator=(const params_out_t& obj_val)
{
    this->Result = obj_val.Result;
    this->Ack = obj_val.Ack;
    this->ID = obj_val.ID;
    this->return_Parameter = obj_val.return_Parameter;
    return *this;
}

bool params_out_t::operator==(const params_out_t& obj_val) const
{
    if (!(this->Result == obj_val.Result)) return false;
    if (!(this->Ack == obj_val.Ack)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->return_Parameter == obj_val.return_Parameter)) return false;
    return true;
}

bool params_out_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_Result && !encode_field(Result, "Result", alloc, json_val)) break;
        if (!__skip_Ack && !encode_field(Ack, "Ack", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_return_Parameter && !encode_field(return_Parameter, "return_Parameter", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool params_out_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "Result", Result, __json_has_Result)) break;
        if (!decode_field(json_val, "Ack", Ack, __json_has_Ack)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "return_Parameter", return_Parameter, __json_has_return_Parameter)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const params_out_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, params_out_t& obj_val)
{
    return obj_val.decode(json_val);
}

params_t::params_t()
{
    __skip_MAC = false;
    __json_has_MAC = false;

    __skip_DevID = false;
    __json_has_DevID = false;

    __skip_remote = false;
    __json_has_remote = false;

    __skip_Vendor = false;
    __json_has_Vendor = false;

    __skip_Model = false;
    __json_has_Model = false;

    __skip_HardwareVer = false;
    __json_has_HardwareVer = false;

    __skip_FirmwareVer = false;
    __json_has_FirmwareVer = false;

    __skip_SN = false;
    __json_has_SN = false;

    __skip_CloudClientVer = false;
    __json_has_CloudClientVer = false;

    __skip_MiddleWareVer = false;
    __json_has_MiddleWareVer = false;

    __skip_MiddleWareBakVer = false;
    __json_has_MiddleWareBakVer = false;

    __skip_IPAddr = false;
    __json_has_IPAddr = false;

    __skip_PlatformID = false;
    __json_has_PlatformID = false;

    __skip_LOID = false;
    __json_has_LOID = false;

    __skip_province = false;
    __json_has_province = false;

    __skip_city = false;
    __json_has_city = false;

    time = 0;
    __skip_time = false;
    __json_has_time = false;
}

params_t& params_t::operator=(const params_t& obj_val)
{
    this->MAC = obj_val.MAC;
    this->DevID = obj_val.DevID;
    this->remote = obj_val.remote;
    this->Vendor = obj_val.Vendor;
    this->Model = obj_val.Model;
    this->HardwareVer = obj_val.HardwareVer;
    this->FirmwareVer = obj_val.FirmwareVer;
    this->SN = obj_val.SN;
    this->CloudClientVer = obj_val.CloudClientVer;
    this->MiddleWareVer = obj_val.MiddleWareVer;
    this->MiddleWareBakVer = obj_val.MiddleWareBakVer;
    this->IPAddr = obj_val.IPAddr;
    this->PlatformID = obj_val.PlatformID;
    this->LOID = obj_val.LOID;
    this->province = obj_val.province;
    this->city = obj_val.city;
    this->time = obj_val.time;
    return *this;
}

bool params_t::operator==(const params_t& obj_val) const
{
    if (!(this->MAC == obj_val.MAC)) return false;
    if (!(this->DevID == obj_val.DevID)) return false;
    if (!(this->remote == obj_val.remote)) return false;
    if (!(this->Vendor == obj_val.Vendor)) return false;
    if (!(this->Model == obj_val.Model)) return false;
    if (!(this->HardwareVer == obj_val.HardwareVer)) return false;
    if (!(this->FirmwareVer == obj_val.FirmwareVer)) return false;
    if (!(this->SN == obj_val.SN)) return false;
    if (!(this->CloudClientVer == obj_val.CloudClientVer)) return false;
    if (!(this->MiddleWareVer == obj_val.MiddleWareVer)) return false;
    if (!(this->MiddleWareBakVer == obj_val.MiddleWareBakVer)) return false;
    if (!(this->IPAddr == obj_val.IPAddr)) return false;
    if (!(this->PlatformID == obj_val.PlatformID)) return false;
    if (!(this->LOID == obj_val.LOID)) return false;
    if (!(this->province == obj_val.province)) return false;
    if (!(this->city == obj_val.city)) return false;
    if (!(this->time == obj_val.time)) return false;
    return true;
}

bool params_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_MAC && !encode_field(MAC, "MAC", alloc, json_val)) break;
        if (!__skip_DevID && !encode_field(DevID, "DevID", alloc, json_val)) break;
        if (!__skip_remote && !encode_field(remote, "remote", alloc, json_val)) break;
        if (!__skip_Vendor && !encode_field(Vendor, "Vendor", alloc, json_val)) break;
        if (!__skip_Model && !encode_field(Model, "Model", alloc, json_val)) break;
        if (!__skip_HardwareVer && !encode_field(HardwareVer, "HardwareVer", alloc, json_val)) break;
        if (!__skip_FirmwareVer && !encode_field(FirmwareVer, "FirmwareVer", alloc, json_val)) break;
        if (!__skip_SN && !encode_field(SN, "SN", alloc, json_val)) break;
        if (!__skip_CloudClientVer && !encode_field(CloudClientVer, "CloudClientVer", alloc, json_val)) break;
        if (!__skip_MiddleWareVer && !encode_field(MiddleWareVer, "MiddleWareVer", alloc, json_val)) break;
        if (!__skip_MiddleWareBakVer && !encode_field(MiddleWareBakVer, "MiddleWareBakVer", alloc, json_val)) break;
        if (!__skip_IPAddr && !encode_field(IPAddr, "IPAddr", alloc, json_val)) break;
        if (!__skip_PlatformID && !encode_field(PlatformID, "PlatformID", alloc, json_val)) break;
        if (!__skip_LOID && !encode_field(LOID, "LOID", alloc, json_val)) break;
        if (!__skip_province && !encode_field(province, "province", alloc, json_val)) break;
        if (!__skip_city && !encode_field(city, "city", alloc, json_val)) break;
        if (!__skip_time && !encode_field(time, "time", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool params_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "MAC", MAC, __json_has_MAC)) break;
        if (!decode_field(json_val, "DevID", DevID, __json_has_DevID)) break;
        if (!decode_field(json_val, "remote", remote, __json_has_remote)) break;
        if (!decode_field(json_val, "Vendor", Vendor, __json_has_Vendor)) break;
        if (!decode_field(json_val, "Model", Model, __json_has_Model)) break;
        if (!decode_field(json_val, "HardwareVer", HardwareVer, __json_has_HardwareVer)) break;
        if (!decode_field(json_val, "FirmwareVer", FirmwareVer, __json_has_FirmwareVer)) break;
        if (!decode_field(json_val, "SN", SN, __json_has_SN)) break;
        if (!decode_field(json_val, "CloudClientVer", CloudClientVer, __json_has_CloudClientVer)) break;
        if (!decode_field(json_val, "MiddleWareVer", MiddleWareVer, __json_has_MiddleWareVer)) break;
        if (!decode_field(json_val, "MiddleWareBakVer", MiddleWareBakVer, __json_has_MiddleWareBakVer)) break;
        if (!decode_field(json_val, "IPAddr", IPAddr, __json_has_IPAddr)) break;
        if (!decode_field(json_val, "PlatformID", PlatformID, __json_has_PlatformID)) break;
        if (!decode_field(json_val, "LOID", LOID, __json_has_LOID)) break;
        if (!decode_field(json_val, "province", province, __json_has_province)) break;
        if (!decode_field(json_val, "city", city, __json_has_city)) break;
        if (!decode_field(json_val, "time", time, __json_has_time)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const params_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, params_t& obj_val)
{
    return obj_val.decode(json_val);
}

onoffline_t::onoffline_t()
{
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_params = false;
    __json_has_params = false;
}

onoffline_t& onoffline_t::operator=(const onoffline_t& obj_val)
{
    this->RPCMethod = obj_val.RPCMethod;
    this->ID = obj_val.ID;
    this->params = obj_val.params;
    return *this;
}

bool onoffline_t::operator==(const onoffline_t& obj_val) const
{
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->params == obj_val.params)) return false;
    return true;
}

bool onoffline_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_params && !encode_field(params, "params", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool onoffline_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "params", params, __json_has_params)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const onoffline_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, onoffline_t& obj_val)
{
    return obj_val.decode(json_val);
}

PluginNotification_t::PluginNotification_t()
{
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_Plugin_Name = false;
    __json_has_Plugin_Name = false;

    __skip_Version = false;
    __json_has_Version = false;

    __skip_Time = false;
    __json_has_Time = false;

    __skip_Message = false;
    __json_has_Message = false;
}

PluginNotification_t& PluginNotification_t::operator=(const PluginNotification_t& obj_val)
{
    this->RPCMethod = obj_val.RPCMethod;
    this->ID = obj_val.ID;
    this->Plugin_Name = obj_val.Plugin_Name;
    this->Version = obj_val.Version;
    this->Time = obj_val.Time;
    this->Message = obj_val.Message;
    return *this;
}

bool PluginNotification_t::operator==(const PluginNotification_t& obj_val) const
{
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->Plugin_Name == obj_val.Plugin_Name)) return false;
    if (!(this->Version == obj_val.Version)) return false;
    if (!(this->Time == obj_val.Time)) return false;
    if (!(this->Message == obj_val.Message)) return false;
    return true;
}

bool PluginNotification_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_Plugin_Name && !encode_field(Plugin_Name, "Plugin_Name", alloc, json_val)) break;
        if (!__skip_Version && !encode_field(Version, "Version", alloc, json_val)) break;
        if (!__skip_Time && !encode_field(Time, "Time", alloc, json_val)) break;
        if (!__skip_Message && !encode_field(Message, "Message", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool PluginNotification_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "Plugin_Name", Plugin_Name, __json_has_Plugin_Name)) break;
        if (!decode_field(json_val, "Version", Version, __json_has_Version)) break;
        if (!decode_field(json_val, "Time", Time, __json_has_Time)) break;
        if (!decode_field(json_val, "Message", Message, __json_has_Message)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const PluginNotification_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, PluginNotification_t& obj_val)
{
    return obj_val.decode(json_val);
}

SetPluginParams_t::SetPluginParams_t()
{
    Result = 0;
    __skip_Result = false;
    __json_has_Result = false;

    __skip_Ack = false;
    __json_has_Ack = false;

    __skip_return_Parameter = false;
    __json_has_return_Parameter = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_MAC = false;
    __json_has_MAC = false;
}

SetPluginParams_t& SetPluginParams_t::operator=(const SetPluginParams_t& obj_val)
{
    this->Result = obj_val.Result;
    this->Ack = obj_val.Ack;
    this->return_Parameter = obj_val.return_Parameter;
    this->ID = obj_val.ID;
    this->MAC = obj_val.MAC;
    return *this;
}

bool SetPluginParams_t::operator==(const SetPluginParams_t& obj_val) const
{
    if (!(this->Result == obj_val.Result)) return false;
    if (!(this->Ack == obj_val.Ack)) return false;
    if (!(this->return_Parameter == obj_val.return_Parameter)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->MAC == obj_val.MAC)) return false;
    return true;
}

bool SetPluginParams_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_Result && !encode_field(Result, "Result", alloc, json_val)) break;
        if (!__skip_Ack && !encode_field(Ack, "Ack", alloc, json_val)) break;
        if (!__skip_return_Parameter && !encode_field(return_Parameter, "return_Parameter", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_MAC && !encode_field(MAC, "MAC", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool SetPluginParams_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "Result", Result, __json_has_Result)) break;
        if (!decode_field(json_val, "Ack", Ack, __json_has_Ack)) break;
        if (!decode_field(json_val, "return_Parameter", return_Parameter, __json_has_return_Parameter)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "MAC", MAC, __json_has_MAC)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const SetPluginParams_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, SetPluginParams_t& obj_val)
{
    return obj_val.decode(json_val);
}

cmd_t::cmd_t()
{
    __skip_RPCMethod = false;
    __json_has_RPCMethod = false;

    __skip_ID = false;
    __json_has_ID = false;

    __skip_Ack = false;
    __json_has_Ack = false;
}

cmd_t& cmd_t::operator=(const cmd_t& obj_val)
{
    this->RPCMethod = obj_val.RPCMethod;
    this->ID = obj_val.ID;
    this->Ack = obj_val.Ack;
    return *this;
}

bool cmd_t::operator==(const cmd_t& obj_val) const
{
    if (!(this->RPCMethod == obj_val.RPCMethod)) return false;
    if (!(this->ID == obj_val.ID)) return false;
    if (!(this->Ack == obj_val.Ack)) return false;
    return true;
}

bool cmd_t::encode(allocator_t& alloc, rapidjson::Value& json_val) const
{
    do
    {
        json_val.SetObject();
        if (!__skip_RPCMethod && !encode_field(RPCMethod, "RPCMethod", alloc, json_val)) break;
        if (!__skip_ID && !encode_field(ID, "ID", alloc, json_val)) break;
        if (!__skip_Ack && !encode_field(Ack, "Ack", alloc, json_val)) break;

        return true;
    } while (0);

    return false;
}

bool cmd_t::decode(const rapidjson::Value& json_val)
{
    do
    {
        if (!decode_field(json_val, "RPCMethod", RPCMethod, __json_has_RPCMethod)) break;
        if (!decode_field(json_val, "ID", ID, __json_has_ID)) break;
        if (!decode_field(json_val, "Ack", Ack, __json_has_Ack)) break;

        return true;
    } while (0);

    return false;
}

bool encode(const cmd_t& obj_val, allocator_t& alloc, rapidjson::Value& json_val)
{
    return obj_val.encode(alloc, json_val);
}

bool decode(const rapidjson::Value& json_val, cmd_t& obj_val)
{
    return obj_val.decode(json_val);
}

} // namespace slothjson
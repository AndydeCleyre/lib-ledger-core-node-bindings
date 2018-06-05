// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#include "NJSRandomNumberGenerator.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::vector<uint8_t> NJSRandomNumberGenerator::getRandomBytes(int32_t size)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<Int32>(size);
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomBytes fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomBytes").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getRandomBytes = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_getRandomBytes.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomBytes call failed");
    }
    auto checkedResult_getRandomBytes = result_getRandomBytes.ToLocalChecked();
    vector<uint8_t> fResult_getRandomBytes;
    Local<Array> fResult_getRandomBytes_container = Local<Array>::Cast(checkedResult_getRandomBytes);
    for(uint32_t fResult_getRandomBytes_id = 0; fResult_getRandomBytes_id < fResult_getRandomBytes_container->Length(); fResult_getRandomBytes_id++)
    {
        if(fResult_getRandomBytes_container->Get(fResult_getRandomBytes_id)->IsUint32())
        {
            auto fResult_getRandomBytes_elem = Nan::To<uint32_t>(fResult_getRandomBytes_container->Get(fResult_getRandomBytes_id)).FromJust();
            fResult_getRandomBytes.emplace_back(fResult_getRandomBytes_elem);
        }
    }

    return fResult_getRandomBytes;
}

int32_t NJSRandomNumberGenerator::getRandomInt()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomInt fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomInt").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getRandomInt = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getRandomInt.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomInt call failed");
    }
    auto checkedResult_getRandomInt = result_getRandomInt.ToLocalChecked();
    auto fResult_getRandomInt = Nan::To<int32_t>(checkedResult_getRandomInt).FromJust();
    return fResult_getRandomInt;
}

int64_t NJSRandomNumberGenerator::getRandomLong()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomLong fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomLong").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getRandomLong = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getRandomLong.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomLong call failed");
    }
    auto checkedResult_getRandomLong = result_getRandomLong.ToLocalChecked();
    auto fResult_getRandomLong = Nan::To<int64_t>(checkedResult_getRandomLong).FromJust();
    return fResult_getRandomLong;
}

int8_t NJSRandomNumberGenerator::getRandomByte()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomByte fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getRandomByte").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getRandomByte = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getRandomByte.IsEmpty())
    {
        Nan::ThrowError("NJSRandomNumberGenerator::getRandomByte call failed");
    }
    auto checkedResult_getRandomByte = result_getRandomByte.ToLocalChecked();
    auto fResult_getRandomByte = Nan::To<int32_t>(checkedResult_getRandomByte).FromJust();
    return fResult_getRandomByte;
}

NAN_METHOD(NJSRandomNumberGenerator::addRef) {

    NJSRandomNumberGenerator *obj = Nan::ObjectWrap::Unwrap<NJSRandomNumberGenerator>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSRandomNumberGenerator::removeRef) {

    NJSRandomNumberGenerator *obj = Nan::ObjectWrap::Unwrap<NJSRandomNumberGenerator>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSRandomNumberGenerator::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSRandomNumberGenerator function can only be called as constructor (use New)");
    }

    NJSRandomNumberGenerator *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSRandomNumberGenerator(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSRandomNumberGenerator::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSRandomNumberGenerator::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSRandomNumberGenerator::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSRandomNumberGenerator").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSRandomNumberGenerator").ToLocalChecked(), func_template->GetFunction());
}

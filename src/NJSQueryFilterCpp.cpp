// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSQueryFilterCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSQueryFilter::accountEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::accountEq needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::accountEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::accountNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::accountNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::accountNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateLte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateLte needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateLte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateLt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateLt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateLt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateGt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateGt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateGt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateGte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateGte needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateGte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateEq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::dateNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::dateNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    auto result = QueryFilter::dateNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::containsRecipient) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::containsRecipient needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::containsRecipient(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::containsSender) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::containsSender needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::containsSender(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::currencyEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::currencyEq needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::currencyEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::operationUidEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::operationUidEq needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::operationUidEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::operationUidNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::operationUidNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = QueryFilter::operationUidNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::trustEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::trustEq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::TrustLevel)Nan::To<int>(info[0]).FromJust();

    auto result = QueryFilter::trustEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::trustNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::trustNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::TrustLevel)Nan::To<int>(info[0]).FromJust();

    auto result = QueryFilter::trustNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesEq needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesGte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesGte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesGte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesGt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesGt needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesGt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesLte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesLte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesLte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::feesLt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::feesLt needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::feesLt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountEq needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountGte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountGte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountGte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountGt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountGt needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountGt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountLte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountLte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountLte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::amountLt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::amountLt needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    auto result = QueryFilter::amountLt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightEq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightGte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightGte needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightGte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightGt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightGt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightGt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightLte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightLte needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightLte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightLt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightLt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    auto result = QueryFilter::blockHeightLt(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::blockHeightIsNull) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSQueryFilter::blockHeightIsNull needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = QueryFilter::blockHeightIsNull();

    //Wrap result in node object
    auto arg_0_wrap = NJSQueryFilter::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSQueryFilter::operationTypeEq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::operationTypeEq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::OperationType)Nan::To<int>(info[0]).FromJust();

    auto result = QueryFilter::operationTypeEq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::operationTypeNeq) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::operationTypeNeq needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::OperationType)Nan::To<int>(info[0]).FromJust();

    auto result = QueryFilter::operationTypeNeq(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::op_and) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::op_and needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSQueryFilter *njs_ptr_arg_0 = static_cast<NJSQueryFilter *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSQueryFilter failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSQueryFilter* obj = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSQueryFilter::op_and : implementation of QueryFilter is not valid");
    }

    auto result = cpp_impl->op_and(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::op_or) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::op_or needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSQueryFilter *njs_ptr_arg_0 = static_cast<NJSQueryFilter *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSQueryFilter failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSQueryFilter* obj = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSQueryFilter::op_or : implementation of QueryFilter is not valid");
    }

    auto result = cpp_impl->op_or(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::op_and_not) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::op_and_not needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSQueryFilter *njs_ptr_arg_0 = static_cast<NJSQueryFilter *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSQueryFilter failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSQueryFilter* obj = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSQueryFilter::op_and_not : implementation of QueryFilter is not valid");
    }

    auto result = cpp_impl->op_and_not(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSQueryFilter::op_or_not) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::op_or_not needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSQueryFilter *njs_ptr_arg_0 = static_cast<NJSQueryFilter *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSQueryFilter failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSQueryFilter* obj = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSQueryFilter::op_or_not : implementation of QueryFilter is not valid");
    }

    auto result = cpp_impl->op_or_not(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSQueryFilter::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSQueryFilter::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSQueryFilter function can only be called as constructor (use New)");
    }

    //Check if NJSQueryFilter::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSQueryFilter::New needs same number of arguments as ledger::core::api::QueryFilter::accountEq method");
    }

    //Unwrap objects to get C++ classes
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Call factory
    auto cpp_instance = ledger::core::api::QueryFilter::accountEq(arg_0);
    NJSQueryFilter *node_instance = new NJSQueryFilter(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSQueryFilter::QueryFilter_prototype;

Handle<Object> NJSQueryFilter::wrap(const std::shared_ptr<ledger::core::api::QueryFilter> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(QueryFilter_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSQueryFilter *new_obj = new NJSQueryFilter(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSQueryFilter::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSQueryFilter::isNull) {
    NJSQueryFilter* obj = Nan::ObjectWrap::Unwrap<NJSQueryFilter>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSQueryFilter::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSQueryFilter::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSQueryFilter").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"accountEq", accountEq);
    Nan::SetPrototypeMethod(func_template,"accountNeq", accountNeq);
    Nan::SetPrototypeMethod(func_template,"dateLte", dateLte);
    Nan::SetPrototypeMethod(func_template,"dateLt", dateLt);
    Nan::SetPrototypeMethod(func_template,"dateGt", dateGt);
    Nan::SetPrototypeMethod(func_template,"dateGte", dateGte);
    Nan::SetPrototypeMethod(func_template,"dateEq", dateEq);
    Nan::SetPrototypeMethod(func_template,"dateNeq", dateNeq);
    Nan::SetPrototypeMethod(func_template,"containsRecipient", containsRecipient);
    Nan::SetPrototypeMethod(func_template,"containsSender", containsSender);
    Nan::SetPrototypeMethod(func_template,"currencyEq", currencyEq);
    Nan::SetPrototypeMethod(func_template,"operationUidEq", operationUidEq);
    Nan::SetPrototypeMethod(func_template,"operationUidNeq", operationUidNeq);
    Nan::SetPrototypeMethod(func_template,"trustEq", trustEq);
    Nan::SetPrototypeMethod(func_template,"trustNeq", trustNeq);
    Nan::SetPrototypeMethod(func_template,"feesEq", feesEq);
    Nan::SetPrototypeMethod(func_template,"feesNeq", feesNeq);
    Nan::SetPrototypeMethod(func_template,"feesGte", feesGte);
    Nan::SetPrototypeMethod(func_template,"feesGt", feesGt);
    Nan::SetPrototypeMethod(func_template,"feesLte", feesLte);
    Nan::SetPrototypeMethod(func_template,"feesLt", feesLt);
    Nan::SetPrototypeMethod(func_template,"amountEq", amountEq);
    Nan::SetPrototypeMethod(func_template,"amountNeq", amountNeq);
    Nan::SetPrototypeMethod(func_template,"amountGte", amountGte);
    Nan::SetPrototypeMethod(func_template,"amountGt", amountGt);
    Nan::SetPrototypeMethod(func_template,"amountLte", amountLte);
    Nan::SetPrototypeMethod(func_template,"amountLt", amountLt);
    Nan::SetPrototypeMethod(func_template,"blockHeightEq", blockHeightEq);
    Nan::SetPrototypeMethod(func_template,"blockHeightNeq", blockHeightNeq);
    Nan::SetPrototypeMethod(func_template,"blockHeightGte", blockHeightGte);
    Nan::SetPrototypeMethod(func_template,"blockHeightGt", blockHeightGt);
    Nan::SetPrototypeMethod(func_template,"blockHeightLte", blockHeightLte);
    Nan::SetPrototypeMethod(func_template,"blockHeightLt", blockHeightLt);
    Nan::SetPrototypeMethod(func_template,"blockHeightIsNull", blockHeightIsNull);
    Nan::SetPrototypeMethod(func_template,"operationTypeEq", operationTypeEq);
    Nan::SetPrototypeMethod(func_template,"operationTypeNeq", operationTypeNeq);
    Nan::SetPrototypeMethod(func_template,"op_and", op_and);
    Nan::SetPrototypeMethod(func_template,"op_or", op_or);
    Nan::SetPrototypeMethod(func_template,"op_and_not", op_and_not);
    Nan::SetPrototypeMethod(func_template,"op_or_not", op_or_not);
    //Set object prototype
    QueryFilter_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSQueryFilter").ToLocalChecked(), func_template->GetFunction());
}

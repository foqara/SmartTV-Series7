// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestSpecialOperations.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/html/LabelsNodeList.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8TestSpecialOperations::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestSpecialOperations::domTemplate, V8TestSpecialOperations::refObject, V8TestSpecialOperations::derefObject, V8TestSpecialOperations::trace, 0, 0, V8TestSpecialOperations::preparePrototypeAndInterfaceObject, V8TestSpecialOperations::installConditionallyEnabledProperties, "TestSpecialOperations", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestSpecialOperations.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestSpecialOperations::s_wrapperTypeInfo = V8TestSpecialOperations::wrapperTypeInfo;

namespace TestSpecialOperationsV8Internal {

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "namedItem", "TestSpecialOperations", 1, info.Length()), info.GetIsolate());
        return;
    }
    TestSpecialOperations* impl = V8TestSpecialOperations::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    NodeOrNodeList result;
    impl->getItem(name, result);
    v8SetReturnValue(info, result);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestSpecialOperationsV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    TestSpecialOperations* impl = V8TestSpecialOperations::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    NodeOrNodeList result;
    impl->getItem(propertyName, result);
    if (result.isNull())
        return;
    v8SetReturnValue(info, result);
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    TestSpecialOperationsV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertySetter(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    TestSpecialOperations* impl = V8TestSpecialOperations::toImpl(info.Holder());
    V8StringResource<> propertyName(nameString);
    if (!propertyName.prepare())
        return;
    Node* propertyValue = V8Node::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!propertyValue && !isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("The provided value is not of type 'Node'.");
        exceptionState.throwIfNeeded();
        return;
    }
    bool result = impl->anonymousNamedSetter(propertyName, propertyValue);
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void namedPropertySetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    TestSpecialOperationsV8Internal::namedPropertySetter(name, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TestSpecialOperations* impl = V8TestSpecialOperations::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "TestSpecialOperations", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    TestSpecialOperationsV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TestSpecialOperations* impl = V8TestSpecialOperations::toImpl(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "TestSpecialOperations", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Local<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i) {
        if (!v8CallBoolean(v8names->Set(info.GetIsolate()->GetCurrentContext(), v8::Integer::New(info.GetIsolate(), i), v8String(info.GetIsolate(), names[i]))))
            return;
    }
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    TestSpecialOperationsV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TestSpecialOperationsV8Internal

const V8DOMConfiguration::MethodConfiguration V8TestSpecialOperationsMethods[] = {
    {"namedItem", TestSpecialOperationsV8Internal::namedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8TestSpecialOperationsTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestSpecialOperations", v8::Local<v8::FunctionTemplate>(), V8TestSpecialOperations::internalFieldCount,
        0, 0,
        0, 0,
        V8TestSpecialOperationsMethods, WTF_ARRAY_LENGTH(V8TestSpecialOperationsMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(TestSpecialOperationsV8Internal::namedPropertyGetterCallback, TestSpecialOperationsV8Internal::namedPropertySetterCallback, TestSpecialOperationsV8Internal::namedPropertyQueryCallback, 0, TestSpecialOperationsV8Internal::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestSpecialOperations::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestSpecialOperationsTemplate);
}

bool V8TestSpecialOperations::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestSpecialOperations::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestSpecialOperations* V8TestSpecialOperations::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestSpecialOperations::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestSpecialOperations>()->ref();
}

void V8TestSpecialOperations::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestSpecialOperations>()->deref();
}

} // namespace blink

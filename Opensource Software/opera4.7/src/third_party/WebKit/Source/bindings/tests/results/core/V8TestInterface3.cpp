// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterface3.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8Iterator.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/tests/idls/core/TestPartialInterface4.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8TestInterface3::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterface3::domTemplate, V8TestInterface3::refObject, V8TestInterface3::derefObject, V8TestInterface3::trace, 0, V8TestInterface3::visitDOMWrapper, V8TestInterface3::preparePrototypeAndInterfaceObject, V8TestInterface3::installConditionallyEnabledProperties, "TestInterface3", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterface3.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterface3::s_wrapperTypeInfo = V8TestInterface3::wrapperTypeInfo;

namespace TestInterface3V8Internal {

static void voidMethodDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "voidMethodDocument", "TestInterface3", 1, info.Length()), info.GetIsolate());
        return;
    }
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    Document* document;
    {
        document = V8Document::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    impl->voidMethodDocument(document);
}

static void voidMethodDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::voidMethodDocumentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "keys", "TestInterface3", info.Holder(), info.GetIsolate());
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->iterableKeys(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::keysMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

#if ENABLE(BAR)
static void voidMethodDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "voidMethodDocument", "TestInterface3", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Document* document;
    double d;
    {
        document = V8Document::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!document) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Document'.");
            exceptionState.throwIfNeeded();
            return;
        }
        d = toRestrictedDouble(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    TestPartialInterface4::voidMethodDocument(document, d);
}
#endif // ENABLE(BAR)

#if ENABLE(BAR)
static void voidMethodDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::voidMethodDocumentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}
#endif // ENABLE(BAR)

static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "values", "TestInterface3", info.Holder(), info.GetIsolate());
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->valuesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::valuesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "entries", "TestInterface3", info.Holder(), info.GetIsolate());
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->entriesForBinding(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::entriesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "forEach", "TestInterface3", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    ScriptValue callback;
    ScriptValue thisArg;
    {
        if (!info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        callback = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        thisArg = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->forEachForBinding(scriptState, ScriptValue(scriptState, info.This()), callback, thisArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::forEachMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void iteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "iterator", "TestInterface3", info.Holder(), info.GetIsolate());
    TestInterface3* impl = V8TestInterface3::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Iterator> result = impl->iterator(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterface3V8Internal::iteratorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    V8TestInterface3::indexedPropertyGetterCustom(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    V8TestInterface3::indexedPropertySetterCustom(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    V8TestInterface3::indexedPropertyDeleterCustom(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    V8TestInterface3::namedPropertyGetterCustom(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertySetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    V8TestInterface3::namedPropertySetterCustom(name, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    V8TestInterface3::namedPropertyQueryCustom(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyDeleterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    V8TestInterface3::namedPropertyDeleterCustom(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    V8TestInterface3::namedPropertyEnumeratorCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TestInterface3V8Internal

const V8DOMConfiguration::MethodConfiguration V8TestInterface3Methods[] = {
    {"voidMethodDocument", TestInterface3V8Internal::voidMethodDocumentMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
#if ENABLE(BAR)
    {"voidMethodDocument", TestInterface3V8Internal::voidMethodDocumentMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface},
#endif // ENABLE(BAR)
};

static void installV8TestInterface3Template(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterface3", v8::Local<v8::FunctionTemplate>(), V8TestInterface3::internalFieldCount,
        0, 0,
        0, 0,
        V8TestInterface3Methods, WTF_ARRAY_LENGTH(V8TestInterface3Methods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    ExecutionContext* context = currentExecutionContext(isolate);
    ALLOW_UNUSED_LOCAL(context);
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(TestInterface3V8Internal::indexedPropertyGetterCallback, TestInterface3V8Internal::indexedPropertySetterCallback, 0, TestInterface3V8Internal::indexedPropertyDeleterCallback, indexedPropertyEnumerator<TestInterface3>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(TestInterface3V8Internal::namedPropertyGetterCallback, TestInterface3V8Internal::namedPropertySetterCallback, TestInterface3V8Internal::namedPropertyQueryCallback, TestInterface3V8Internal::namedPropertyDeleterCallback, TestInterface3V8Internal::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);
    if (RuntimeEnabledFeatures::featureNameEnabled()) {
        const V8DOMConfiguration::SymbolKeyedMethodConfiguration symbolKeyedIteratorConfiguration = { v8::Symbol::GetIterator, TestInterface3V8Internal::iteratorMethodCallback, 0, v8::DontDelete, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, symbolKeyedIteratorConfiguration);
    }
    if (RuntimeEnabledFeatures::featureNameEnabled()) {
        const V8DOMConfiguration::MethodConfiguration keysMethodConfiguration = {"keys", TestInterface3V8Internal::keysMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, keysMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::featureNameEnabled()) {
        const V8DOMConfiguration::MethodConfiguration valuesMethodConfiguration = {"values", TestInterface3V8Internal::valuesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, valuesMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::featureNameEnabled()) {
        const V8DOMConfiguration::MethodConfiguration entriesMethodConfiguration = {"entries", TestInterface3V8Internal::entriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, entriesMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::featureNameEnabled()) {
        const V8DOMConfiguration::MethodConfiguration forEachMethodConfiguration = {"forEach", TestInterface3V8Internal::forEachMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, forEachMethodConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterface3::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterface3Template);
}

bool V8TestInterface3::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterface3::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterface3* V8TestInterface3::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterface3::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterface3>()->ref();
}

void V8TestInterface3::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterface3>()->deref();
}

} // namespace blink

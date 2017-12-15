// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8TestIntegerIndexed_h
#define V8TestIntegerIndexed_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "bindings/tests/idls/core/TestIntegerIndexed.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8TestIntegerIndexed {
    STATIC_ONLY(V8TestIntegerIndexed);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static TestIntegerIndexed* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<TestIntegerIndexed>();
    }
    CORE_EXPORT static TestIntegerIndexed* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
    }
    static void indexedPropertyGetterCustom(uint32_t, const v8::PropertyCallbackInfo<v8::Value>&);
    static void indexedPropertySetterCustom(uint32_t, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
    static void indexedPropertyDeleterCustom(uint32_t, const v8::PropertyCallbackInfo<v8::Boolean>&);
    static void namedPropertyGetterCustom(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
    static void namedPropertySetterCustom(v8::Local<v8::Name>, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
    static void namedPropertyQueryCustom(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Integer>&);
    static void namedPropertyDeleterCustom(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Boolean>&);
    static void namedPropertyEnumeratorCustom(const v8::PropertyCallbackInfo<v8::Array>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeAndInterfaceObject(v8::Isolate*, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<TestIntegerIndexed> {
    typedef V8TestIntegerIndexed Type;
};

} // namespace blink

#endif // V8TestIntegerIndexed_h

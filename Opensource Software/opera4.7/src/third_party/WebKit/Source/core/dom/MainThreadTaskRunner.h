/*
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MainThreadTaskRunner_h
#define MainThreadTaskRunner_h

#include "core/CoreExport.h"
#include "platform/Timer.h"
#include "platform/heap/Handle.h"
#include "wtf/Allocator.h"
#include "wtf/Noncopyable.h"
#include "wtf/OwnPtr.h"
#include "wtf/PassOwnPtr.h"
#include "wtf/Vector.h"
#include "wtf/WeakPtr.h"

namespace blink {

class ExecutionContext;
class ExecutionContextTask;

class CORE_EXPORT MainThreadTaskRunner final : public NoBaseWillBeGarbageCollectedFinalized<MainThreadTaskRunner> {
    WTF_MAKE_NONCOPYABLE(MainThreadTaskRunner);
    USING_FAST_MALLOC_WILL_BE_REMOVED(MainThreadTaskRunner);

public:
    static PassOwnPtrWillBeRawPtr<MainThreadTaskRunner> create(ExecutionContext*);

    ~MainThreadTaskRunner();

    DECLARE_TRACE();

    void postTask(const WebTraceLocation&, PassOwnPtr<ExecutionContextTask>); // Executes the task on context's thread asynchronously.
    void postInspectorTask(const WebTraceLocation&, PassOwnPtr<ExecutionContextTask>);
    void perform(PassOwnPtr<ExecutionContextTask>, bool);

    void suspend();
    void resume();

private:
    explicit MainThreadTaskRunner(ExecutionContext*);

    void pendingTasksTimerFired(Timer<MainThreadTaskRunner>*);

    WeakPtrWillBeRawPtr<MainThreadTaskRunner> createWeakPointerToSelf();

    RawPtrWillBeMember<ExecutionContext> m_context;
#if !ENABLE(OILPAN)
    WeakPtrFactory<MainThreadTaskRunner> m_weakFactory;
#endif
    Timer<MainThreadTaskRunner> m_pendingTasksTimer;
    Vector<OwnPtr<ExecutionContextTask>> m_pendingTasks;
    bool m_suspended;
};

inline PassOwnPtrWillBeRawPtr<MainThreadTaskRunner> MainThreadTaskRunner::create(ExecutionContext* context)
{
    return adoptPtrWillBeNoop(new MainThreadTaskRunner(context));
}

} // namespace

#endif

/*
 * Copyright 2010, The Android Open Source Project
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JavaFieldJobjectV8.h"

#if ENABLE(JAVA_BRIDGE)

using namespace JSC::Bindings;

JavaFieldJobject::JavaFieldJobject(JNIEnv* env, jobject aField)
{
    // Get field type
    jstring fieldTypeName = 0;
    jclass fieldType = static_cast<jclass>(callJNIMethod<jobject>(aField, "getType", "()Ljava/lang/Class;"));
    if (fieldType)
        fieldTypeName = static_cast<jstring>(callJNIMethod<jobject>(fieldType, "getName", "()Ljava/lang/String;"));
    if (!fieldTypeName)
        fieldTypeName = env->NewStringUTF("<Unknown>");
    m_typeClassName = JavaString(env, fieldTypeName);
    m_type = javaTypeFromClassName(m_typeClassName.utf8());
    env->DeleteLocalRef(fieldType);
    env->DeleteLocalRef(fieldTypeName);

    // Get field name
    jstring fieldName = static_cast<jstring>(callJNIMethod<jobject>(aField, "getName", "()Ljava/lang/String;"));
    if (!fieldName)
        fieldName = env->NewStringUTF("<Unknown>");
    m_name = JavaString(env, fieldName);
    env->DeleteLocalRef(fieldName);

    m_field = new JobjectWrapper(aField);
}

#endif // ENABLE(JAVA_BRIDGE)

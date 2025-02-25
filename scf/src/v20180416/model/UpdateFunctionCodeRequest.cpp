/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

UpdateFunctionCodeRequest::UpdateFunctionCodeRequest() :
    m_handlerHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosObjectNameHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_publishHasBeenSet(false)
{
}

string UpdateFunctionCodeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_handlerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_handler.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosObjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_zipFileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZipFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zipFile.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Publish";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_publish.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFunctionCodeRequest::GetHandler() const
{
    return m_handler;
}

void UpdateFunctionCodeRequest::SetHandler(const string& _handler)
{
    m_handler = _handler;
    m_handlerHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

string UpdateFunctionCodeRequest::GetFunctionName() const
{
    return m_functionName;
}

void UpdateFunctionCodeRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string UpdateFunctionCodeRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void UpdateFunctionCodeRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string UpdateFunctionCodeRequest::GetCosObjectName() const
{
    return m_cosObjectName;
}

void UpdateFunctionCodeRequest::SetCosObjectName(const string& _cosObjectName)
{
    m_cosObjectName = _cosObjectName;
    m_cosObjectNameHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::CosObjectNameHasBeenSet() const
{
    return m_cosObjectNameHasBeenSet;
}

string UpdateFunctionCodeRequest::GetZipFile() const
{
    return m_zipFile;
}

void UpdateFunctionCodeRequest::SetZipFile(const string& _zipFile)
{
    m_zipFile = _zipFile;
    m_zipFileHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::ZipFileHasBeenSet() const
{
    return m_zipFileHasBeenSet;
}

string UpdateFunctionCodeRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateFunctionCodeRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string UpdateFunctionCodeRequest::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void UpdateFunctionCodeRequest::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string UpdateFunctionCodeRequest::GetEnvId() const
{
    return m_envId;
}

void UpdateFunctionCodeRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string UpdateFunctionCodeRequest::GetPublish() const
{
    return m_publish;
}

void UpdateFunctionCodeRequest::SetPublish(const string& _publish)
{
    m_publish = _publish;
    m_publishHasBeenSet = true;
}

bool UpdateFunctionCodeRequest::PublishHasBeenSet() const
{
    return m_publishHasBeenSet;
}



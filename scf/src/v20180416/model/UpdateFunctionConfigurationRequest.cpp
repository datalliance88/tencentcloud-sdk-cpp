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

#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest() :
    m_functionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_publishHasBeenSet(false)
{
}

string UpdateFunctionConfigurationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_environment.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
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


string UpdateFunctionConfigurationRequest::GetFunctionName() const
{
    return m_functionName;
}

void UpdateFunctionConfigurationRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetDescription() const
{
    return m_description;
}

void UpdateFunctionConfigurationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UpdateFunctionConfigurationRequest::GetMemorySize() const
{
    return m_memorySize;
}

void UpdateFunctionConfigurationRequest::SetMemorySize(const int64_t& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

int64_t UpdateFunctionConfigurationRequest::GetTimeout() const
{
    return m_timeout;
}

void UpdateFunctionConfigurationRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetRuntime() const
{
    return m_runtime;
}

void UpdateFunctionConfigurationRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

Environment UpdateFunctionConfigurationRequest::GetEnvironment() const
{
    return m_environment;
}

void UpdateFunctionConfigurationRequest::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateFunctionConfigurationRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

VpcConfig UpdateFunctionConfigurationRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void UpdateFunctionConfigurationRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetRole() const
{
    return m_role;
}

void UpdateFunctionConfigurationRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void UpdateFunctionConfigurationRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void UpdateFunctionConfigurationRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetPublish() const
{
    return m_publish;
}

void UpdateFunctionConfigurationRequest::SetPublish(const string& _publish)
{
    m_publish = _publish;
    m_publishHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::PublishHasBeenSet() const
{
    return m_publishHasBeenSet;
}



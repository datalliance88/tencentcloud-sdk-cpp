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

#include <tencentcloud/gaap/v20180529/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_checkParamsHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_checkParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_checkParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateRuleRequest::GetDomain() const
{
    return m_domain;
}

void CreateRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateRuleRequest::GetPath() const
{
    return m_path;
}

void CreateRuleRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateRuleRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CreateRuleRequest::GetRealServerType() const
{
    return m_realServerType;
}

void CreateRuleRequest::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool CreateRuleRequest::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string CreateRuleRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateRuleRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateRuleRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t CreateRuleRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateRuleRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateRuleRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

RuleCheckParams CreateRuleRequest::GetCheckParams() const
{
    return m_checkParams;
}

void CreateRuleRequest::SetCheckParams(const RuleCheckParams& _checkParams)
{
    m_checkParams = _checkParams;
    m_checkParamsHasBeenSet = true;
}

bool CreateRuleRequest::CheckParamsHasBeenSet() const
{
    return m_checkParamsHasBeenSet;
}

string CreateRuleRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void CreateRuleRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool CreateRuleRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}



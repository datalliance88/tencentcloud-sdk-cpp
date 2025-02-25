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

#include <tencentcloud/clb/v20180317/model/Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

Listener::Listener() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_listenerNameHasBeenSet(false)
{
}

CoreInternalOutcome Listener::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Listener.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Listener.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Listener.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Error("response `Listener.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Listener.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("SniSwitch") && !value["SniSwitch"].IsNull())
    {
        if (!value["SniSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Listener.SniSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sniSwitch = value["SniSwitch"].GetInt64();
        m_sniSwitchHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Error("response `Listener.Rules` is not array type"));

        const Value &tmpValue = value["Rules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Listener::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_certificateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_sniSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

}


string Listener::GetListenerId() const
{
    return m_listenerId;
}

void Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string Listener::GetProtocol() const
{
    return m_protocol;
}

void Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t Listener::GetPort() const
{
    return m_port;
}

void Listener::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Listener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

CertificateOutput Listener::GetCertificate() const
{
    return m_certificate;
}

void Listener::SetCertificate(const CertificateOutput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool Listener::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

HealthCheck Listener::GetHealthCheck() const
{
    return m_healthCheck;
}

void Listener::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool Listener::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string Listener::GetScheduler() const
{
    return m_scheduler;
}

void Listener::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool Listener::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t Listener::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void Listener::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool Listener::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

int64_t Listener::GetSniSwitch() const
{
    return m_sniSwitch;
}

void Listener::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool Listener::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

vector<RuleOutput> Listener::GetRules() const
{
    return m_rules;
}

void Listener::SetRules(const vector<RuleOutput>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool Listener::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string Listener::GetListenerName() const
{
    return m_listenerName;
}

void Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}


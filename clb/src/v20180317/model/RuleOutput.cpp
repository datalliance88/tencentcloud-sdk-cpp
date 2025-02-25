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

#include <tencentcloud/clb/v20180317/model/RuleOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

RuleOutput::RuleOutput() :
    m_locationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_rewriteTargetHasBeenSet(false),
    m_httpGzipHasBeenSet(false),
    m_beAutoCreatedHasBeenSet(false),
    m_defaultServerHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_forwardTypeHasBeenSet(false)
{
}

CoreInternalOutcome RuleOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("RewriteTarget") && !value["RewriteTarget"].IsNull())
    {
        if (!value["RewriteTarget"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.RewriteTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rewriteTarget.Deserialize(value["RewriteTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rewriteTargetHasBeenSet = true;
    }

    if (value.HasMember("HttpGzip") && !value["HttpGzip"].IsNull())
    {
        if (!value["HttpGzip"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.HttpGzip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_httpGzip = value["HttpGzip"].GetBool();
        m_httpGzipHasBeenSet = true;
    }

    if (value.HasMember("BeAutoCreated") && !value["BeAutoCreated"].IsNull())
    {
        if (!value["BeAutoCreated"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.BeAutoCreated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_beAutoCreated = value["BeAutoCreated"].GetBool();
        m_beAutoCreatedHasBeenSet = true;
    }

    if (value.HasMember("DefaultServer") && !value["DefaultServer"].IsNull())
    {
        if (!value["DefaultServer"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.DefaultServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultServer = value["DefaultServer"].GetBool();
        m_defaultServerHasBeenSet = true;
    }

    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.Http2` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_http2 = value["Http2"].GetBool();
        m_http2HasBeenSet = true;
    }

    if (value.HasMember("ForwardType") && !value["ForwardType"].IsNull())
    {
        if (!value["ForwardType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleOutput.ForwardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardType = string(value["ForwardType"].GetString());
        m_forwardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_locationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteTargetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RewriteTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rewriteTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpGzipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpGzip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpGzip, allocator);
    }

    if (m_beAutoCreatedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeAutoCreated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beAutoCreated, allocator);
    }

    if (m_defaultServerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultServer, allocator);
    }

    if (m_http2HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http2, allocator);
    }

    if (m_forwardTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_forwardType.c_str(), allocator).Move(), allocator);
    }

}


string RuleOutput::GetLocationId() const
{
    return m_locationId;
}

void RuleOutput::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool RuleOutput::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string RuleOutput::GetDomain() const
{
    return m_domain;
}

void RuleOutput::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RuleOutput::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RuleOutput::GetUrl() const
{
    return m_url;
}

void RuleOutput::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RuleOutput::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t RuleOutput::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void RuleOutput::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool RuleOutput::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

HealthCheck RuleOutput::GetHealthCheck() const
{
    return m_healthCheck;
}

void RuleOutput::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool RuleOutput::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateOutput RuleOutput::GetCertificate() const
{
    return m_certificate;
}

void RuleOutput::SetCertificate(const CertificateOutput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool RuleOutput::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string RuleOutput::GetScheduler() const
{
    return m_scheduler;
}

void RuleOutput::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool RuleOutput::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string RuleOutput::GetListenerId() const
{
    return m_listenerId;
}

void RuleOutput::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool RuleOutput::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

RewriteTarget RuleOutput::GetRewriteTarget() const
{
    return m_rewriteTarget;
}

void RuleOutput::SetRewriteTarget(const RewriteTarget& _rewriteTarget)
{
    m_rewriteTarget = _rewriteTarget;
    m_rewriteTargetHasBeenSet = true;
}

bool RuleOutput::RewriteTargetHasBeenSet() const
{
    return m_rewriteTargetHasBeenSet;
}

bool RuleOutput::GetHttpGzip() const
{
    return m_httpGzip;
}

void RuleOutput::SetHttpGzip(const bool& _httpGzip)
{
    m_httpGzip = _httpGzip;
    m_httpGzipHasBeenSet = true;
}

bool RuleOutput::HttpGzipHasBeenSet() const
{
    return m_httpGzipHasBeenSet;
}

bool RuleOutput::GetBeAutoCreated() const
{
    return m_beAutoCreated;
}

void RuleOutput::SetBeAutoCreated(const bool& _beAutoCreated)
{
    m_beAutoCreated = _beAutoCreated;
    m_beAutoCreatedHasBeenSet = true;
}

bool RuleOutput::BeAutoCreatedHasBeenSet() const
{
    return m_beAutoCreatedHasBeenSet;
}

bool RuleOutput::GetDefaultServer() const
{
    return m_defaultServer;
}

void RuleOutput::SetDefaultServer(const bool& _defaultServer)
{
    m_defaultServer = _defaultServer;
    m_defaultServerHasBeenSet = true;
}

bool RuleOutput::DefaultServerHasBeenSet() const
{
    return m_defaultServerHasBeenSet;
}

bool RuleOutput::GetHttp2() const
{
    return m_http2;
}

void RuleOutput::SetHttp2(const bool& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool RuleOutput::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

string RuleOutput::GetForwardType() const
{
    return m_forwardType;
}

void RuleOutput::SetForwardType(const string& _forwardType)
{
    m_forwardType = _forwardType;
    m_forwardTypeHasBeenSet = true;
}

bool RuleOutput::ForwardTypeHasBeenSet() const
{
    return m_forwardTypeHasBeenSet;
}


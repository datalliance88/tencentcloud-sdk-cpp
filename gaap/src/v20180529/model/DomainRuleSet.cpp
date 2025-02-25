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

#include <tencentcloud/gaap/v20180529/model/DomainRuleSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DomainRuleSet::DomainRuleSet() :
    m_domainHasBeenSet(false),
    m_ruleSetHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_clientCertificateAliasHasBeenSet(false),
    m_basicAuthConfIdHasBeenSet(false),
    m_basicAuthHasBeenSet(false),
    m_basicAuthConfAliasHasBeenSet(false),
    m_realServerCertificateIdHasBeenSet(false),
    m_realServerAuthHasBeenSet(false),
    m_realServerCertificateAliasHasBeenSet(false),
    m_gaapCertificateIdHasBeenSet(false),
    m_gaapAuthHasBeenSet(false),
    m_gaapCertificateAliasHasBeenSet(false),
    m_realServerCertificateDomainHasBeenSet(false)
{
}

CoreInternalOutcome DomainRuleSet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RuleSet") && !value["RuleSet"].IsNull())
    {
        if (!value["RuleSet"].IsArray())
            return CoreInternalOutcome(Error("response `DomainRuleSet.RuleSet` is not array type"));

        const Value &tmpValue = value["RuleSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleSet.push_back(item);
        }
        m_ruleSetHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }

    if (value.HasMember("ClientCertificateId") && !value["ClientCertificateId"].IsNull())
    {
        if (!value["ClientCertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.ClientCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertificateId = string(value["ClientCertificateId"].GetString());
        m_clientCertificateIdHasBeenSet = true;
    }

    if (value.HasMember("ClientCertificateAlias") && !value["ClientCertificateAlias"].IsNull())
    {
        if (!value["ClientCertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.ClientCertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertificateAlias = string(value["ClientCertificateAlias"].GetString());
        m_clientCertificateAliasHasBeenSet = true;
    }

    if (value.HasMember("BasicAuthConfId") && !value["BasicAuthConfId"].IsNull())
    {
        if (!value["BasicAuthConfId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.BasicAuthConfId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basicAuthConfId = string(value["BasicAuthConfId"].GetString());
        m_basicAuthConfIdHasBeenSet = true;
    }

    if (value.HasMember("BasicAuth") && !value["BasicAuth"].IsNull())
    {
        if (!value["BasicAuth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.BasicAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_basicAuth = value["BasicAuth"].GetInt64();
        m_basicAuthHasBeenSet = true;
    }

    if (value.HasMember("BasicAuthConfAlias") && !value["BasicAuthConfAlias"].IsNull())
    {
        if (!value["BasicAuthConfAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.BasicAuthConfAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basicAuthConfAlias = string(value["BasicAuthConfAlias"].GetString());
        m_basicAuthConfAliasHasBeenSet = true;
    }

    if (value.HasMember("RealServerCertificateId") && !value["RealServerCertificateId"].IsNull())
    {
        if (!value["RealServerCertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.RealServerCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerCertificateId = string(value["RealServerCertificateId"].GetString());
        m_realServerCertificateIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerAuth") && !value["RealServerAuth"].IsNull())
    {
        if (!value["RealServerAuth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.RealServerAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerAuth = value["RealServerAuth"].GetInt64();
        m_realServerAuthHasBeenSet = true;
    }

    if (value.HasMember("RealServerCertificateAlias") && !value["RealServerCertificateAlias"].IsNull())
    {
        if (!value["RealServerCertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.RealServerCertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerCertificateAlias = string(value["RealServerCertificateAlias"].GetString());
        m_realServerCertificateAliasHasBeenSet = true;
    }

    if (value.HasMember("GaapCertificateId") && !value["GaapCertificateId"].IsNull())
    {
        if (!value["GaapCertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.GaapCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gaapCertificateId = string(value["GaapCertificateId"].GetString());
        m_gaapCertificateIdHasBeenSet = true;
    }

    if (value.HasMember("GaapAuth") && !value["GaapAuth"].IsNull())
    {
        if (!value["GaapAuth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.GaapAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gaapAuth = value["GaapAuth"].GetInt64();
        m_gaapAuthHasBeenSet = true;
    }

    if (value.HasMember("GaapCertificateAlias") && !value["GaapCertificateAlias"].IsNull())
    {
        if (!value["GaapCertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.GaapCertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gaapCertificateAlias = string(value["GaapCertificateAlias"].GetString());
        m_gaapCertificateAliasHasBeenSet = true;
    }

    if (value.HasMember("RealServerCertificateDomain") && !value["RealServerCertificateDomain"].IsNull())
    {
        if (!value["RealServerCertificateDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainRuleSet.RealServerCertificateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerCertificateDomain = string(value["RealServerCertificateDomain"].GetString());
        m_realServerCertificateDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainRuleSet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleSet.begin(); itr != m_ruleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCertificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCertificateAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientCertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientCertificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_basicAuthConfIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BasicAuthConfId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_basicAuthConfId.c_str(), allocator).Move(), allocator);
    }

    if (m_basicAuthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BasicAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicAuth, allocator);
    }

    if (m_basicAuthConfAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BasicAuthConfAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_basicAuthConfAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerCertificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerAuthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerAuth, allocator);
    }

    if (m_realServerCertificateAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerCertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerCertificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_gaapCertificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GaapCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gaapCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_gaapAuthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GaapAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gaapAuth, allocator);
    }

    if (m_gaapCertificateAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GaapCertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gaapCertificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerCertificateDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerCertificateDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerCertificateDomain.c_str(), allocator).Move(), allocator);
    }

}


string DomainRuleSet::GetDomain() const
{
    return m_domain;
}

void DomainRuleSet::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainRuleSet::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<RuleInfo> DomainRuleSet::GetRuleSet() const
{
    return m_ruleSet;
}

void DomainRuleSet::SetRuleSet(const vector<RuleInfo>& _ruleSet)
{
    m_ruleSet = _ruleSet;
    m_ruleSetHasBeenSet = true;
}

bool DomainRuleSet::RuleSetHasBeenSet() const
{
    return m_ruleSetHasBeenSet;
}

string DomainRuleSet::GetCertificateId() const
{
    return m_certificateId;
}

void DomainRuleSet::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DomainRuleSet::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string DomainRuleSet::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void DomainRuleSet::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool DomainRuleSet::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

string DomainRuleSet::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void DomainRuleSet::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool DomainRuleSet::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}

string DomainRuleSet::GetClientCertificateAlias() const
{
    return m_clientCertificateAlias;
}

void DomainRuleSet::SetClientCertificateAlias(const string& _clientCertificateAlias)
{
    m_clientCertificateAlias = _clientCertificateAlias;
    m_clientCertificateAliasHasBeenSet = true;
}

bool DomainRuleSet::ClientCertificateAliasHasBeenSet() const
{
    return m_clientCertificateAliasHasBeenSet;
}

string DomainRuleSet::GetBasicAuthConfId() const
{
    return m_basicAuthConfId;
}

void DomainRuleSet::SetBasicAuthConfId(const string& _basicAuthConfId)
{
    m_basicAuthConfId = _basicAuthConfId;
    m_basicAuthConfIdHasBeenSet = true;
}

bool DomainRuleSet::BasicAuthConfIdHasBeenSet() const
{
    return m_basicAuthConfIdHasBeenSet;
}

int64_t DomainRuleSet::GetBasicAuth() const
{
    return m_basicAuth;
}

void DomainRuleSet::SetBasicAuth(const int64_t& _basicAuth)
{
    m_basicAuth = _basicAuth;
    m_basicAuthHasBeenSet = true;
}

bool DomainRuleSet::BasicAuthHasBeenSet() const
{
    return m_basicAuthHasBeenSet;
}

string DomainRuleSet::GetBasicAuthConfAlias() const
{
    return m_basicAuthConfAlias;
}

void DomainRuleSet::SetBasicAuthConfAlias(const string& _basicAuthConfAlias)
{
    m_basicAuthConfAlias = _basicAuthConfAlias;
    m_basicAuthConfAliasHasBeenSet = true;
}

bool DomainRuleSet::BasicAuthConfAliasHasBeenSet() const
{
    return m_basicAuthConfAliasHasBeenSet;
}

string DomainRuleSet::GetRealServerCertificateId() const
{
    return m_realServerCertificateId;
}

void DomainRuleSet::SetRealServerCertificateId(const string& _realServerCertificateId)
{
    m_realServerCertificateId = _realServerCertificateId;
    m_realServerCertificateIdHasBeenSet = true;
}

bool DomainRuleSet::RealServerCertificateIdHasBeenSet() const
{
    return m_realServerCertificateIdHasBeenSet;
}

int64_t DomainRuleSet::GetRealServerAuth() const
{
    return m_realServerAuth;
}

void DomainRuleSet::SetRealServerAuth(const int64_t& _realServerAuth)
{
    m_realServerAuth = _realServerAuth;
    m_realServerAuthHasBeenSet = true;
}

bool DomainRuleSet::RealServerAuthHasBeenSet() const
{
    return m_realServerAuthHasBeenSet;
}

string DomainRuleSet::GetRealServerCertificateAlias() const
{
    return m_realServerCertificateAlias;
}

void DomainRuleSet::SetRealServerCertificateAlias(const string& _realServerCertificateAlias)
{
    m_realServerCertificateAlias = _realServerCertificateAlias;
    m_realServerCertificateAliasHasBeenSet = true;
}

bool DomainRuleSet::RealServerCertificateAliasHasBeenSet() const
{
    return m_realServerCertificateAliasHasBeenSet;
}

string DomainRuleSet::GetGaapCertificateId() const
{
    return m_gaapCertificateId;
}

void DomainRuleSet::SetGaapCertificateId(const string& _gaapCertificateId)
{
    m_gaapCertificateId = _gaapCertificateId;
    m_gaapCertificateIdHasBeenSet = true;
}

bool DomainRuleSet::GaapCertificateIdHasBeenSet() const
{
    return m_gaapCertificateIdHasBeenSet;
}

int64_t DomainRuleSet::GetGaapAuth() const
{
    return m_gaapAuth;
}

void DomainRuleSet::SetGaapAuth(const int64_t& _gaapAuth)
{
    m_gaapAuth = _gaapAuth;
    m_gaapAuthHasBeenSet = true;
}

bool DomainRuleSet::GaapAuthHasBeenSet() const
{
    return m_gaapAuthHasBeenSet;
}

string DomainRuleSet::GetGaapCertificateAlias() const
{
    return m_gaapCertificateAlias;
}

void DomainRuleSet::SetGaapCertificateAlias(const string& _gaapCertificateAlias)
{
    m_gaapCertificateAlias = _gaapCertificateAlias;
    m_gaapCertificateAliasHasBeenSet = true;
}

bool DomainRuleSet::GaapCertificateAliasHasBeenSet() const
{
    return m_gaapCertificateAliasHasBeenSet;
}

string DomainRuleSet::GetRealServerCertificateDomain() const
{
    return m_realServerCertificateDomain;
}

void DomainRuleSet::SetRealServerCertificateDomain(const string& _realServerCertificateDomain)
{
    m_realServerCertificateDomain = _realServerCertificateDomain;
    m_realServerCertificateDomainHasBeenSet = true;
}

bool DomainRuleSet::RealServerCertificateDomainHasBeenSet() const
{
    return m_realServerCertificateDomainHasBeenSet;
}


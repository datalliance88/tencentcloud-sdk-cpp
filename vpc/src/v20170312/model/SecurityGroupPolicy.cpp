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

#include <tencentcloud/vpc/v20170312/model/SecurityGroupPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

SecurityGroupPolicy::SecurityGroupPolicy() :
    m_policyIndexHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceTemplateHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_addressTemplateHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupPolicy::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyIndex") && !value["PolicyIndex"].IsNull())
    {
        if (!value["PolicyIndex"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.PolicyIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyIndex = value["PolicyIndex"].GetInt64();
        m_policyIndexHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplate") && !value["ServiceTemplate"].IsNull())
    {
        if (!value["ServiceTemplate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.ServiceTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceTemplate.Deserialize(value["ServiceTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceTemplateHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplate") && !value["AddressTemplate"].IsNull())
    {
        if (!value["AddressTemplate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.AddressTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addressTemplate.Deserialize(value["AddressTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressTemplateHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroupPolicy.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupPolicy::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_policyIndexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyIndex, allocator);
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
        value.AddMember(iKey, Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_addressTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

}


int64_t SecurityGroupPolicy::GetPolicyIndex() const
{
    return m_policyIndex;
}

void SecurityGroupPolicy::SetPolicyIndex(const int64_t& _policyIndex)
{
    m_policyIndex = _policyIndex;
    m_policyIndexHasBeenSet = true;
}

bool SecurityGroupPolicy::PolicyIndexHasBeenSet() const
{
    return m_policyIndexHasBeenSet;
}

string SecurityGroupPolicy::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupPolicy::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupPolicy::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupPolicy::GetPort() const
{
    return m_port;
}

void SecurityGroupPolicy::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupPolicy::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

ServiceTemplateSpecification SecurityGroupPolicy::GetServiceTemplate() const
{
    return m_serviceTemplate;
}

void SecurityGroupPolicy::SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate)
{
    m_serviceTemplate = _serviceTemplate;
    m_serviceTemplateHasBeenSet = true;
}

bool SecurityGroupPolicy::ServiceTemplateHasBeenSet() const
{
    return m_serviceTemplateHasBeenSet;
}

string SecurityGroupPolicy::GetCidrBlock() const
{
    return m_cidrBlock;
}

void SecurityGroupPolicy::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool SecurityGroupPolicy::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string SecurityGroupPolicy::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroupPolicy::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroupPolicy::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

AddressTemplateSpecification SecurityGroupPolicy::GetAddressTemplate() const
{
    return m_addressTemplate;
}

void SecurityGroupPolicy::SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate)
{
    m_addressTemplate = _addressTemplate;
    m_addressTemplateHasBeenSet = true;
}

bool SecurityGroupPolicy::AddressTemplateHasBeenSet() const
{
    return m_addressTemplateHasBeenSet;
}

string SecurityGroupPolicy::GetAction() const
{
    return m_action;
}

void SecurityGroupPolicy::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityGroupPolicy::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityGroupPolicy::GetPolicyDescription() const
{
    return m_policyDescription;
}

void SecurityGroupPolicy::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool SecurityGroupPolicy::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}


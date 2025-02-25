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

#include <tencentcloud/clb/v20180317/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_forwardHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_openBgpHasBeenSet(false),
    m_snatHasBeenSet(false),
    m_isolationHasBeenSet(false),
    m_logHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_secureGroupsHasBeenSet(false),
    m_targetRegionInfoHasBeenSet(false),
    m_anycastZoneHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_numericalVpcIdHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_backupZoneSetHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_networkAttributesHasBeenSet(false),
    m_prepaidAttributesHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_addressIPv6HasBeenSet(false),
    m_extraInfoHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("Forward") && !value["Forward"].IsNull())
    {
        if (!value["Forward"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Forward` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forward = value["Forward"].GetUint64();
        m_forwardHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Error("response `LoadBalancer.LoadBalancerVips` is not array type"));

        const Value &tmpValue = value["LoadBalancerVips"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusTime") && !value["StatusTime"].IsNull())
    {
        if (!value["StatusTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.StatusTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusTime = string(value["StatusTime"].GetString());
        m_statusTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("OpenBgp") && !value["OpenBgp"].IsNull())
    {
        if (!value["OpenBgp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.OpenBgp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openBgp = value["OpenBgp"].GetUint64();
        m_openBgpHasBeenSet = true;
    }

    if (value.HasMember("Snat") && !value["Snat"].IsNull())
    {
        if (!value["Snat"].IsBool())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Snat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_snat = value["Snat"].GetBool();
        m_snatHasBeenSet = true;
    }

    if (value.HasMember("Isolation") && !value["Isolation"].IsNull())
    {
        if (!value["Isolation"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Isolation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolation = value["Isolation"].GetUint64();
        m_isolationHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `LoadBalancer.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SecureGroups") && !value["SecureGroups"].IsNull())
    {
        if (!value["SecureGroups"].IsArray())
            return CoreInternalOutcome(Error("response `LoadBalancer.SecureGroups` is not array type"));

        const Value &tmpValue = value["SecureGroups"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secureGroups.push_back((*itr).GetString());
        }
        m_secureGroupsHasBeenSet = true;
    }

    if (value.HasMember("TargetRegionInfo") && !value["TargetRegionInfo"].IsNull())
    {
        if (!value["TargetRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.TargetRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetRegionInfo.Deserialize(value["TargetRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("AnycastZone") && !value["AnycastZone"].IsNull())
    {
        if (!value["AnycastZone"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.AnycastZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anycastZone = string(value["AnycastZone"].GetString());
        m_anycastZoneHasBeenSet = true;
    }

    if (value.HasMember("AddressIPVersion") && !value["AddressIPVersion"].IsNull())
    {
        if (!value["AddressIPVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.AddressIPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPVersion = string(value["AddressIPVersion"].GetString());
        m_addressIPVersionHasBeenSet = true;
    }

    if (value.HasMember("NumericalVpcId") && !value["NumericalVpcId"].IsNull())
    {
        if (!value["NumericalVpcId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.NumericalVpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numericalVpcId = value["NumericalVpcId"].GetUint64();
        m_numericalVpcIdHasBeenSet = true;
    }

    if (value.HasMember("VipIsp") && !value["VipIsp"].IsNull())
    {
        if (!value["VipIsp"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.VipIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipIsp = string(value["VipIsp"].GetString());
        m_vipIspHasBeenSet = true;
    }

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.MasterZone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterZone.Deserialize(value["MasterZone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("BackupZoneSet") && !value["BackupZoneSet"].IsNull())
    {
        if (!value["BackupZoneSet"].IsArray())
            return CoreInternalOutcome(Error("response `LoadBalancer.BackupZoneSet` is not array type"));

        const Value &tmpValue = value["BackupZoneSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupZoneSet.push_back(item);
        }
        m_backupZoneSetHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkAttributes") && !value["NetworkAttributes"].IsNull())
    {
        if (!value["NetworkAttributes"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.NetworkAttributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkAttributes.Deserialize(value["NetworkAttributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkAttributesHasBeenSet = true;
    }

    if (value.HasMember("PrepaidAttributes") && !value["PrepaidAttributes"].IsNull())
    {
        if (!value["PrepaidAttributes"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.PrepaidAttributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prepaidAttributes.Deserialize(value["PrepaidAttributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prepaidAttributesHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }

    if (value.HasMember("AddressIPv6") && !value["AddressIPv6"].IsNull())
    {
        if (!value["AddressIPv6"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.AddressIPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPv6 = string(value["AddressIPv6"].GetString());
        m_addressIPv6HasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `LoadBalancer.ExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraInfo.Deserialize(value["ExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Forward";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forward, allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_openBgpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpenBgp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openBgp, allocator);
    }

    if (m_snatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Snat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snat, allocator);
    }

    if (m_isolationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Isolation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolation, allocator);
    }

    if (m_logHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_secureGroupsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecureGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_secureGroups.begin(); itr != m_secureGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetRegionInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_targetRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_anycastZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AnycastZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_anycastZone.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_numericalVpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NumericalVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numericalVpcId, allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_masterZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_masterZone.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupZoneSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupZoneSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupZoneSet.begin(); itr != m_backupZoneSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isolatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAttributesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_networkAttributes.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prepaidAttributesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrepaidAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_prepaidAttributes.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressIPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_extraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancer::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancer::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

uint64_t LoadBalancer::GetForward() const
{
    return m_forward;
}

void LoadBalancer::SetForward(const uint64_t& _forward)
{
    m_forward = _forward;
    m_forwardHasBeenSet = true;
}

bool LoadBalancer::ForwardHasBeenSet() const
{
    return m_forwardHasBeenSet;
}

string LoadBalancer::GetDomain() const
{
    return m_domain;
}

void LoadBalancer::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LoadBalancer::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> LoadBalancer::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void LoadBalancer::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

uint64_t LoadBalancer::GetStatus() const
{
    return m_status;
}

void LoadBalancer::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LoadBalancer::GetCreateTime() const
{
    return m_createTime;
}

void LoadBalancer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadBalancer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoadBalancer::GetStatusTime() const
{
    return m_statusTime;
}

void LoadBalancer::SetStatusTime(const string& _statusTime)
{
    m_statusTime = _statusTime;
    m_statusTimeHasBeenSet = true;
}

bool LoadBalancer::StatusTimeHasBeenSet() const
{
    return m_statusTimeHasBeenSet;
}

uint64_t LoadBalancer::GetProjectId() const
{
    return m_projectId;
}

void LoadBalancer::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LoadBalancer::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string LoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void LoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t LoadBalancer::GetOpenBgp() const
{
    return m_openBgp;
}

void LoadBalancer::SetOpenBgp(const uint64_t& _openBgp)
{
    m_openBgp = _openBgp;
    m_openBgpHasBeenSet = true;
}

bool LoadBalancer::OpenBgpHasBeenSet() const
{
    return m_openBgpHasBeenSet;
}

bool LoadBalancer::GetSnat() const
{
    return m_snat;
}

void LoadBalancer::SetSnat(const bool& _snat)
{
    m_snat = _snat;
    m_snatHasBeenSet = true;
}

bool LoadBalancer::SnatHasBeenSet() const
{
    return m_snatHasBeenSet;
}

uint64_t LoadBalancer::GetIsolation() const
{
    return m_isolation;
}

void LoadBalancer::SetIsolation(const uint64_t& _isolation)
{
    m_isolation = _isolation;
    m_isolationHasBeenSet = true;
}

bool LoadBalancer::IsolationHasBeenSet() const
{
    return m_isolationHasBeenSet;
}

string LoadBalancer::GetLog() const
{
    return m_log;
}

void LoadBalancer::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool LoadBalancer::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string LoadBalancer::GetSubnetId() const
{
    return m_subnetId;
}

void LoadBalancer::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LoadBalancer::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TagInfo> LoadBalancer::GetTags() const
{
    return m_tags;
}

void LoadBalancer::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadBalancer::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> LoadBalancer::GetSecureGroups() const
{
    return m_secureGroups;
}

void LoadBalancer::SetSecureGroups(const vector<string>& _secureGroups)
{
    m_secureGroups = _secureGroups;
    m_secureGroupsHasBeenSet = true;
}

bool LoadBalancer::SecureGroupsHasBeenSet() const
{
    return m_secureGroupsHasBeenSet;
}

TargetRegionInfo LoadBalancer::GetTargetRegionInfo() const
{
    return m_targetRegionInfo;
}

void LoadBalancer::SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo)
{
    m_targetRegionInfo = _targetRegionInfo;
    m_targetRegionInfoHasBeenSet = true;
}

bool LoadBalancer::TargetRegionInfoHasBeenSet() const
{
    return m_targetRegionInfoHasBeenSet;
}

string LoadBalancer::GetAnycastZone() const
{
    return m_anycastZone;
}

void LoadBalancer::SetAnycastZone(const string& _anycastZone)
{
    m_anycastZone = _anycastZone;
    m_anycastZoneHasBeenSet = true;
}

bool LoadBalancer::AnycastZoneHasBeenSet() const
{
    return m_anycastZoneHasBeenSet;
}

string LoadBalancer::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void LoadBalancer::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool LoadBalancer::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

uint64_t LoadBalancer::GetNumericalVpcId() const
{
    return m_numericalVpcId;
}

void LoadBalancer::SetNumericalVpcId(const uint64_t& _numericalVpcId)
{
    m_numericalVpcId = _numericalVpcId;
    m_numericalVpcIdHasBeenSet = true;
}

bool LoadBalancer::NumericalVpcIdHasBeenSet() const
{
    return m_numericalVpcIdHasBeenSet;
}

string LoadBalancer::GetVipIsp() const
{
    return m_vipIsp;
}

void LoadBalancer::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool LoadBalancer::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}

ZoneInfo LoadBalancer::GetMasterZone() const
{
    return m_masterZone;
}

void LoadBalancer::SetMasterZone(const ZoneInfo& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool LoadBalancer::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<ZoneInfo> LoadBalancer::GetBackupZoneSet() const
{
    return m_backupZoneSet;
}

void LoadBalancer::SetBackupZoneSet(const vector<ZoneInfo>& _backupZoneSet)
{
    m_backupZoneSet = _backupZoneSet;
    m_backupZoneSetHasBeenSet = true;
}

bool LoadBalancer::BackupZoneSetHasBeenSet() const
{
    return m_backupZoneSetHasBeenSet;
}

string LoadBalancer::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void LoadBalancer::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool LoadBalancer::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string LoadBalancer::GetExpireTime() const
{
    return m_expireTime;
}

void LoadBalancer::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LoadBalancer::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string LoadBalancer::GetChargeType() const
{
    return m_chargeType;
}

void LoadBalancer::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool LoadBalancer::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

InternetAccessible LoadBalancer::GetNetworkAttributes() const
{
    return m_networkAttributes;
}

void LoadBalancer::SetNetworkAttributes(const InternetAccessible& _networkAttributes)
{
    m_networkAttributes = _networkAttributes;
    m_networkAttributesHasBeenSet = true;
}

bool LoadBalancer::NetworkAttributesHasBeenSet() const
{
    return m_networkAttributesHasBeenSet;
}

LBChargePrepaid LoadBalancer::GetPrepaidAttributes() const
{
    return m_prepaidAttributes;
}

void LoadBalancer::SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes)
{
    m_prepaidAttributes = _prepaidAttributes;
    m_prepaidAttributesHasBeenSet = true;
}

bool LoadBalancer::PrepaidAttributesHasBeenSet() const
{
    return m_prepaidAttributesHasBeenSet;
}

string LoadBalancer::GetLogSetId() const
{
    return m_logSetId;
}

void LoadBalancer::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool LoadBalancer::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string LoadBalancer::GetLogTopicId() const
{
    return m_logTopicId;
}

void LoadBalancer::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool LoadBalancer::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

string LoadBalancer::GetAddressIPv6() const
{
    return m_addressIPv6;
}

void LoadBalancer::SetAddressIPv6(const string& _addressIPv6)
{
    m_addressIPv6 = _addressIPv6;
    m_addressIPv6HasBeenSet = true;
}

bool LoadBalancer::AddressIPv6HasBeenSet() const
{
    return m_addressIPv6HasBeenSet;
}

ExtraInfo LoadBalancer::GetExtraInfo() const
{
    return m_extraInfo;
}

void LoadBalancer::SetExtraInfo(const ExtraInfo& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool LoadBalancer::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}


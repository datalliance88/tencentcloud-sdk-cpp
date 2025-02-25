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

#include <tencentcloud/cbs/v20170312/model/Disk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

Disk::Disk() :
    m_diskIdHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_portableHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_snapshotAbilityHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskStateHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_attachedHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_rollbackingHasBeenSet(false),
    m_rollbackPercentHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_autoRenewFlagErrorHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_deadlineErrorHasBeenSet(false),
    m_isReturnableHasBeenSet(false),
    m_returnFailCodeHasBeenSet(false),
    m_autoSnapshotPolicyIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_differDaysOfDeadlineHasBeenSet(false),
    m_migratingHasBeenSet(false),
    m_migratePercentHasBeenSet(false),
    m_shareableHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_attachDeviceIdHasBeenSet(false),
    m_attachDeviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome Disk::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Portable") && !value["Portable"].IsNull())
    {
        if (!value["Portable"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Portable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_portable = value["Portable"].GetBool();
        m_portableHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Disk.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("SnapshotAbility") && !value["SnapshotAbility"].IsNull())
    {
        if (!value["SnapshotAbility"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.SnapshotAbility` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotAbility = value["SnapshotAbility"].GetBool();
        m_snapshotAbilityHasBeenSet = true;
    }

    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskState") && !value["DiskState"].IsNull())
    {
        if (!value["DiskState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskState = string(value["DiskState"].GetString());
        m_diskStateHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("Attached") && !value["Attached"].IsNull())
    {
        if (!value["Attached"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Attached` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_attached = value["Attached"].GetBool();
        m_attachedHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Rollbacking") && !value["Rollbacking"].IsNull())
    {
        if (!value["Rollbacking"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Rollbacking` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rollbacking = value["Rollbacking"].GetBool();
        m_rollbackingHasBeenSet = true;
    }

    if (value.HasMember("RollbackPercent") && !value["RollbackPercent"].IsNull())
    {
        if (!value["RollbackPercent"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Disk.RollbackPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackPercent = value["RollbackPercent"].GetUint64();
        m_rollbackPercentHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlagError") && !value["AutoRenewFlagError"].IsNull())
    {
        if (!value["AutoRenewFlagError"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.AutoRenewFlagError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlagError = value["AutoRenewFlagError"].GetBool();
        m_autoRenewFlagErrorHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("DeadlineError") && !value["DeadlineError"].IsNull())
    {
        if (!value["DeadlineError"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.DeadlineError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineError = value["DeadlineError"].GetBool();
        m_deadlineErrorHasBeenSet = true;
    }

    if (value.HasMember("IsReturnable") && !value["IsReturnable"].IsNull())
    {
        if (!value["IsReturnable"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.IsReturnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReturnable = value["IsReturnable"].GetBool();
        m_isReturnableHasBeenSet = true;
    }

    if (value.HasMember("ReturnFailCode") && !value["ReturnFailCode"].IsNull())
    {
        if (!value["ReturnFailCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Disk.ReturnFailCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnFailCode = value["ReturnFailCode"].GetInt64();
        m_returnFailCodeHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyIds") && !value["AutoSnapshotPolicyIds"].IsNull())
    {
        if (!value["AutoSnapshotPolicyIds"].IsArray())
            return CoreInternalOutcome(Error("response `Disk.AutoSnapshotPolicyIds` is not array type"));

        const Value &tmpValue = value["AutoSnapshotPolicyIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoSnapshotPolicyIds.push_back((*itr).GetString());
        }
        m_autoSnapshotPolicyIdsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Disk.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
    }

    if (value.HasMember("DifferDaysOfDeadline") && !value["DifferDaysOfDeadline"].IsNull())
    {
        if (!value["DifferDaysOfDeadline"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Disk.DifferDaysOfDeadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_differDaysOfDeadline = value["DifferDaysOfDeadline"].GetInt64();
        m_differDaysOfDeadlineHasBeenSet = true;
    }

    if (value.HasMember("Migrating") && !value["Migrating"].IsNull())
    {
        if (!value["Migrating"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Migrating` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_migrating = value["Migrating"].GetBool();
        m_migratingHasBeenSet = true;
    }

    if (value.HasMember("MigratePercent") && !value["MigratePercent"].IsNull())
    {
        if (!value["MigratePercent"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Disk.MigratePercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migratePercent = value["MigratePercent"].GetUint64();
        m_migratePercentHasBeenSet = true;
    }

    if (value.HasMember("Shareable") && !value["Shareable"].IsNull())
    {
        if (!value["Shareable"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Disk.Shareable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shareable = value["Shareable"].GetBool();
        m_shareableHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdList") && !value["InstanceIdList"].IsNull())
    {
        if (!value["InstanceIdList"].IsArray())
            return CoreInternalOutcome(Error("response `Disk.InstanceIdList` is not array type"));

        const Value &tmpValue = value["InstanceIdList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdList.push_back((*itr).GetString());
        }
        m_instanceIdListHasBeenSet = true;
    }

    if (value.HasMember("AttachDeviceId") && !value["AttachDeviceId"].IsNull())
    {
        if (!value["AttachDeviceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.AttachDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachDeviceId = string(value["AttachDeviceId"].GetString());
        m_attachDeviceIdHasBeenSet = true;
    }

    if (value.HasMember("AttachDeviceType") && !value["AttachDeviceType"].IsNull())
    {
        if (!value["AttachDeviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Disk.AttachDeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachDeviceType = string(value["AttachDeviceType"].GetString());
        m_attachDeviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Disk::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_portableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Portable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portable, allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotAbilityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotAbility, allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskState.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Attached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attached, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rollbacking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbacking, allocator);
    }

    if (m_rollbackPercentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RollbackPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbackPercent, allocator);
    }

    if (m_encryptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_autoRenewFlagErrorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlagError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlagError, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineErrorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeadlineError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadlineError, allocator);
    }

    if (m_isReturnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsReturnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReturnable, allocator);
    }

    if (m_returnFailCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnFailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnFailCode, allocator);
    }

    if (m_autoSnapshotPolicyIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoSnapshotPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_autoSnapshotPolicyIds.begin(); itr != m_autoSnapshotPolicyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_deleteWithInstanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_differDaysOfDeadlineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DifferDaysOfDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_differDaysOfDeadline, allocator);
    }

    if (m_migratingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Migrating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrating, allocator);
    }

    if (m_migratePercentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigratePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migratePercent, allocator);
    }

    if (m_shareableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Shareable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareable, allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attachDeviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_attachDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachDeviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_attachDeviceType.c_str(), allocator).Move(), allocator);
    }

}


string Disk::GetDiskId() const
{
    return m_diskId;
}

void Disk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool Disk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string Disk::GetDiskUsage() const
{
    return m_diskUsage;
}

void Disk::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool Disk::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string Disk::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void Disk::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool Disk::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

bool Disk::GetPortable() const
{
    return m_portable;
}

void Disk::SetPortable(const bool& _portable)
{
    m_portable = _portable;
    m_portableHasBeenSet = true;
}

bool Disk::PortableHasBeenSet() const
{
    return m_portableHasBeenSet;
}

Placement Disk::GetPlacement() const
{
    return m_placement;
}

void Disk::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool Disk::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

bool Disk::GetSnapshotAbility() const
{
    return m_snapshotAbility;
}

void Disk::SetSnapshotAbility(const bool& _snapshotAbility)
{
    m_snapshotAbility = _snapshotAbility;
    m_snapshotAbilityHasBeenSet = true;
}

bool Disk::SnapshotAbilityHasBeenSet() const
{
    return m_snapshotAbilityHasBeenSet;
}

string Disk::GetDiskName() const
{
    return m_diskName;
}

void Disk::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool Disk::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

uint64_t Disk::GetDiskSize() const
{
    return m_diskSize;
}

void Disk::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Disk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string Disk::GetDiskState() const
{
    return m_diskState;
}

void Disk::SetDiskState(const string& _diskState)
{
    m_diskState = _diskState;
    m_diskStateHasBeenSet = true;
}

bool Disk::DiskStateHasBeenSet() const
{
    return m_diskStateHasBeenSet;
}

string Disk::GetDiskType() const
{
    return m_diskType;
}

void Disk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Disk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

bool Disk::GetAttached() const
{
    return m_attached;
}

void Disk::SetAttached(const bool& _attached)
{
    m_attached = _attached;
    m_attachedHasBeenSet = true;
}

bool Disk::AttachedHasBeenSet() const
{
    return m_attachedHasBeenSet;
}

string Disk::GetInstanceId() const
{
    return m_instanceId;
}

void Disk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Disk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Disk::GetCreateTime() const
{
    return m_createTime;
}

void Disk::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Disk::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Disk::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void Disk::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool Disk::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

bool Disk::GetRollbacking() const
{
    return m_rollbacking;
}

void Disk::SetRollbacking(const bool& _rollbacking)
{
    m_rollbacking = _rollbacking;
    m_rollbackingHasBeenSet = true;
}

bool Disk::RollbackingHasBeenSet() const
{
    return m_rollbackingHasBeenSet;
}

uint64_t Disk::GetRollbackPercent() const
{
    return m_rollbackPercent;
}

void Disk::SetRollbackPercent(const uint64_t& _rollbackPercent)
{
    m_rollbackPercent = _rollbackPercent;
    m_rollbackPercentHasBeenSet = true;
}

bool Disk::RollbackPercentHasBeenSet() const
{
    return m_rollbackPercentHasBeenSet;
}

bool Disk::GetEncrypt() const
{
    return m_encrypt;
}

void Disk::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool Disk::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

bool Disk::GetAutoRenewFlagError() const
{
    return m_autoRenewFlagError;
}

void Disk::SetAutoRenewFlagError(const bool& _autoRenewFlagError)
{
    m_autoRenewFlagError = _autoRenewFlagError;
    m_autoRenewFlagErrorHasBeenSet = true;
}

bool Disk::AutoRenewFlagErrorHasBeenSet() const
{
    return m_autoRenewFlagErrorHasBeenSet;
}

string Disk::GetRenewFlag() const
{
    return m_renewFlag;
}

void Disk::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Disk::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

bool Disk::GetDeadlineError() const
{
    return m_deadlineError;
}

void Disk::SetDeadlineError(const bool& _deadlineError)
{
    m_deadlineError = _deadlineError;
    m_deadlineErrorHasBeenSet = true;
}

bool Disk::DeadlineErrorHasBeenSet() const
{
    return m_deadlineErrorHasBeenSet;
}

bool Disk::GetIsReturnable() const
{
    return m_isReturnable;
}

void Disk::SetIsReturnable(const bool& _isReturnable)
{
    m_isReturnable = _isReturnable;
    m_isReturnableHasBeenSet = true;
}

bool Disk::IsReturnableHasBeenSet() const
{
    return m_isReturnableHasBeenSet;
}

int64_t Disk::GetReturnFailCode() const
{
    return m_returnFailCode;
}

void Disk::SetReturnFailCode(const int64_t& _returnFailCode)
{
    m_returnFailCode = _returnFailCode;
    m_returnFailCodeHasBeenSet = true;
}

bool Disk::ReturnFailCodeHasBeenSet() const
{
    return m_returnFailCodeHasBeenSet;
}

vector<string> Disk::GetAutoSnapshotPolicyIds() const
{
    return m_autoSnapshotPolicyIds;
}

void Disk::SetAutoSnapshotPolicyIds(const vector<string>& _autoSnapshotPolicyIds)
{
    m_autoSnapshotPolicyIds = _autoSnapshotPolicyIds;
    m_autoSnapshotPolicyIdsHasBeenSet = true;
}

bool Disk::AutoSnapshotPolicyIdsHasBeenSet() const
{
    return m_autoSnapshotPolicyIdsHasBeenSet;
}

vector<Tag> Disk::GetTags() const
{
    return m_tags;
}

void Disk::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Disk::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool Disk::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void Disk::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool Disk::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

int64_t Disk::GetDifferDaysOfDeadline() const
{
    return m_differDaysOfDeadline;
}

void Disk::SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline)
{
    m_differDaysOfDeadline = _differDaysOfDeadline;
    m_differDaysOfDeadlineHasBeenSet = true;
}

bool Disk::DifferDaysOfDeadlineHasBeenSet() const
{
    return m_differDaysOfDeadlineHasBeenSet;
}

bool Disk::GetMigrating() const
{
    return m_migrating;
}

void Disk::SetMigrating(const bool& _migrating)
{
    m_migrating = _migrating;
    m_migratingHasBeenSet = true;
}

bool Disk::MigratingHasBeenSet() const
{
    return m_migratingHasBeenSet;
}

uint64_t Disk::GetMigratePercent() const
{
    return m_migratePercent;
}

void Disk::SetMigratePercent(const uint64_t& _migratePercent)
{
    m_migratePercent = _migratePercent;
    m_migratePercentHasBeenSet = true;
}

bool Disk::MigratePercentHasBeenSet() const
{
    return m_migratePercentHasBeenSet;
}

bool Disk::GetShareable() const
{
    return m_shareable;
}

void Disk::SetShareable(const bool& _shareable)
{
    m_shareable = _shareable;
    m_shareableHasBeenSet = true;
}

bool Disk::ShareableHasBeenSet() const
{
    return m_shareableHasBeenSet;
}

vector<string> Disk::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void Disk::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool Disk::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string Disk::GetAttachDeviceId() const
{
    return m_attachDeviceId;
}

void Disk::SetAttachDeviceId(const string& _attachDeviceId)
{
    m_attachDeviceId = _attachDeviceId;
    m_attachDeviceIdHasBeenSet = true;
}

bool Disk::AttachDeviceIdHasBeenSet() const
{
    return m_attachDeviceIdHasBeenSet;
}

string Disk::GetAttachDeviceType() const
{
    return m_attachDeviceType;
}

void Disk::SetAttachDeviceType(const string& _attachDeviceType)
{
    m_attachDeviceType = _attachDeviceType;
    m_attachDeviceTypeHasBeenSet = true;
}

bool Disk::AttachDeviceTypeHasBeenSet() const
{
    return m_attachDeviceTypeHasBeenSet;
}


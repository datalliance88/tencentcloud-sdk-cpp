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

#include <tencentcloud/cdb/v20170320/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyBackupConfigRequest::ModifyBackupConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_expireDaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_binlogExpireDaysHasBeenSet(false)
{
}

string ModifyBackupConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireDaysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireDays, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogExpireDaysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BinlogExpireDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_binlogExpireDays, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBackupConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBackupConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetExpireDays() const
{
    return m_expireDays;
}

void ModifyBackupConfigRequest::SetExpireDays(const int64_t& _expireDays)
{
    m_expireDays = _expireDays;
    m_expireDaysHasBeenSet = true;
}

bool ModifyBackupConfigRequest::ExpireDaysHasBeenSet() const
{
    return m_expireDaysHasBeenSet;
}

string ModifyBackupConfigRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyBackupConfigRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyBackupConfigRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyBackupConfigRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void ModifyBackupConfigRequest::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

int64_t ModifyBackupConfigRequest::GetBinlogExpireDays() const
{
    return m_binlogExpireDays;
}

void ModifyBackupConfigRequest::SetBinlogExpireDays(const int64_t& _binlogExpireDays)
{
    m_binlogExpireDays = _binlogExpireDays;
    m_binlogExpireDaysHasBeenSet = true;
}

bool ModifyBackupConfigRequest::BinlogExpireDaysHasBeenSet() const
{
    return m_binlogExpireDaysHasBeenSet;
}



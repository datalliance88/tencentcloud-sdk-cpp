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

#include <tencentcloud/batch/v20170312/model/LocalDiskType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

LocalDiskType::LocalDiskType() :
    m_typeHasBeenSet(false),
    m_partitionTypeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false)
{
}

CoreInternalOutcome LocalDiskType::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `LocalDiskType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PartitionType") && !value["PartitionType"].IsNull())
    {
        if (!value["PartitionType"].IsString())
        {
            return CoreInternalOutcome(Error("response `LocalDiskType.PartitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionType = string(value["PartitionType"].GetString());
        m_partitionTypeHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `LocalDiskType.MinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetInt64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `LocalDiskType.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalDiskType::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PartitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_partitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

}


string LocalDiskType::GetType() const
{
    return m_type;
}

void LocalDiskType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LocalDiskType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string LocalDiskType::GetPartitionType() const
{
    return m_partitionType;
}

void LocalDiskType::SetPartitionType(const string& _partitionType)
{
    m_partitionType = _partitionType;
    m_partitionTypeHasBeenSet = true;
}

bool LocalDiskType::PartitionTypeHasBeenSet() const
{
    return m_partitionTypeHasBeenSet;
}

int64_t LocalDiskType::GetMinSize() const
{
    return m_minSize;
}

void LocalDiskType::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool LocalDiskType::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t LocalDiskType::GetMaxSize() const
{
    return m_maxSize;
}

void LocalDiskType::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool LocalDiskType::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}


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

#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeDetailInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribePlayErrorCodeDetailInfoListRequest::DescribePlayErrorCodeDetailInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_statTypeHasBeenSet(false),
    m_playDomainsHasBeenSet(false)
{
}

string DescribePlayErrorCodeDetailInfoListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_statType.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_playDomains.begin(); itr != m_playDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePlayErrorCodeDetailInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribePlayErrorCodeDetailInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribePlayErrorCodeDetailInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribePlayErrorCodeDetailInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribePlayErrorCodeDetailInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribePlayErrorCodeDetailInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribePlayErrorCodeDetailInfoListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribePlayErrorCodeDetailInfoListRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribePlayErrorCodeDetailInfoListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribePlayErrorCodeDetailInfoListRequest::GetStatType() const
{
    return m_statType;
}

void DescribePlayErrorCodeDetailInfoListRequest::SetStatType(const string& _statType)
{
    m_statType = _statType;
    m_statTypeHasBeenSet = true;
}

bool DescribePlayErrorCodeDetailInfoListRequest::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

vector<string> DescribePlayErrorCodeDetailInfoListRequest::GetPlayDomains() const
{
    return m_playDomains;
}

void DescribePlayErrorCodeDetailInfoListRequest::SetPlayDomains(const vector<string>& _playDomains)
{
    m_playDomains = _playDomains;
    m_playDomainsHasBeenSet = true;
}

bool DescribePlayErrorCodeDetailInfoListRequest::PlayDomainsHasBeenSet() const
{
    return m_playDomainsHasBeenSet;
}



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

#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeTopClientIpSumInfoListRequest::DescribeTopClientIpSumInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playDomainsHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderParamHasBeenSet(false)
{
}

string DescribeTopClientIpSumInfoListRequest::ToJsonString() const
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

    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_orderParamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderParam.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopClientIpSumInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTopClientIpSumInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTopClientIpSumInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTopClientIpSumInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeTopClientIpSumInfoListRequest::GetPlayDomains() const
{
    return m_playDomains;
}

void DescribeTopClientIpSumInfoListRequest::SetPlayDomains(const vector<string>& _playDomains)
{
    m_playDomains = _playDomains;
    m_playDomainsHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::PlayDomainsHasBeenSet() const
{
    return m_playDomainsHasBeenSet;
}

uint64_t DescribeTopClientIpSumInfoListRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeTopClientIpSumInfoListRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeTopClientIpSumInfoListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTopClientIpSumInfoListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeTopClientIpSumInfoListRequest::GetOrderParam() const
{
    return m_orderParam;
}

void DescribeTopClientIpSumInfoListRequest::SetOrderParam(const string& _orderParam)
{
    m_orderParam = _orderParam;
    m_orderParamHasBeenSet = true;
}

bool DescribeTopClientIpSumInfoListRequest::OrderParamHasBeenSet() const
{
    return m_orderParamHasBeenSet;
}



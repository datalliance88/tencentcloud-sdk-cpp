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

#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeLiveTranscodeDetailInfoRequest::DescribeLiveTranscodeDetailInfoRequest() :
    m_dayTimeHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeLiveTranscodeDetailInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dayTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveTranscodeDetailInfoRequest::GetDayTime() const
{
    return m_dayTime;
}

void DescribeLiveTranscodeDetailInfoRequest::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool DescribeLiveTranscodeDetailInfoRequest::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

string DescribeLiveTranscodeDetailInfoRequest::GetPushDomain() const
{
    return m_pushDomain;
}

void DescribeLiveTranscodeDetailInfoRequest::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool DescribeLiveTranscodeDetailInfoRequest::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string DescribeLiveTranscodeDetailInfoRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeLiveTranscodeDetailInfoRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeLiveTranscodeDetailInfoRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

uint64_t DescribeLiveTranscodeDetailInfoRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeLiveTranscodeDetailInfoRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeLiveTranscodeDetailInfoRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeLiveTranscodeDetailInfoRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLiveTranscodeDetailInfoRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLiveTranscodeDetailInfoRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}



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

#include <tencentcloud/iai/v20180301/model/SearchFacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

SearchFacesRequest::SearchFacesRequest() :
    m_groupIdsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_maxFaceNumHasBeenSet(false),
    m_minFaceSizeHasBeenSet(false),
    m_maxPersonNumHasBeenSet(false),
    m_needPersonInfoHasBeenSet(false)
{
}

string SearchFacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_maxFaceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxFaceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFaceNum, allocator);
    }

    if (m_minFaceSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinFaceSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minFaceSize, allocator);
    }

    if (m_maxPersonNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxPersonNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPersonNum, allocator);
    }

    if (m_needPersonInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedPersonInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPersonInfo, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SearchFacesRequest::GetGroupIds() const
{
    return m_groupIds;
}

void SearchFacesRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool SearchFacesRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string SearchFacesRequest::GetImage() const
{
    return m_image;
}

void SearchFacesRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SearchFacesRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SearchFacesRequest::GetUrl() const
{
    return m_url;
}

void SearchFacesRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SearchFacesRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t SearchFacesRequest::GetMaxFaceNum() const
{
    return m_maxFaceNum;
}

void SearchFacesRequest::SetMaxFaceNum(const uint64_t& _maxFaceNum)
{
    m_maxFaceNum = _maxFaceNum;
    m_maxFaceNumHasBeenSet = true;
}

bool SearchFacesRequest::MaxFaceNumHasBeenSet() const
{
    return m_maxFaceNumHasBeenSet;
}

uint64_t SearchFacesRequest::GetMinFaceSize() const
{
    return m_minFaceSize;
}

void SearchFacesRequest::SetMinFaceSize(const uint64_t& _minFaceSize)
{
    m_minFaceSize = _minFaceSize;
    m_minFaceSizeHasBeenSet = true;
}

bool SearchFacesRequest::MinFaceSizeHasBeenSet() const
{
    return m_minFaceSizeHasBeenSet;
}

uint64_t SearchFacesRequest::GetMaxPersonNum() const
{
    return m_maxPersonNum;
}

void SearchFacesRequest::SetMaxPersonNum(const uint64_t& _maxPersonNum)
{
    m_maxPersonNum = _maxPersonNum;
    m_maxPersonNumHasBeenSet = true;
}

bool SearchFacesRequest::MaxPersonNumHasBeenSet() const
{
    return m_maxPersonNumHasBeenSet;
}

int64_t SearchFacesRequest::GetNeedPersonInfo() const
{
    return m_needPersonInfo;
}

void SearchFacesRequest::SetNeedPersonInfo(const int64_t& _needPersonInfo)
{
    m_needPersonInfo = _needPersonInfo;
    m_needPersonInfoHasBeenSet = true;
}

bool SearchFacesRequest::NeedPersonInfoHasBeenSet() const
{
    return m_needPersonInfoHasBeenSet;
}



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

#include <tencentcloud/iai/v20180301/model/CompareFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

CompareFaceRequest::CompareFaceRequest() :
    m_imageAHasBeenSet(false),
    m_imageBHasBeenSet(false),
    m_urlAHasBeenSet(false),
    m_urlBHasBeenSet(false)
{
}

string CompareFaceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageA.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageB.c_str(), allocator).Move(), allocator);
    }

    if (m_urlAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UrlA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_urlA.c_str(), allocator).Move(), allocator);
    }

    if (m_urlBHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UrlB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_urlB.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CompareFaceRequest::GetImageA() const
{
    return m_imageA;
}

void CompareFaceRequest::SetImageA(const string& _imageA)
{
    m_imageA = _imageA;
    m_imageAHasBeenSet = true;
}

bool CompareFaceRequest::ImageAHasBeenSet() const
{
    return m_imageAHasBeenSet;
}

string CompareFaceRequest::GetImageB() const
{
    return m_imageB;
}

void CompareFaceRequest::SetImageB(const string& _imageB)
{
    m_imageB = _imageB;
    m_imageBHasBeenSet = true;
}

bool CompareFaceRequest::ImageBHasBeenSet() const
{
    return m_imageBHasBeenSet;
}

string CompareFaceRequest::GetUrlA() const
{
    return m_urlA;
}

void CompareFaceRequest::SetUrlA(const string& _urlA)
{
    m_urlA = _urlA;
    m_urlAHasBeenSet = true;
}

bool CompareFaceRequest::UrlAHasBeenSet() const
{
    return m_urlAHasBeenSet;
}

string CompareFaceRequest::GetUrlB() const
{
    return m_urlB;
}

void CompareFaceRequest::SetUrlB(const string& _urlB)
{
    m_urlB = _urlB;
    m_urlBHasBeenSet = true;
}

bool CompareFaceRequest::UrlBHasBeenSet() const
{
    return m_urlBHasBeenSet;
}



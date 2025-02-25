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

#include <tencentcloud/tmt/v20180321/model/TextTranslateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace rapidjson;
using namespace std;

TextTranslateRequest::TextTranslateRequest() :
    m_sourceTextHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string TextTranslateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextTranslateRequest::GetSourceText() const
{
    return m_sourceText;
}

void TextTranslateRequest::SetSourceText(const string& _sourceText)
{
    m_sourceText = _sourceText;
    m_sourceTextHasBeenSet = true;
}

bool TextTranslateRequest::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string TextTranslateRequest::GetSource() const
{
    return m_source;
}

void TextTranslateRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TextTranslateRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TextTranslateRequest::GetTarget() const
{
    return m_target;
}

void TextTranslateRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TextTranslateRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t TextTranslateRequest::GetProjectId() const
{
    return m_projectId;
}

void TextTranslateRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextTranslateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}



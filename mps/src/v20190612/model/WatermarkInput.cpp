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

#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

WatermarkInput::WatermarkInput() :
    m_definitionHasBeenSet(false),
    m_textContentHasBeenSet(false),
    m_svgContentHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WatermarkInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("TextContent") && !value["TextContent"].IsNull())
    {
        if (!value["TextContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `WatermarkInput.TextContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textContent = string(value["TextContent"].GetString());
        m_textContentHasBeenSet = true;
    }

    if (value.HasMember("SvgContent") && !value["SvgContent"].IsNull())
    {
        if (!value["SvgContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `WatermarkInput.SvgContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_svgContent = string(value["SvgContent"].GetString());
        m_svgContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_textContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_textContent.c_str(), allocator).Move(), allocator);
    }

    if (m_svgContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SvgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_svgContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WatermarkInput::GetDefinition() const
{
    return m_definition;
}

void WatermarkInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool WatermarkInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string WatermarkInput::GetTextContent() const
{
    return m_textContent;
}

void WatermarkInput::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool WatermarkInput::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}

string WatermarkInput::GetSvgContent() const
{
    return m_svgContent;
}

void WatermarkInput::SetSvgContent(const string& _svgContent)
{
    m_svgContent = _svgContent;
    m_svgContentHasBeenSet = true;
}

bool WatermarkInput::SvgContentHasBeenSet() const
{
    return m_svgContentHasBeenSet;
}


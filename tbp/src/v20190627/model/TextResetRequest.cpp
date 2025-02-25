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

#include <tencentcloud/tbp/v20190627/model/TextResetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190627::Model;
using namespace rapidjson;
using namespace std;

TextResetRequest::TextResetRequest() :
    m_botIdHasBeenSet(false),
    m_botEnvHasBeenSet(false),
    m_terminalIdHasBeenSet(false),
    m_platformTypeHasBeenSet(false)
{
}

string TextResetRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_botEnvHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BotEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_botEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerminalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_terminalId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platformType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextResetRequest::GetBotId() const
{
    return m_botId;
}

void TextResetRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool TextResetRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string TextResetRequest::GetBotEnv() const
{
    return m_botEnv;
}

void TextResetRequest::SetBotEnv(const string& _botEnv)
{
    m_botEnv = _botEnv;
    m_botEnvHasBeenSet = true;
}

bool TextResetRequest::BotEnvHasBeenSet() const
{
    return m_botEnvHasBeenSet;
}

string TextResetRequest::GetTerminalId() const
{
    return m_terminalId;
}

void TextResetRequest::SetTerminalId(const string& _terminalId)
{
    m_terminalId = _terminalId;
    m_terminalIdHasBeenSet = true;
}

bool TextResetRequest::TerminalIdHasBeenSet() const
{
    return m_terminalIdHasBeenSet;
}

string TextResetRequest::GetPlatformType() const
{
    return m_platformType;
}

void TextResetRequest::SetPlatformType(const string& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool TextResetRequest::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}



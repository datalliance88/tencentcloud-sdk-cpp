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

#include <tencentcloud/tbp/v20190311/model/PostTextResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbp::V20190311::Model;
using namespace rapidjson;
using namespace std;

PostTextResponse::PostTextResponse() :
    m_dialogStatusHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_responseTextHasBeenSet(false),
    m_slotInfoListHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_waveUrlHasBeenSet(false),
    m_waveDataHasBeenSet(false)
{
}

CoreInternalOutcome PostTextResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DialogStatus") && !rsp["DialogStatus"].IsNull())
    {
        if (!rsp["DialogStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DialogStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dialogStatus = string(rsp["DialogStatus"].GetString());
        m_dialogStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BotName") && !rsp["BotName"].IsNull())
    {
        if (!rsp["BotName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botName = string(rsp["BotName"].GetString());
        m_botNameHasBeenSet = true;
    }

    if (rsp.HasMember("IntentName") && !rsp["IntentName"].IsNull())
    {
        if (!rsp["IntentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `IntentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentName = string(rsp["IntentName"].GetString());
        m_intentNameHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseText") && !rsp["ResponseText"].IsNull())
    {
        if (!rsp["ResponseText"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseText = string(rsp["ResponseText"].GetString());
        m_responseTextHasBeenSet = true;
    }

    if (rsp.HasMember("SlotInfoList") && !rsp["SlotInfoList"].IsNull())
    {
        if (!rsp["SlotInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `SlotInfoList` is not array type"));

        const Value &tmpValue = rsp["SlotInfoList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotInfoList.push_back(item);
        }
        m_slotInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("SessionAttributes") && !rsp["SessionAttributes"].IsNull())
    {
        if (!rsp["SessionAttributes"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionAttributes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAttributes = string(rsp["SessionAttributes"].GetString());
        m_sessionAttributesHasBeenSet = true;
    }

    if (rsp.HasMember("Question") && !rsp["Question"].IsNull())
    {
        if (!rsp["Question"].IsString())
        {
            return CoreInternalOutcome(Error("response `Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(rsp["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (rsp.HasMember("WaveUrl") && !rsp["WaveUrl"].IsNull())
    {
        if (!rsp["WaveUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `WaveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waveUrl = string(rsp["WaveUrl"].GetString());
        m_waveUrlHasBeenSet = true;
    }

    if (rsp.HasMember("WaveData") && !rsp["WaveData"].IsNull())
    {
        if (!rsp["WaveData"].IsString())
        {
            return CoreInternalOutcome(Error("response `WaveData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waveData = string(rsp["WaveData"].GetString());
        m_waveDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string PostTextResponse::GetDialogStatus() const
{
    return m_dialogStatus;
}

bool PostTextResponse::DialogStatusHasBeenSet() const
{
    return m_dialogStatusHasBeenSet;
}

string PostTextResponse::GetBotName() const
{
    return m_botName;
}

bool PostTextResponse::BotNameHasBeenSet() const
{
    return m_botNameHasBeenSet;
}

string PostTextResponse::GetIntentName() const
{
    return m_intentName;
}

bool PostTextResponse::IntentNameHasBeenSet() const
{
    return m_intentNameHasBeenSet;
}

string PostTextResponse::GetResponseText() const
{
    return m_responseText;
}

bool PostTextResponse::ResponseTextHasBeenSet() const
{
    return m_responseTextHasBeenSet;
}

vector<SlotInfo> PostTextResponse::GetSlotInfoList() const
{
    return m_slotInfoList;
}

bool PostTextResponse::SlotInfoListHasBeenSet() const
{
    return m_slotInfoListHasBeenSet;
}

string PostTextResponse::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

bool PostTextResponse::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}

string PostTextResponse::GetQuestion() const
{
    return m_question;
}

bool PostTextResponse::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string PostTextResponse::GetWaveUrl() const
{
    return m_waveUrl;
}

bool PostTextResponse::WaveUrlHasBeenSet() const
{
    return m_waveUrlHasBeenSet;
}

string PostTextResponse::GetWaveData() const
{
    return m_waveData;
}

bool PostTextResponse::WaveDataHasBeenSet() const
{
    return m_waveDataHasBeenSet;
}



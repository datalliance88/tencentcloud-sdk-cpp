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

#include <tencentcloud/vod/v20180717/model/MediaContentReviewSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaContentReviewSegmentItem::MediaContentReviewSegmentItem() :
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeStampHasBeenSet(false)
{
}

CoreInternalOutcome MediaContentReviewSegmentItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.StartTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.EndTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTimeStamp") && !value["PicUrlExpireTimeStamp"].IsNull())
    {
        if (!value["PicUrlExpireTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaContentReviewSegmentItem.PicUrlExpireTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTimeStamp = value["PicUrlExpireTimeStamp"].GetInt64();
        m_picUrlExpireTimeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaContentReviewSegmentItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_startTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_labelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlExpireTimeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PicUrlExpireTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_picUrlExpireTimeStamp, allocator);
    }

}


double MediaContentReviewSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void MediaContentReviewSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double MediaContentReviewSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void MediaContentReviewSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

double MediaContentReviewSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void MediaContentReviewSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string MediaContentReviewSegmentItem::GetLabel() const
{
    return m_label;
}

void MediaContentReviewSegmentItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string MediaContentReviewSegmentItem::GetSuggestion() const
{
    return m_suggestion;
}

void MediaContentReviewSegmentItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string MediaContentReviewSegmentItem::GetUrl() const
{
    return m_url;
}

void MediaContentReviewSegmentItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t MediaContentReviewSegmentItem::GetPicUrlExpireTimeStamp() const
{
    return m_picUrlExpireTimeStamp;
}

void MediaContentReviewSegmentItem::SetPicUrlExpireTimeStamp(const int64_t& _picUrlExpireTimeStamp)
{
    m_picUrlExpireTimeStamp = _picUrlExpireTimeStamp;
    m_picUrlExpireTimeStampHasBeenSet = true;
}

bool MediaContentReviewSegmentItem::PicUrlExpireTimeStampHasBeenSet() const
{
    return m_picUrlExpireTimeStampHasBeenSet;
}


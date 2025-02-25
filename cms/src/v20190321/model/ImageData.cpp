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

#include <tencentcloud/cms/v20190321/model/ImageData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

ImageData::ImageData() :
    m_evilFlagHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_hotDetectHasBeenSet(false),
    m_illegalDetectHasBeenSet(false),
    m_oCRDetectHasBeenSet(false),
    m_polityDetectHasBeenSet(false),
    m_pornDetectHasBeenSet(false),
    m_similarHasBeenSet(false),
    m_terrorDetectHasBeenSet(false)
{
}

CoreInternalOutcome ImageData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageData.EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageData.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("HotDetect") && !value["HotDetect"].IsNull())
    {
        if (!value["HotDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.HotDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hotDetect.Deserialize(value["HotDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hotDetectHasBeenSet = true;
    }

    if (value.HasMember("IllegalDetect") && !value["IllegalDetect"].IsNull())
    {
        if (!value["IllegalDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.IllegalDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_illegalDetect.Deserialize(value["IllegalDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_illegalDetectHasBeenSet = true;
    }

    if (value.HasMember("OCRDetect") && !value["OCRDetect"].IsNull())
    {
        if (!value["OCRDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.OCRDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oCRDetect.Deserialize(value["OCRDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oCRDetectHasBeenSet = true;
    }

    if (value.HasMember("PolityDetect") && !value["PolityDetect"].IsNull())
    {
        if (!value["PolityDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.PolityDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polityDetect.Deserialize(value["PolityDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polityDetectHasBeenSet = true;
    }

    if (value.HasMember("PornDetect") && !value["PornDetect"].IsNull())
    {
        if (!value["PornDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.PornDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornDetect.Deserialize(value["PornDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornDetectHasBeenSet = true;
    }

    if (value.HasMember("Similar") && !value["Similar"].IsNull())
    {
        if (!value["Similar"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.Similar` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_similar.Deserialize(value["Similar"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_similarHasBeenSet = true;
    }

    if (value.HasMember("TerrorDetect") && !value["TerrorDetect"].IsNull())
    {
        if (!value["TerrorDetect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageData.TerrorDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorDetect.Deserialize(value["TerrorDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorDetectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_hotDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HotDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_hotDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_illegalDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IllegalDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_illegalDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oCRDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OCRDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_oCRDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_polityDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolityDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_polityDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PornDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pornDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_similarHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Similar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_similar.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorDetectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerrorDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_terrorDetect.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ImageData::GetEvilFlag() const
{
    return m_evilFlag;
}

void ImageData::SetEvilFlag(const int64_t& _evilFlag)
{
    m_evilFlag = _evilFlag;
    m_evilFlagHasBeenSet = true;
}

bool ImageData::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

int64_t ImageData::GetEvilType() const
{
    return m_evilType;
}

void ImageData::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool ImageData::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

ImageHotDetect ImageData::GetHotDetect() const
{
    return m_hotDetect;
}

void ImageData::SetHotDetect(const ImageHotDetect& _hotDetect)
{
    m_hotDetect = _hotDetect;
    m_hotDetectHasBeenSet = true;
}

bool ImageData::HotDetectHasBeenSet() const
{
    return m_hotDetectHasBeenSet;
}

ImageIllegalDetect ImageData::GetIllegalDetect() const
{
    return m_illegalDetect;
}

void ImageData::SetIllegalDetect(const ImageIllegalDetect& _illegalDetect)
{
    m_illegalDetect = _illegalDetect;
    m_illegalDetectHasBeenSet = true;
}

bool ImageData::IllegalDetectHasBeenSet() const
{
    return m_illegalDetectHasBeenSet;
}

OCRDetect ImageData::GetOCRDetect() const
{
    return m_oCRDetect;
}

void ImageData::SetOCRDetect(const OCRDetect& _oCRDetect)
{
    m_oCRDetect = _oCRDetect;
    m_oCRDetectHasBeenSet = true;
}

bool ImageData::OCRDetectHasBeenSet() const
{
    return m_oCRDetectHasBeenSet;
}

ImagePolityDetect ImageData::GetPolityDetect() const
{
    return m_polityDetect;
}

void ImageData::SetPolityDetect(const ImagePolityDetect& _polityDetect)
{
    m_polityDetect = _polityDetect;
    m_polityDetectHasBeenSet = true;
}

bool ImageData::PolityDetectHasBeenSet() const
{
    return m_polityDetectHasBeenSet;
}

ImagePornDetect ImageData::GetPornDetect() const
{
    return m_pornDetect;
}

void ImageData::SetPornDetect(const ImagePornDetect& _pornDetect)
{
    m_pornDetect = _pornDetect;
    m_pornDetectHasBeenSet = true;
}

bool ImageData::PornDetectHasBeenSet() const
{
    return m_pornDetectHasBeenSet;
}

Similar ImageData::GetSimilar() const
{
    return m_similar;
}

void ImageData::SetSimilar(const Similar& _similar)
{
    m_similar = _similar;
    m_similarHasBeenSet = true;
}

bool ImageData::SimilarHasBeenSet() const
{
    return m_similarHasBeenSet;
}

ImageTerrorDetect ImageData::GetTerrorDetect() const
{
    return m_terrorDetect;
}

void ImageData::SetTerrorDetect(const ImageTerrorDetect& _terrorDetect)
{
    m_terrorDetect = _terrorDetect;
    m_terrorDetectHasBeenSet = true;
}

bool ImageData::TerrorDetectHasBeenSet() const
{
    return m_terrorDetectHasBeenSet;
}


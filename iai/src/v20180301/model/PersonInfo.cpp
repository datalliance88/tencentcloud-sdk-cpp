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

#include <tencentcloud/iai/v20180301/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

PersonInfo::PersonInfo() :
    m_personNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_personExDescriptionsHasBeenSet(false),
    m_faceIdsHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonInfo.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("PersonExDescriptions") && !value["PersonExDescriptions"].IsNull())
    {
        if (!value["PersonExDescriptions"].IsArray())
            return CoreInternalOutcome(Error("response `PersonInfo.PersonExDescriptions` is not array type"));

        const Value &tmpValue = value["PersonExDescriptions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_personExDescriptions.push_back((*itr).GetString());
        }
        m_personExDescriptionsHasBeenSet = true;
    }

    if (value.HasMember("FaceIds") && !value["FaceIds"].IsNull())
    {
        if (!value["FaceIds"].IsArray())
            return CoreInternalOutcome(Error("response `PersonInfo.FaceIds` is not array type"));

        const Value &tmpValue = value["FaceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceIds.push_back((*itr).GetString());
        }
        m_faceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_personNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_personExDescriptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonExDescriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_personExDescriptions.begin(); itr != m_personExDescriptions.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_faceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_faceIds.begin(); itr != m_faceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PersonInfo::GetPersonName() const
{
    return m_personName;
}

void PersonInfo::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool PersonInfo::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string PersonInfo::GetPersonId() const
{
    return m_personId;
}

void PersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

int64_t PersonInfo::GetGender() const
{
    return m_gender;
}

void PersonInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PersonInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

vector<string> PersonInfo::GetPersonExDescriptions() const
{
    return m_personExDescriptions;
}

void PersonInfo::SetPersonExDescriptions(const vector<string>& _personExDescriptions)
{
    m_personExDescriptions = _personExDescriptions;
    m_personExDescriptionsHasBeenSet = true;
}

bool PersonInfo::PersonExDescriptionsHasBeenSet() const
{
    return m_personExDescriptionsHasBeenSet;
}

vector<string> PersonInfo::GetFaceIds() const
{
    return m_faceIds;
}

void PersonInfo::SetFaceIds(const vector<string>& _faceIds)
{
    m_faceIds = _faceIds;
    m_faceIdsHasBeenSet = true;
}

bool PersonInfo::FaceIdsHasBeenSet() const
{
    return m_faceIdsHasBeenSet;
}


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

#include <tencentcloud/vpc/v20170312/model/CreateCcnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateCcnRequest::CreateCcnRequest() :
    m_ccnNameHasBeenSet(false),
    m_ccnDescriptionHasBeenSet(false),
    m_qosLevelHasBeenSet(false)
{
}

string CreateCcnRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCcnRequest::GetCcnName() const
{
    return m_ccnName;
}

void CreateCcnRequest::SetCcnName(const string& _ccnName)
{
    m_ccnName = _ccnName;
    m_ccnNameHasBeenSet = true;
}

bool CreateCcnRequest::CcnNameHasBeenSet() const
{
    return m_ccnNameHasBeenSet;
}

string CreateCcnRequest::GetCcnDescription() const
{
    return m_ccnDescription;
}

void CreateCcnRequest::SetCcnDescription(const string& _ccnDescription)
{
    m_ccnDescription = _ccnDescription;
    m_ccnDescriptionHasBeenSet = true;
}

bool CreateCcnRequest::CcnDescriptionHasBeenSet() const
{
    return m_ccnDescriptionHasBeenSet;
}

string CreateCcnRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void CreateCcnRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CreateCcnRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}



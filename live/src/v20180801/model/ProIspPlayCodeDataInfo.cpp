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

#include <tencentcloud/live/v20180801/model/ProIspPlayCodeDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

ProIspPlayCodeDataInfo::ProIspPlayCodeDataInfo() :
    m_provinceNameHasBeenSet(false),
    m_ispNameHasBeenSet(false),
    m_code4xxHasBeenSet(false),
    m_code5xxHasBeenSet(false)
{
}

CoreInternalOutcome ProIspPlayCodeDataInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProIspPlayCodeDataInfo.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProIspPlayCodeDataInfo.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("Code4xx") && !value["Code4xx"].IsNull())
    {
        if (!value["Code4xx"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProIspPlayCodeDataInfo.Code4xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code4xx = value["Code4xx"].GetUint64();
        m_code4xxHasBeenSet = true;
    }

    if (value.HasMember("Code5xx") && !value["Code5xx"].IsNull())
    {
        if (!value["Code5xx"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProIspPlayCodeDataInfo.Code5xx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code5xx = value["Code5xx"].GetUint64();
        m_code5xxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProIspPlayCodeDataInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_provinceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_code4xxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code4xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code4xx, allocator);
    }

    if (m_code5xxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code5xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code5xx, allocator);
    }

}


string ProIspPlayCodeDataInfo::GetProvinceName() const
{
    return m_provinceName;
}

void ProIspPlayCodeDataInfo::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool ProIspPlayCodeDataInfo::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

string ProIspPlayCodeDataInfo::GetIspName() const
{
    return m_ispName;
}

void ProIspPlayCodeDataInfo::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool ProIspPlayCodeDataInfo::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

uint64_t ProIspPlayCodeDataInfo::GetCode4xx() const
{
    return m_code4xx;
}

void ProIspPlayCodeDataInfo::SetCode4xx(const uint64_t& _code4xx)
{
    m_code4xx = _code4xx;
    m_code4xxHasBeenSet = true;
}

bool ProIspPlayCodeDataInfo::Code4xxHasBeenSet() const
{
    return m_code4xxHasBeenSet;
}

uint64_t ProIspPlayCodeDataInfo::GetCode5xx() const
{
    return m_code5xx;
}

void ProIspPlayCodeDataInfo::SetCode5xx(const uint64_t& _code5xx)
{
    m_code5xx = _code5xx;
    m_code5xxHasBeenSet = true;
}

bool ProIspPlayCodeDataInfo::Code5xxHasBeenSet() const
{
    return m_code5xxHasBeenSet;
}


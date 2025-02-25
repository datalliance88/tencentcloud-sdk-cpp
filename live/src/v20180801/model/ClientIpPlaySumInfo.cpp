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

#include <tencentcloud/live/v20180801/model/ClientIpPlaySumInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

ClientIpPlaySumInfo::ClientIpPlaySumInfo() :
    m_clientIpHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_totalFluxHasBeenSet(false),
    m_totalRequestHasBeenSet(false),
    m_totalFailedRequestHasBeenSet(false)
{
}

CoreInternalOutcome ClientIpPlaySumInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientIpPlaySumInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientIpPlaySumInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("TotalFlux") && !value["TotalFlux"].IsNull())
    {
        if (!value["TotalFlux"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ClientIpPlaySumInfo.TotalFlux` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = value["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }

    if (value.HasMember("TotalRequest") && !value["TotalRequest"].IsNull())
    {
        if (!value["TotalRequest"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClientIpPlaySumInfo.TotalRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequest = value["TotalRequest"].GetUint64();
        m_totalRequestHasBeenSet = true;
    }

    if (value.HasMember("TotalFailedRequest") && !value["TotalFailedRequest"].IsNull())
    {
        if (!value["TotalFailedRequest"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClientIpPlaySumInfo.TotalFailedRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFailedRequest = value["TotalFailedRequest"].GetUint64();
        m_totalFailedRequestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientIpPlaySumInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFluxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFlux, allocator);
    }

    if (m_totalRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequest, allocator);
    }

    if (m_totalFailedRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalFailedRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFailedRequest, allocator);
    }

}


string ClientIpPlaySumInfo::GetClientIp() const
{
    return m_clientIp;
}

void ClientIpPlaySumInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool ClientIpPlaySumInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string ClientIpPlaySumInfo::GetProvince() const
{
    return m_province;
}

void ClientIpPlaySumInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ClientIpPlaySumInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

double ClientIpPlaySumInfo::GetTotalFlux() const
{
    return m_totalFlux;
}

void ClientIpPlaySumInfo::SetTotalFlux(const double& _totalFlux)
{
    m_totalFlux = _totalFlux;
    m_totalFluxHasBeenSet = true;
}

bool ClientIpPlaySumInfo::TotalFluxHasBeenSet() const
{
    return m_totalFluxHasBeenSet;
}

uint64_t ClientIpPlaySumInfo::GetTotalRequest() const
{
    return m_totalRequest;
}

void ClientIpPlaySumInfo::SetTotalRequest(const uint64_t& _totalRequest)
{
    m_totalRequest = _totalRequest;
    m_totalRequestHasBeenSet = true;
}

bool ClientIpPlaySumInfo::TotalRequestHasBeenSet() const
{
    return m_totalRequestHasBeenSet;
}

uint64_t ClientIpPlaySumInfo::GetTotalFailedRequest() const
{
    return m_totalFailedRequest;
}

void ClientIpPlaySumInfo::SetTotalFailedRequest(const uint64_t& _totalFailedRequest)
{
    m_totalFailedRequest = _totalFailedRequest;
    m_totalFailedRequestHasBeenSet = true;
}

bool ClientIpPlaySumInfo::TotalFailedRequestHasBeenSet() const
{
    return m_totalFailedRequestHasBeenSet;
}


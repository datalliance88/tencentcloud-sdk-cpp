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

#include <tencentcloud/iai/v20180301/model/SearchFacesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

SearchFacesResponse::SearchFacesResponse() :
    m_resultsHasBeenSet(false),
    m_faceNumHasBeenSet(false)
{
}

CoreInternalOutcome SearchFacesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Results") && !rsp["Results"].IsNull())
    {
        if (!rsp["Results"].IsArray())
            return CoreInternalOutcome(Error("response `Results` is not array type"));

        const Value &tmpValue = rsp["Results"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Result item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }

    if (rsp.HasMember("FaceNum") && !rsp["FaceNum"].IsNull())
    {
        if (!rsp["FaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceNum = rsp["FaceNum"].GetUint64();
        m_faceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<Result> SearchFacesResponse::GetResults() const
{
    return m_results;
}

bool SearchFacesResponse::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

uint64_t SearchFacesResponse::GetFaceNum() const
{
    return m_faceNum;
}

bool SearchFacesResponse::FaceNumHasBeenSet() const
{
    return m_faceNumHasBeenSet;
}



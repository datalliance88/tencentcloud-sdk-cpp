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

#include <tencentcloud/tci/v20190318/model/CheckAttendanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

CheckAttendanceResponse::CheckAttendanceResponse() :
    m_jobIdHasBeenSet(false),
    m_notRegisteredSetHasBeenSet(false)
{
}

CoreInternalOutcome CheckAttendanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = rsp["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("NotRegisteredSet") && !rsp["NotRegisteredSet"].IsNull())
    {
        if (!rsp["NotRegisteredSet"].IsArray())
            return CoreInternalOutcome(Error("response `NotRegisteredSet` is not array type"));

        const Value &tmpValue = rsp["NotRegisteredSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notRegisteredSet.push_back((*itr).GetString());
        }
        m_notRegisteredSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t CheckAttendanceResponse::GetJobId() const
{
    return m_jobId;
}

bool CheckAttendanceResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<string> CheckAttendanceResponse::GetNotRegisteredSet() const
{
    return m_notRegisteredSet;
}

bool CheckAttendanceResponse::NotRegisteredSetHasBeenSet() const
{
    return m_notRegisteredSetHasBeenSet;
}



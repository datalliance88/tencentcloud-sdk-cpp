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

#include <tencentcloud/gaap/v20180529/model/ModifyDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ModifyDomainRequest::ModifyDomainRequest() :
    m_listenerIdHasBeenSet(false),
    m_oldDomainHasBeenSet(false),
    m_newDomainHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false)
{
}

string ModifyDomainRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oldDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_newDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCertificateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientCertificateId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyDomainRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyDomainRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyDomainRequest::GetOldDomain() const
{
    return m_oldDomain;
}

void ModifyDomainRequest::SetOldDomain(const string& _oldDomain)
{
    m_oldDomain = _oldDomain;
    m_oldDomainHasBeenSet = true;
}

bool ModifyDomainRequest::OldDomainHasBeenSet() const
{
    return m_oldDomainHasBeenSet;
}

string ModifyDomainRequest::GetNewDomain() const
{
    return m_newDomain;
}

void ModifyDomainRequest::SetNewDomain(const string& _newDomain)
{
    m_newDomain = _newDomain;
    m_newDomainHasBeenSet = true;
}

bool ModifyDomainRequest::NewDomainHasBeenSet() const
{
    return m_newDomainHasBeenSet;
}

string ModifyDomainRequest::GetCertificateId() const
{
    return m_certificateId;
}

void ModifyDomainRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool ModifyDomainRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string ModifyDomainRequest::GetClientCertificateId() const
{
    return m_clientCertificateId;
}

void ModifyDomainRequest::SetClientCertificateId(const string& _clientCertificateId)
{
    m_clientCertificateId = _clientCertificateId;
    m_clientCertificateIdHasBeenSet = true;
}

bool ModifyDomainRequest::ClientCertificateIdHasBeenSet() const
{
    return m_clientCertificateIdHasBeenSet;
}



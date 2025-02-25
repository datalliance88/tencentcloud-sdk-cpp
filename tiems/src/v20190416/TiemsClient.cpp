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

#include <tencentcloud/tiems/v20190416/TiemsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiems::V20190416;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-16";
    const string ENDPOINT = "tiems.tencentcloudapi.com";
}

TiemsClient::TiemsClient(const Credential &credential, const string &region) :
    TiemsClient(credential, region, ClientProfile())
{
}

TiemsClient::TiemsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiemsClient::CreateServiceOutcome TiemsClient::CreateService(const CreateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceResponse rsp = CreateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceOutcome(rsp);
        else
            return CreateServiceOutcome(o.GetError());
    }
    else
    {
        return CreateServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateServiceOutcomeCallable TiemsClient::CreateServiceCallable(const CreateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::CreateServiceConfigOutcome TiemsClient::CreateServiceConfig(const CreateServiceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceConfigResponse rsp = CreateServiceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceConfigOutcome(rsp);
        else
            return CreateServiceConfigOutcome(o.GetError());
    }
    else
    {
        return CreateServiceConfigOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateServiceConfigAsync(const CreateServiceConfigRequest& request, const CreateServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateServiceConfigOutcomeCallable TiemsClient::CreateServiceConfigCallable(const CreateServiceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteServiceOutcome TiemsClient::DeleteService(const DeleteServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceResponse rsp = DeleteServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceOutcome(rsp);
        else
            return DeleteServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteServiceOutcomeCallable TiemsClient::DeleteServiceCallable(const DeleteServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteServiceConfigOutcome TiemsClient::DeleteServiceConfig(const DeleteServiceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceConfigResponse rsp = DeleteServiceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceConfigOutcome(rsp);
        else
            return DeleteServiceConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceConfigOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteServiceConfigAsync(const DeleteServiceConfigRequest& request, const DeleteServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteServiceConfigOutcomeCallable TiemsClient::DeleteServiceConfigCallable(const DeleteServiceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeRuntimesOutcome TiemsClient::DescribeRuntimes(const DescribeRuntimesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuntimes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuntimesResponse rsp = DescribeRuntimesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuntimesOutcome(rsp);
        else
            return DescribeRuntimesOutcome(o.GetError());
    }
    else
    {
        return DescribeRuntimesOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeRuntimesAsync(const DescribeRuntimesRequest& request, const DescribeRuntimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuntimes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeRuntimesOutcomeCallable TiemsClient::DescribeRuntimesCallable(const DescribeRuntimesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuntimesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuntimes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeServiceConfigsOutcome TiemsClient::DescribeServiceConfigs(const DescribeServiceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceConfigsResponse rsp = DescribeServiceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceConfigsOutcome(rsp);
        else
            return DescribeServiceConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceConfigsOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeServiceConfigsAsync(const DescribeServiceConfigsRequest& request, const DescribeServiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeServiceConfigsOutcomeCallable TiemsClient::DescribeServiceConfigsCallable(const DescribeServiceConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeServicesOutcome TiemsClient::DescribeServices(const DescribeServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServicesResponse rsp = DescribeServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServicesOutcome(rsp);
        else
            return DescribeServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeServicesOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeServicesOutcomeCallable TiemsClient::DescribeServicesCallable(const DescribeServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::UpdateServiceOutcome TiemsClient::UpdateService(const UpdateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceResponse rsp = UpdateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceOutcome(rsp);
        else
            return UpdateServiceOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::UpdateServiceOutcomeCallable TiemsClient::UpdateServiceCallable(const UpdateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
        [this, request]()
        {
            return this->UpdateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


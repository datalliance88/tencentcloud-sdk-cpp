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

#include <tencentcloud/ocr/v20181119/OcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ocr::V20181119;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-19";
    const string ENDPOINT = "ocr.tencentcloudapi.com";
}

OcrClient::OcrClient(const Credential &credential, const string &region) :
    OcrClient(credential, region, ClientProfile())
{
}

OcrClient::OcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OcrClient::ArithmeticOCROutcome OcrClient::ArithmeticOCR(const ArithmeticOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ArithmeticOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArithmeticOCRResponse rsp = ArithmeticOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArithmeticOCROutcome(rsp);
        else
            return ArithmeticOCROutcome(o.GetError());
    }
    else
    {
        return ArithmeticOCROutcome(outcome.GetError());
    }
}

void OcrClient::ArithmeticOCRAsync(const ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArithmeticOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ArithmeticOCROutcomeCallable OcrClient::ArithmeticOCRCallable(const ArithmeticOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArithmeticOCROutcome()>>(
        [this, request]()
        {
            return this->ArithmeticOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::BankCardOCROutcome OcrClient::BankCardOCR(const BankCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BankCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCardOCRResponse rsp = BankCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCardOCROutcome(rsp);
        else
            return BankCardOCROutcome(o.GetError());
    }
    else
    {
        return BankCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::BankCardOCRAsync(const BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BankCardOCROutcomeCallable OcrClient::BankCardOCRCallable(const BankCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCardOCROutcome()>>(
        [this, request]()
        {
            return this->BankCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::BizLicenseOCROutcome OcrClient::BizLicenseOCR(const BizLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BizLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BizLicenseOCRResponse rsp = BizLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BizLicenseOCROutcome(rsp);
        else
            return BizLicenseOCROutcome(o.GetError());
    }
    else
    {
        return BizLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::BizLicenseOCRAsync(const BizLicenseOCRRequest& request, const BizLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BizLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BizLicenseOCROutcomeCallable OcrClient::BizLicenseOCRCallable(const BizLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BizLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->BizLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::BusInvoiceOCROutcome OcrClient::BusInvoiceOCR(const BusInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BusInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BusInvoiceOCRResponse rsp = BusInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BusInvoiceOCROutcome(rsp);
        else
            return BusInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return BusInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::BusInvoiceOCRAsync(const BusInvoiceOCRRequest& request, const BusInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BusInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BusInvoiceOCROutcomeCallable OcrClient::BusInvoiceOCRCallable(const BusInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BusInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->BusInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::BusinessCardOCROutcome OcrClient::BusinessCardOCR(const BusinessCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BusinessCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BusinessCardOCRResponse rsp = BusinessCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BusinessCardOCROutcome(rsp);
        else
            return BusinessCardOCROutcome(o.GetError());
    }
    else
    {
        return BusinessCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::BusinessCardOCRAsync(const BusinessCardOCRRequest& request, const BusinessCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BusinessCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BusinessCardOCROutcomeCallable OcrClient::BusinessCardOCRCallable(const BusinessCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BusinessCardOCROutcome()>>(
        [this, request]()
        {
            return this->BusinessCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::CarInvoiceOCROutcome OcrClient::CarInvoiceOCR(const CarInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "CarInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CarInvoiceOCRResponse rsp = CarInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CarInvoiceOCROutcome(rsp);
        else
            return CarInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return CarInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::CarInvoiceOCRAsync(const CarInvoiceOCRRequest& request, const CarInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CarInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::CarInvoiceOCROutcomeCallable OcrClient::CarInvoiceOCRCallable(const CarInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CarInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->CarInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::DriverLicenseOCROutcome OcrClient::DriverLicenseOCR(const DriverLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "DriverLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DriverLicenseOCRResponse rsp = DriverLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DriverLicenseOCROutcome(rsp);
        else
            return DriverLicenseOCROutcome(o.GetError());
    }
    else
    {
        return DriverLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::DriverLicenseOCRAsync(const DriverLicenseOCRRequest& request, const DriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DriverLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::DriverLicenseOCROutcomeCallable OcrClient::DriverLicenseOCRCallable(const DriverLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DriverLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->DriverLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::DutyPaidProofOCROutcome OcrClient::DutyPaidProofOCR(const DutyPaidProofOCRRequest &request)
{
    auto outcome = MakeRequest(request, "DutyPaidProofOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DutyPaidProofOCRResponse rsp = DutyPaidProofOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DutyPaidProofOCROutcome(rsp);
        else
            return DutyPaidProofOCROutcome(o.GetError());
    }
    else
    {
        return DutyPaidProofOCROutcome(outcome.GetError());
    }
}

void OcrClient::DutyPaidProofOCRAsync(const DutyPaidProofOCRRequest& request, const DutyPaidProofOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DutyPaidProofOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::DutyPaidProofOCROutcomeCallable OcrClient::DutyPaidProofOCRCallable(const DutyPaidProofOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DutyPaidProofOCROutcome()>>(
        [this, request]()
        {
            return this->DutyPaidProofOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::EnglishOCROutcome OcrClient::EnglishOCR(const EnglishOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EnglishOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnglishOCRResponse rsp = EnglishOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnglishOCROutcome(rsp);
        else
            return EnglishOCROutcome(o.GetError());
    }
    else
    {
        return EnglishOCROutcome(outcome.GetError());
    }
}

void OcrClient::EnglishOCRAsync(const EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnglishOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EnglishOCROutcomeCallable OcrClient::EnglishOCRCallable(const EnglishOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnglishOCROutcome()>>(
        [this, request]()
        {
            return this->EnglishOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::FlightInvoiceOCROutcome OcrClient::FlightInvoiceOCR(const FlightInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "FlightInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlightInvoiceOCRResponse rsp = FlightInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlightInvoiceOCROutcome(rsp);
        else
            return FlightInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return FlightInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::FlightInvoiceOCRAsync(const FlightInvoiceOCRRequest& request, const FlightInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlightInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::FlightInvoiceOCROutcomeCallable OcrClient::FlightInvoiceOCRCallable(const FlightInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlightInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->FlightInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralAccurateOCROutcome OcrClient::GeneralAccurateOCR(const GeneralAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralAccurateOCRResponse rsp = GeneralAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralAccurateOCROutcome(rsp);
        else
            return GeneralAccurateOCROutcome(o.GetError());
    }
    else
    {
        return GeneralAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralAccurateOCRAsync(const GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralAccurateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralAccurateOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralAccurateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralBasicOCROutcome OcrClient::GeneralBasicOCR(const GeneralBasicOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralBasicOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralBasicOCRResponse rsp = GeneralBasicOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralBasicOCROutcome(rsp);
        else
            return GeneralBasicOCROutcome(o.GetError());
    }
    else
    {
        return GeneralBasicOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralBasicOCRAsync(const GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralBasicOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralBasicOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralBasicOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralEfficientOCROutcome OcrClient::GeneralEfficientOCR(const GeneralEfficientOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralEfficientOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralEfficientOCRResponse rsp = GeneralEfficientOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralEfficientOCROutcome(rsp);
        else
            return GeneralEfficientOCROutcome(o.GetError());
    }
    else
    {
        return GeneralEfficientOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralEfficientOCRAsync(const GeneralEfficientOCRRequest& request, const GeneralEfficientOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralEfficientOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralEfficientOCROutcomeCallable OcrClient::GeneralEfficientOCRCallable(const GeneralEfficientOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralEfficientOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralEfficientOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralFastOCROutcome OcrClient::GeneralFastOCR(const GeneralFastOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralFastOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralFastOCRResponse rsp = GeneralFastOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralFastOCROutcome(rsp);
        else
            return GeneralFastOCROutcome(o.GetError());
    }
    else
    {
        return GeneralFastOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralFastOCRAsync(const GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralFastOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralFastOCROutcomeCallable OcrClient::GeneralFastOCRCallable(const GeneralFastOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralFastOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralFastOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralHandwritingOCROutcome OcrClient::GeneralHandwritingOCR(const GeneralHandwritingOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralHandwritingOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralHandwritingOCRResponse rsp = GeneralHandwritingOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralHandwritingOCROutcome(rsp);
        else
            return GeneralHandwritingOCROutcome(o.GetError());
    }
    else
    {
        return GeneralHandwritingOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralHandwritingOCRAsync(const GeneralHandwritingOCRRequest& request, const GeneralHandwritingOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralHandwritingOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralHandwritingOCROutcomeCallable OcrClient::GeneralHandwritingOCRCallable(const GeneralHandwritingOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralHandwritingOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralHandwritingOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::IDCardOCROutcome OcrClient::IDCardOCR(const IDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "IDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IDCardOCRResponse rsp = IDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IDCardOCROutcome(rsp);
        else
            return IDCardOCROutcome(o.GetError());
    }
    else
    {
        return IDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::IDCardOCRAsync(const IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IDCardOCROutcome()>>(
        [this, request]()
        {
            return this->IDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::InvoiceGeneralOCROutcome OcrClient::InvoiceGeneralOCR(const InvoiceGeneralOCRRequest &request)
{
    auto outcome = MakeRequest(request, "InvoiceGeneralOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvoiceGeneralOCRResponse rsp = InvoiceGeneralOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvoiceGeneralOCROutcome(rsp);
        else
            return InvoiceGeneralOCROutcome(o.GetError());
    }
    else
    {
        return InvoiceGeneralOCROutcome(outcome.GetError());
    }
}

void OcrClient::InvoiceGeneralOCRAsync(const InvoiceGeneralOCRRequest& request, const InvoiceGeneralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvoiceGeneralOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::InvoiceGeneralOCROutcomeCallable OcrClient::InvoiceGeneralOCRCallable(const InvoiceGeneralOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvoiceGeneralOCROutcome()>>(
        [this, request]()
        {
            return this->InvoiceGeneralOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::LicensePlateOCROutcome OcrClient::LicensePlateOCR(const LicensePlateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "LicensePlateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LicensePlateOCRResponse rsp = LicensePlateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LicensePlateOCROutcome(rsp);
        else
            return LicensePlateOCROutcome(o.GetError());
    }
    else
    {
        return LicensePlateOCROutcome(outcome.GetError());
    }
}

void OcrClient::LicensePlateOCRAsync(const LicensePlateOCRRequest& request, const LicensePlateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LicensePlateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::LicensePlateOCROutcomeCallable OcrClient::LicensePlateOCRCallable(const LicensePlateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LicensePlateOCROutcome()>>(
        [this, request]()
        {
            return this->LicensePlateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MLIDCardOCROutcome OcrClient::MLIDCardOCR(const MLIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDCardOCRResponse rsp = MLIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDCardOCROutcome(rsp);
        else
            return MLIDCardOCROutcome(o.GetError());
    }
    else
    {
        return MLIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDCardOCRAsync(const MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDCardOCROutcomeCallable OcrClient::MLIDCardOCRCallable(const MLIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MLIDPassportOCROutcome OcrClient::MLIDPassportOCR(const MLIDPassportOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDPassportOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDPassportOCRResponse rsp = MLIDPassportOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDPassportOCROutcome(rsp);
        else
            return MLIDPassportOCROutcome(o.GetError());
    }
    else
    {
        return MLIDPassportOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDPassportOCRAsync(const MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDPassportOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDPassportOCROutcomeCallable OcrClient::MLIDPassportOCRCallable(const MLIDPassportOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDPassportOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDPassportOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MixedInvoiceDetectOutcome OcrClient::MixedInvoiceDetect(const MixedInvoiceDetectRequest &request)
{
    auto outcome = MakeRequest(request, "MixedInvoiceDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MixedInvoiceDetectResponse rsp = MixedInvoiceDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MixedInvoiceDetectOutcome(rsp);
        else
            return MixedInvoiceDetectOutcome(o.GetError());
    }
    else
    {
        return MixedInvoiceDetectOutcome(outcome.GetError());
    }
}

void OcrClient::MixedInvoiceDetectAsync(const MixedInvoiceDetectRequest& request, const MixedInvoiceDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MixedInvoiceDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MixedInvoiceDetectOutcomeCallable OcrClient::MixedInvoiceDetectCallable(const MixedInvoiceDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MixedInvoiceDetectOutcome()>>(
        [this, request]()
        {
            return this->MixedInvoiceDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MixedInvoiceOCROutcome OcrClient::MixedInvoiceOCR(const MixedInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MixedInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MixedInvoiceOCRResponse rsp = MixedInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MixedInvoiceOCROutcome(rsp);
        else
            return MixedInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return MixedInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::MixedInvoiceOCRAsync(const MixedInvoiceOCRRequest& request, const MixedInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MixedInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MixedInvoiceOCROutcomeCallable OcrClient::MixedInvoiceOCRCallable(const MixedInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MixedInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->MixedInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::PassportOCROutcome OcrClient::PassportOCR(const PassportOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PassportOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PassportOCRResponse rsp = PassportOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PassportOCROutcome(rsp);
        else
            return PassportOCROutcome(o.GetError());
    }
    else
    {
        return PassportOCROutcome(outcome.GetError());
    }
}

void OcrClient::PassportOCRAsync(const PassportOCRRequest& request, const PassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PassportOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PassportOCROutcomeCallable OcrClient::PassportOCRCallable(const PassportOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PassportOCROutcome()>>(
        [this, request]()
        {
            return this->PassportOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::PermitOCROutcome OcrClient::PermitOCR(const PermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PermitOCRResponse rsp = PermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PermitOCROutcome(rsp);
        else
            return PermitOCROutcome(o.GetError());
    }
    else
    {
        return PermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::PermitOCRAsync(const PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PermitOCROutcomeCallable OcrClient::PermitOCRCallable(const PermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PermitOCROutcome()>>(
        [this, request]()
        {
            return this->PermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::QuotaInvoiceOCROutcome OcrClient::QuotaInvoiceOCR(const QuotaInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QuotaInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuotaInvoiceOCRResponse rsp = QuotaInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuotaInvoiceOCROutcome(rsp);
        else
            return QuotaInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return QuotaInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::QuotaInvoiceOCRAsync(const QuotaInvoiceOCRRequest& request, const QuotaInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuotaInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::QuotaInvoiceOCROutcomeCallable OcrClient::QuotaInvoiceOCRCallable(const QuotaInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuotaInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->QuotaInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::ShipInvoiceOCROutcome OcrClient::ShipInvoiceOCR(const ShipInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ShipInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShipInvoiceOCRResponse rsp = ShipInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShipInvoiceOCROutcome(rsp);
        else
            return ShipInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return ShipInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::ShipInvoiceOCRAsync(const ShipInvoiceOCRRequest& request, const ShipInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ShipInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ShipInvoiceOCROutcomeCallable OcrClient::ShipInvoiceOCRCallable(const ShipInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ShipInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->ShipInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TableOCROutcome OcrClient::TableOCR(const TableOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TableOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TableOCRResponse rsp = TableOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TableOCROutcome(rsp);
        else
            return TableOCROutcome(o.GetError());
    }
    else
    {
        return TableOCROutcome(outcome.GetError());
    }
}

void OcrClient::TableOCRAsync(const TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TableOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TableOCROutcome()>>(
        [this, request]()
        {
            return this->TableOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TaxiInvoiceOCROutcome OcrClient::TaxiInvoiceOCR(const TaxiInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TaxiInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TaxiInvoiceOCRResponse rsp = TaxiInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TaxiInvoiceOCROutcome(rsp);
        else
            return TaxiInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return TaxiInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::TaxiInvoiceOCRAsync(const TaxiInvoiceOCRRequest& request, const TaxiInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TaxiInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TaxiInvoiceOCROutcomeCallable OcrClient::TaxiInvoiceOCRCallable(const TaxiInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TaxiInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->TaxiInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TextDetectOutcome OcrClient::TextDetect(const TextDetectRequest &request)
{
    auto outcome = MakeRequest(request, "TextDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextDetectResponse rsp = TextDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextDetectOutcome(rsp);
        else
            return TextDetectOutcome(o.GetError());
    }
    else
    {
        return TextDetectOutcome(outcome.GetError());
    }
}

void OcrClient::TextDetectAsync(const TextDetectRequest& request, const TextDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TextDetectOutcomeCallable OcrClient::TextDetectCallable(const TextDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextDetectOutcome()>>(
        [this, request]()
        {
            return this->TextDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TollInvoiceOCROutcome OcrClient::TollInvoiceOCR(const TollInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TollInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TollInvoiceOCRResponse rsp = TollInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TollInvoiceOCROutcome(rsp);
        else
            return TollInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return TollInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::TollInvoiceOCRAsync(const TollInvoiceOCRRequest& request, const TollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TollInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TollInvoiceOCROutcomeCallable OcrClient::TollInvoiceOCRCallable(const TollInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TollInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->TollInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TrainTicketOCROutcome OcrClient::TrainTicketOCR(const TrainTicketOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TrainTicketOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrainTicketOCRResponse rsp = TrainTicketOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrainTicketOCROutcome(rsp);
        else
            return TrainTicketOCROutcome(o.GetError());
    }
    else
    {
        return TrainTicketOCROutcome(outcome.GetError());
    }
}

void OcrClient::TrainTicketOCRAsync(const TrainTicketOCRRequest& request, const TrainTicketOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrainTicketOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TrainTicketOCROutcomeCallable OcrClient::TrainTicketOCRCallable(const TrainTicketOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrainTicketOCROutcome()>>(
        [this, request]()
        {
            return this->TrainTicketOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VatInvoiceOCROutcome OcrClient::VatInvoiceOCR(const VatInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VatInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatInvoiceOCRResponse rsp = VatInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatInvoiceOCROutcome(rsp);
        else
            return VatInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return VatInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::VatInvoiceOCRAsync(const VatInvoiceOCRRequest& request, const VatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VatInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VatInvoiceOCROutcomeCallable OcrClient::VatInvoiceOCRCallable(const VatInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VatInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->VatInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VatRollInvoiceOCROutcome OcrClient::VatRollInvoiceOCR(const VatRollInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VatRollInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatRollInvoiceOCRResponse rsp = VatRollInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatRollInvoiceOCROutcome(rsp);
        else
            return VatRollInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return VatRollInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::VatRollInvoiceOCRAsync(const VatRollInvoiceOCRRequest& request, const VatRollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VatRollInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VatRollInvoiceOCROutcomeCallable OcrClient::VatRollInvoiceOCRCallable(const VatRollInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VatRollInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->VatRollInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VehicleLicenseOCROutcome OcrClient::VehicleLicenseOCR(const VehicleLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VehicleLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VehicleLicenseOCRResponse rsp = VehicleLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VehicleLicenseOCROutcome(rsp);
        else
            return VehicleLicenseOCROutcome(o.GetError());
    }
    else
    {
        return VehicleLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::VehicleLicenseOCRAsync(const VehicleLicenseOCRRequest& request, const VehicleLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VehicleLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VehicleLicenseOCROutcomeCallable OcrClient::VehicleLicenseOCRCallable(const VehicleLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VehicleLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->VehicleLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VinOCROutcome OcrClient::VinOCR(const VinOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VinOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VinOCRResponse rsp = VinOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VinOCROutcome(rsp);
        else
            return VinOCROutcome(o.GetError());
    }
    else
    {
        return VinOCROutcome(outcome.GetError());
    }
}

void OcrClient::VinOCRAsync(const VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VinOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VinOCROutcome()>>(
        [this, request]()
        {
            return this->VinOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::WaybillOCROutcome OcrClient::WaybillOCR(const WaybillOCRRequest &request)
{
    auto outcome = MakeRequest(request, "WaybillOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WaybillOCRResponse rsp = WaybillOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WaybillOCROutcome(rsp);
        else
            return WaybillOCROutcome(o.GetError());
    }
    else
    {
        return WaybillOCROutcome(outcome.GetError());
    }
}

void OcrClient::WaybillOCRAsync(const WaybillOCRRequest& request, const WaybillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WaybillOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::WaybillOCROutcomeCallable OcrClient::WaybillOCRCallable(const WaybillOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WaybillOCROutcome()>>(
        [this, request]()
        {
            return this->WaybillOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


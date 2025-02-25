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

#ifndef TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_
#define TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiia/v20190529/model/AssessQualityRequest.h>
#include <tencentcloud/tiia/v20190529/model/AssessQualityResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectCelebrityRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectCelebrityResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductResponse.h>
#include <tencentcloud/tiia/v20190529/model/EnhanceImageRequest.h>
#include <tencentcloud/tiia/v20190529/model/EnhanceImageResponse.h>
#include <tencentcloud/tiia/v20190529/model/ImageModerationRequest.h>
#include <tencentcloud/tiia/v20190529/model/ImageModerationResponse.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarRequest.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarResponse.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            class TiiaClient : public AbstractClient
            {
            public:
                TiiaClient(const Credential &credential, const std::string &region);
                TiiaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AssessQualityResponse> AssessQualityOutcome;
                typedef std::future<AssessQualityOutcome> AssessQualityOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::AssessQualityRequest&, AssessQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessQualityAsyncHandler;
                typedef Outcome<Error, Model::DetectCelebrityResponse> DetectCelebrityOutcome;
                typedef std::future<DetectCelebrityOutcome> DetectCelebrityOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectCelebrityRequest&, DetectCelebrityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectCelebrityAsyncHandler;
                typedef Outcome<Error, Model::DetectLabelResponse> DetectLabelOutcome;
                typedef std::future<DetectLabelOutcome> DetectLabelOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectLabelRequest&, DetectLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectLabelAsyncHandler;
                typedef Outcome<Error, Model::DetectProductResponse> DetectProductOutcome;
                typedef std::future<DetectProductOutcome> DetectProductOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectProductRequest&, DetectProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectProductAsyncHandler;
                typedef Outcome<Error, Model::EnhanceImageResponse> EnhanceImageOutcome;
                typedef std::future<EnhanceImageOutcome> EnhanceImageOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::EnhanceImageRequest&, EnhanceImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceImageAsyncHandler;
                typedef Outcome<Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Error, Model::RecognizeCarResponse> RecognizeCarOutcome;
                typedef std::future<RecognizeCarOutcome> RecognizeCarOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::RecognizeCarRequest&, RecognizeCarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCarAsyncHandler;



                /**
                 *评估输入图片在视觉上的质量，从多个方面评估，并同时给出综合的、客观的清晰度评分，和主观的美观度评分。
                 * @param req AssessQualityRequest
                 * @return AssessQualityOutcome
                 */
                AssessQualityOutcome AssessQuality(const Model::AssessQualityRequest &request);
                void AssessQualityAsync(const Model::AssessQualityRequest& request, const AssessQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessQualityOutcomeCallable AssessQualityCallable(const Model::AssessQualityRequest& request);

                /**
                 *传入一张图片，可以识别图片中包含的人物是否为公众人物，如果是，输出人物的姓名、基本信息、脸部坐标。

支持识别一张图片中存在的多个人脸，针对每个人脸，会给出与之最相似的公众人物。
                 * @param req DetectCelebrityRequest
                 * @return DetectCelebrityOutcome
                 */
                DetectCelebrityOutcome DetectCelebrity(const Model::DetectCelebrityRequest &request);
                void DetectCelebrityAsync(const Model::DetectCelebrityRequest& request, const DetectCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectCelebrityOutcomeCallable DetectCelebrityCallable(const Model::DetectCelebrityRequest& request);

                /**
                 *传入一张图片，识别出图片中存在的物体，并返回物体的名称（分类）、置信度，一张图片会给出多个可能的标签。
                 * @param req DetectLabelRequest
                 * @return DetectLabelOutcome
                 */
                DetectLabelOutcome DetectLabel(const Model::DetectLabelRequest &request);
                void DetectLabelAsync(const Model::DetectLabelRequest& request, const DetectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectLabelOutcomeCallable DetectLabelCallable(const Model::DetectLabelRequest& request);

                /**
                 *本接口支持识别图片中包含的商品，能够输出商品的品类名称、类别，还可以输出商品在图片中的位置。支持一张图片多个商品的识别。
                 * @param req DetectProductRequest
                 * @return DetectProductOutcome
                 */
                DetectProductOutcome DetectProduct(const Model::DetectProductRequest &request);
                void DetectProductAsync(const Model::DetectProductRequest& request, const DetectProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectProductOutcomeCallable DetectProductCallable(const Model::DetectProductRequest& request);

                /**
                 *传入一张图片，输出清晰度提升后的图片。

可以消除图片有损压缩导致的噪声，和使用滤镜、拍摄失焦导致的模糊。让图片的边缘和细节更加清晰自然。


                 * @param req EnhanceImageRequest
                 * @return EnhanceImageOutcome
                 */
                EnhanceImageOutcome EnhanceImage(const Model::EnhanceImageRequest &request);
                void EnhanceImageAsync(const Model::EnhanceImageRequest& request, const EnhanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceImageOutcomeCallable EnhanceImageCallable(const Model::EnhanceImageRequest& request);

                /**
                 *本接口提供多种维度的图像审核能力，支持色情和性感内容识别，政治人物和涉政敏感场景识别，以及暴恐人物、场景、旗帜标识等违禁内容的识别。
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

                /**
                 *腾讯云车辆属性识别可对汽车车身及车辆属性进行检测与识别，目前支持11种车身颜色、20多种车型、300多种品牌、4000多种车系+年款的识别，同时支持对车标的位置进行检测。
                 * @param req RecognizeCarRequest
                 * @return RecognizeCarOutcome
                 */
                RecognizeCarOutcome RecognizeCar(const Model::RecognizeCarRequest &request);
                void RecognizeCarAsync(const Model::RecognizeCarRequest& request, const RecognizeCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeCarOutcomeCallable RecognizeCarCallable(const Model::RecognizeCarRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_

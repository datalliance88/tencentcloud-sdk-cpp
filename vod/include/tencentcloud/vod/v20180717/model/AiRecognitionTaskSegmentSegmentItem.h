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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频拆条片段。
                */
                class AiRecognitionTaskSegmentSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskSegmentSegmentItem();
                    ~AiRecognitionTaskSegmentSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频拆条片段 Url。
                     * @return SegmentUrl 视频拆条片段 Url。
                     */
                    std::string GetSegmentUrl() const;

                    /**
                     * 设置视频拆条片段 Url。
                     * @param SegmentUrl 视频拆条片段 Url。
                     */
                    void SetSegmentUrl(const std::string& _segmentUrl);

                    /**
                     * 判断参数 SegmentUrl 是否已赋值
                     * @return SegmentUrl 是否已赋值
                     */
                    bool SegmentUrlHasBeenSet() const;

                    /**
                     * 获取拆条片段置信度。取值：0~100。
                     * @return Confidence 拆条片段置信度。取值：0~100。
                     */
                    double GetConfidence() const;

                    /**
                     * 设置拆条片段置信度。取值：0~100。
                     * @param Confidence 拆条片段置信度。取值：0~100。
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取拆条片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 拆条片段起始的偏移时间，单位：秒。
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置拆条片段起始的偏移时间，单位：秒。
                     * @param StartTimeOffset 拆条片段起始的偏移时间，单位：秒。
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取拆条片段终止的偏移时间，单位：秒。
                     * @return EndTimeOffset 拆条片段终止的偏移时间，单位：秒。
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置拆条片段终止的偏移时间，单位：秒。
                     * @param EndTimeOffset 拆条片段终止的偏移时间，单位：秒。
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取拆条封面图片 Url。
                     * @return CovImgUrl 拆条封面图片 Url。
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置拆条封面图片 Url。
                     * @param CovImgUrl 拆条封面图片 Url。
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     */
                    bool CovImgUrlHasBeenSet() const;

                    /**
                     * 获取特殊字段，请忽略。
                     * @return SpecialInfo 特殊字段，请忽略。
                     */
                    std::string GetSpecialInfo() const;

                    /**
                     * 设置特殊字段，请忽略。
                     * @param SpecialInfo 特殊字段，请忽略。
                     */
                    void SetSpecialInfo(const std::string& _specialInfo);

                    /**
                     * 判断参数 SpecialInfo 是否已赋值
                     * @return SpecialInfo 是否已赋值
                     */
                    bool SpecialInfoHasBeenSet() const;

                private:

                    /**
                     * 视频拆条片段 Url。
                     */
                    std::string m_segmentUrl;
                    bool m_segmentUrlHasBeenSet;

                    /**
                     * 拆条片段置信度。取值：0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 拆条片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 拆条片段终止的偏移时间，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 拆条封面图片 Url。
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * 特殊字段，请忽略。
                     */
                    std::string m_specialInfo;
                    bool m_specialInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_

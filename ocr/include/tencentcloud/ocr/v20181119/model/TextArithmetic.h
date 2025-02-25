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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTARITHMETIC_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTARITHMETIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 算式识别结果
                */
                class TextArithmetic : public AbstractModel
                {
                public:
                    TextArithmetic();
                    ~TextArithmetic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的文本行内容
                     * @return DetectedText 识别出的文本行内容
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置识别出的文本行内容
                     * @param DetectedText 识别出的文本行内容
                     */
                    void SetDetectedText(const std::string& _detectedText);

                    /**
                     * 判断参数 DetectedText 是否已赋值
                     * @return DetectedText 是否已赋值
                     */
                    bool DetectedTextHasBeenSet() const;

                    /**
                     * 获取算式运算结果
                     * @return Result 算式运算结果
                     */
                    bool GetResult() const;

                    /**
                     * 设置算式运算结果
                     * @param Result 算式运算结果
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取保留字段，暂不支持
                     * @return Confidence 保留字段，暂不支持
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置保留字段，暂不支持
                     * @param Confidence 保留字段，暂不支持
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文本行坐标，以四个顶点坐标表示（保留字段，暂不支持）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Polygon 文本行坐标，以四个顶点坐标表示（保留字段，暂不支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置文本行坐标，以四个顶点坐标表示（保留字段，暂不支持）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Polygon 文本行坐标，以四个顶点坐标表示（保留字段，暂不支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取保留字段，暂不支持
                     * @return AdvancedInfo 保留字段，暂不支持
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置保留字段，暂不支持
                     * @param AdvancedInfo 保留字段，暂不支持
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 算式运算结果
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 保留字段，暂不支持
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行坐标，以四个顶点坐标表示（保留字段，暂不支持）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 保留字段，暂不支持
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTARITHMETIC_H_

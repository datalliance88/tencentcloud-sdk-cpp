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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_VERIFYFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_VERIFYFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * VerifyFace返回参数结构体
                */
                class VerifyFaceResponse : public AbstractModel
                {
                public:
                    VerifyFaceResponse();
                    ~VerifyFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取给定的人脸图片与 PersonId 对应人脸的相似度。若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
                     * @return Score 给定的人脸图片与 PersonId 对应人脸的相似度。若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
                     */
                    double GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取是否为同一人的判断。
                     * @return IsMatch 是否为同一人的判断。
                     */
                    bool GetIsMatch() const;

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     */
                    bool IsMatchHasBeenSet() const;

                private:

                    /**
                     * 给定的人脸图片与 PersonId 对应人脸的相似度。若 PersonId 下有多张人脸（Face），返回相似度最大的分数。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 是否为同一人的判断。
                     */
                    bool m_isMatch;
                    bool m_isMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_VERIFYFACERESPONSE_H_

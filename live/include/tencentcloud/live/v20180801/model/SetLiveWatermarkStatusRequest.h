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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SETLIVEWATERMARKSTATUSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SETLIVEWATERMARKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * SetLiveWatermarkStatus请求参数结构体
                */
                class SetLiveWatermarkStatusRequest : public AbstractModel
                {
                public:
                    SetLiveWatermarkStatusRequest();
                    ~SetLiveWatermarkStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取水印ID。
                     * @return WatermarkId 水印ID。
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置水印ID。
                     * @param WatermarkId 水印ID。
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     */
                    bool WatermarkIdHasBeenSet() const;

                    /**
                     * 获取状态。0：停用，1:启用
                     * @return Status 状态。0：停用，1:启用
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态。0：停用，1:启用
                     * @param Status 状态。0：停用，1:启用
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 水印ID。
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * 状态。0：停用，1:启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SETLIVEWATERMARKSTATUSREQUEST_H_

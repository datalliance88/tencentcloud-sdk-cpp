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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 按产品汇总产品详情
                */
                class BusinessSummaryOverviewItem : public AbstractModel
                {
                public:
                    BusinessSummaryOverviewItem();
                    ~BusinessSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessCode 产品码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置产品码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BusinessCode 产品码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     * @return BusinessCodeName 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     * @param BusinessCodeName 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取实际花费
                     * @return RealTotalCost 实际花费
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置实际花费
                     * @param RealTotalCost 实际花费
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取费用所占百分比，两位小数
                     * @return RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置费用所占百分比，两位小数
                     * @param RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                private:

                    /**
                     * 产品码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 产品名称：云产品大类，如云服务器CVM、云数据库MySQL
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 实际花费
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 费用所占百分比，两位小数
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_

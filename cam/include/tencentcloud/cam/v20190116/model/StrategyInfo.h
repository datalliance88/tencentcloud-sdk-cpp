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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 策略信息
                */
                class StrategyInfo : public AbstractModel
                {
                public:
                    StrategyInfo();
                    ~StrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID。
                     * @return PolicyId 策略ID。
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param PolicyId 策略ID。
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称。
                     * @return PolicyName 策略名称。
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称。
                     * @param PolicyName 策略名称。
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddTime 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取策略类型。1 表示自定义策略，2 表示预设策略。
                     * @return Type 策略类型。1 表示自定义策略，2 表示预设策略。
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置策略类型。1 表示自定义策略，2 表示预设策略。
                     * @param Type 策略类型。1 表示自定义策略，2 表示预设策略。
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     * @return CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     * @param CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取关联的用户数
                     * @return Attachments 关联的用户数
                     */
                    uint64_t GetAttachments() const;

                    /**
                     * 设置关联的用户数
                     * @param Attachments 关联的用户数
                     */
                    void SetAttachments(const uint64_t& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceType 策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 策略ID。
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略类型。1 表示自定义策略，2 表示预设策略。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 关联的用户数
                     */
                    uint64_t m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * 策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_

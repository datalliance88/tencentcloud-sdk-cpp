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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * UpgradeLaunchConfiguration请求参数结构体
                */
                class UpgradeLaunchConfigurationRequest : public AbstractModel
                {
                public:
                    UpgradeLaunchConfigurationRequest();
                    ~UpgradeLaunchConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。
                     * @param LaunchConfigurationId 启动配置ID。
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-8toqc6s3`。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li>`公共镜像`、`自定义镜像`、`共享镜像`的镜像ID可通过登录[控制台](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE)查询；`服务镜像市场`的镜像ID可通过[云市场](https://market.cloud.tencent.com/list)查询。</li><li>通过调用接口 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) ，取返回信息中的`ImageId`字段。</li>
                     * @return ImageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-8toqc6s3`。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li>`公共镜像`、`自定义镜像`、`共享镜像`的镜像ID可通过登录[控制台](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE)查询；`服务镜像市场`的镜像ID可通过[云市场](https://market.cloud.tencent.com/list)查询。</li><li>通过调用接口 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) ，取返回信息中的`ImageId`字段。</li>
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-8toqc6s3`。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li>`公共镜像`、`自定义镜像`、`共享镜像`的镜像ID可通过登录[控制台](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE)查询；`服务镜像市场`的镜像ID可通过[云市场](https://market.cloud.tencent.com/list)查询。</li><li>通过调用接口 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) ，取返回信息中的`ImageId`字段。</li>
                     * @param ImageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-8toqc6s3`。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li>`公共镜像`、`自定义镜像`、`共享镜像`的镜像ID可通过登录[控制台](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE)查询；`服务镜像市场`的镜像ID可通过[云市场](https://market.cloud.tencent.com/list)查询。</li><li>通过调用接口 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) ，取返回信息中的`ImageId`字段。</li>
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。
                     * @return InstanceTypes 实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。
                     * @param InstanceTypes 实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * @return LaunchConfigurationName 启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     * @param LaunchConfigurationName 启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。
                     * @return DataDisks 实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。
                     * @param DataDisks 实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * @return EnhancedService 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * @param EnhancedService 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     * @return InstanceChargeType 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     * @param InstanceChargeType 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * @return InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     * @param InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。
<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。

实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。
如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。
                     * @return InstanceTypesCheckPolicy 实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。
<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。

实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。
如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。
                     */
                    std::string GetInstanceTypesCheckPolicy() const;

                    /**
                     * 设置实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。
<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。

实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。
如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。
                     * @param InstanceTypesCheckPolicy 实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。
<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。

实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。
如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。
                     */
                    void SetInstanceTypesCheckPolicy(const std::string& _instanceTypesCheckPolicy);

                    /**
                     * 判断参数 InstanceTypesCheckPolicy 是否已赋值
                     * @return InstanceTypesCheckPolicy 是否已赋值
                     */
                    bool InstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     * @return InternetAccessible 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     * @param InternetAccessible 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。
                     * @return LoginSettings 实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。
                     * @param LoginSettings 实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例所属项目ID。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/378/4400) 的返回值中的`projectId`字段来获取。不填为默认项目。
                     * @return ProjectId 实例所属项目ID。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/378/4400) 的返回值中的`projectId`字段来获取。不填为默认项目。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目ID。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/378/4400) 的返回值中的`projectId`字段来获取。不填为默认项目。
                     * @param ProjectId 实例所属项目ID。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/378/4400) 的返回值中的`projectId`字段来获取。不填为默认项目。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的`SecurityGroupId`字段来获取。若不指定该参数，则默认不绑定安全组。
                     * @return SecurityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的`SecurityGroupId`字段来获取。若不指定该参数，则默认不绑定安全组。
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的`SecurityGroupId`字段来获取。若不指定该参数，则默认不绑定安全组。
                     * @param SecurityGroupIds 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的`SecurityGroupId`字段来获取。若不指定该参数，则默认不绑定安全组。
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @return SystemDisk 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     * @param SystemDisk 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取经过 Base64 编码后的自定义数据，最大长度不超过16KB。
                     * @return UserData 经过 Base64 编码后的自定义数据，最大长度不超过16KB。
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置经过 Base64 编码后的自定义数据，最大长度不超过16KB。
                     * @param UserData 经过 Base64 编码后的自定义数据，最大长度不超过16KB。
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。
                     * @return InstanceTags 标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。
                     * @param InstanceTags 标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     * @return CamRoleName CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     * @param CamRoleName CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                private:

                    /**
                     * 启动配置ID。
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-8toqc6s3`。镜像类型分为四种：<br/><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br/>可通过以下方式获取可用的镜像ID：<br/><li>`公共镜像`、`自定义镜像`、`共享镜像`的镜像ID可通过登录[控制台](https://console.cloud.tencent.com/cvm/image?rid=1&imageType=PUBLIC_IMAGE)查询；`服务镜像市场`的镜像ID可通过[云市场](https://market.cloud.tencent.com/list)查询。</li><li>通过调用接口 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) ，取返回信息中的`ImageId`字段。</li>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 实例机型列表，不同实例机型指定了不同的资源规格，最多支持5种实例机型。
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 启动配置显示名称。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超60个字节。
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * 实例数据盘配置信息。若不指定该参数，则默认不购买数据盘，最多支持指定11块数据盘。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 实例计费类型，CVM默认值按照POSTPAID_BY_HOUR处理。
<br><li>POSTPAID_BY_HOUR：按小时后付费
<br><li>SPOTPAID：竞价付费
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费则该参数必传。
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * 实例类型校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<br><li> ALL，所有实例类型（InstanceType）都可用则通过校验，否则校验报错。
<br><li> ANY，存在任何一个实例类型（InstanceType）可用则通过校验，否则校验报错。

实例类型不可用的常见原因包括该实例类型售罄、对应云盘售罄等。
如果 InstanceTypes 中一款机型不存在或者已下线，则无论 InstanceTypesCheckPolicy 采用何种取值，都会校验报错。
                     */
                    std::string m_instanceTypesCheckPolicy;
                    bool m_instanceTypesCheckPolicyHasBeenSet;

                    /**
                     * 公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例所属项目ID。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/378/4400) 的返回值中的`projectId`字段来获取。不填为默认项目。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例所属安全组。该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的`SecurityGroupId`字段来获取。若不指定该参数，则默认不绑定安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 经过 Base64 编码后的自定义数据，最大长度不超过16KB。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 标签列表。通过指定该参数，可以为扩容的实例绑定标签。最多支持指定10个标签。
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * CAM角色名称。可通过DescribeRoleList接口返回值中的roleName获取。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_UPGRADELAUNCHCONFIGURATIONREQUEST_H_

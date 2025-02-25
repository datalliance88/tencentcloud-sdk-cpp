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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDBInstances请求参数结构体
                */
                class InquiryPriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesRequest();
                    ~InquiryPriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @return Zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @param Zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取内存大小，单位：GB
                     * @return Memory 内存大小，单位：GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB
                     * @param Memory 内存大小，单位：GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例容量大小，单位：GB。
                     * @return Storage 实例容量大小，单位：GB。
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例容量大小，单位：GB。
                     * @param Storage 实例容量大小，单位：GB。
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取计费类型，当前只支持预付费，即包年包月，取值为PREPAID。默认值为PREPAID
                     * @return InstanceChargeType 计费类型，当前只支持预付费，即包年包月，取值为PREPAID。默认值为PREPAID
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置计费类型，当前只支持预付费，即包年包月，取值为PREPAID。默认值为PREPAID
                     * @param InstanceChargeType 计费类型，当前只支持预付费，即包年包月，取值为PREPAID。默认值为PREPAID
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取购买时长，单位：月。取值为1到48，默认为1
                     * @return Period 购买时长，单位：月。取值为1到48，默认为1
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。取值为1到48，默认为1
                     * @param Period 购买时长，单位：月。取值为1到48，默认为1
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取一次性购买的实例数量。取值1-100，默认取值为1
                     * @return GoodsNum 一次性购买的实例数量。取值1-100，默认取值为1
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置一次性购买的实例数量。取值1-100，默认取值为1
                     * @param GoodsNum 一次性购买的实例数量。取值1-100，默认取值为1
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取sqlserver版本，目前只支持：2008R2（SQL Server 2008 R2），2012SP3（SQL Server 2012），2016SP1（SQL Server 2016 SP1）两种版本。默认为2008R2版本
                     * @return DBVersion sqlserver版本，目前只支持：2008R2（SQL Server 2008 R2），2012SP3（SQL Server 2012），2016SP1（SQL Server 2016 SP1）两种版本。默认为2008R2版本
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置sqlserver版本，目前只支持：2008R2（SQL Server 2008 R2），2012SP3（SQL Server 2012），2016SP1（SQL Server 2016 SP1）两种版本。默认为2008R2版本
                     * @param DBVersion sqlserver版本，目前只支持：2008R2（SQL Server 2008 R2），2012SP3（SQL Server 2012），2016SP1（SQL Server 2016 SP1）两种版本。默认为2008R2版本
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 内存大小，单位：GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例容量大小，单位：GB。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 计费类型，当前只支持预付费，即包年包月，取值为PREPAID。默认值为PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 购买时长，单位：月。取值为1到48，默认为1
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 一次性购买的实例数量。取值1-100，默认取值为1
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * sqlserver版本，目前只支持：2008R2（SQL Server 2008 R2），2012SP3（SQL Server 2012），2016SP1（SQL Server 2016 SP1）两种版本。默认为2008R2版本
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

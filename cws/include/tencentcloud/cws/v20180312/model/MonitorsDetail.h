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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_MONITORSDETAIL_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_MONITORSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/Monitor.h>
#include <tencentcloud/cws/v20180312/model/MonitorMiniSite.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 监控任务详细数据
                */
                class MonitorsDetail : public AbstractModel
                {
                public:
                    MonitorsDetail();
                    ~MonitorsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控任务包含的站点列表的平均扫描进度。
                     * @return Progress 监控任务包含的站点列表的平均扫描进度。
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置监控任务包含的站点列表的平均扫描进度。
                     * @param Progress 监控任务包含的站点列表的平均扫描进度。
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取扫描页面总数。
                     * @return PageCount 扫描页面总数。
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置扫描页面总数。
                     * @param PageCount 扫描页面总数。
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取监控任务基础信息。
                     * @return Basic 监控任务基础信息。
                     */
                    Monitor GetBasic() const;

                    /**
                     * 设置监控任务基础信息。
                     * @param Basic 监控任务基础信息。
                     */
                    void SetBasic(const Monitor& _basic);

                    /**
                     * 判断参数 Basic 是否已赋值
                     * @return Basic 是否已赋值
                     */
                    bool BasicHasBeenSet() const;

                    /**
                     * 获取监控任务包含的站点列表。
                     * @return Sites 监控任务包含的站点列表。
                     */
                    std::vector<MonitorMiniSite> GetSites() const;

                    /**
                     * 设置监控任务包含的站点列表。
                     * @param Sites 监控任务包含的站点列表。
                     */
                    void SetSites(const std::vector<MonitorMiniSite>& _sites);

                    /**
                     * 判断参数 Sites 是否已赋值
                     * @return Sites 是否已赋值
                     */
                    bool SitesHasBeenSet() const;

                    /**
                     * 获取监控任务包含的站点列表数量。
                     * @return SiteNumber 监控任务包含的站点列表数量。
                     */
                    uint64_t GetSiteNumber() const;

                    /**
                     * 设置监控任务包含的站点列表数量。
                     * @param SiteNumber 监控任务包含的站点列表数量。
                     */
                    void SetSiteNumber(const uint64_t& _siteNumber);

                    /**
                     * 判断参数 SiteNumber 是否已赋值
                     * @return SiteNumber 是否已赋值
                     */
                    bool SiteNumberHasBeenSet() const;

                    /**
                     * 获取监控任务包含的受漏洞威胁的站点列表。
                     * @return ImpactSites 监控任务包含的受漏洞威胁的站点列表。
                     */
                    std::vector<MonitorMiniSite> GetImpactSites() const;

                    /**
                     * 设置监控任务包含的受漏洞威胁的站点列表。
                     * @param ImpactSites 监控任务包含的受漏洞威胁的站点列表。
                     */
                    void SetImpactSites(const std::vector<MonitorMiniSite>& _impactSites);

                    /**
                     * 判断参数 ImpactSites 是否已赋值
                     * @return ImpactSites 是否已赋值
                     */
                    bool ImpactSitesHasBeenSet() const;

                    /**
                     * 获取监控任务包含的受漏洞威胁的站点列表数量。
                     * @return ImpactSiteNumber 监控任务包含的受漏洞威胁的站点列表数量。
                     */
                    uint64_t GetImpactSiteNumber() const;

                    /**
                     * 设置监控任务包含的受漏洞威胁的站点列表数量。
                     * @param ImpactSiteNumber 监控任务包含的受漏洞威胁的站点列表数量。
                     */
                    void SetImpactSiteNumber(const uint64_t& _impactSiteNumber);

                    /**
                     * 判断参数 ImpactSiteNumber 是否已赋值
                     * @return ImpactSiteNumber 是否已赋值
                     */
                    bool ImpactSiteNumberHasBeenSet() const;

                    /**
                     * 获取高风险漏洞数量。
                     * @return VulsHighNumber 高风险漏洞数量。
                     */
                    uint64_t GetVulsHighNumber() const;

                    /**
                     * 设置高风险漏洞数量。
                     * @param VulsHighNumber 高风险漏洞数量。
                     */
                    void SetVulsHighNumber(const uint64_t& _vulsHighNumber);

                    /**
                     * 判断参数 VulsHighNumber 是否已赋值
                     * @return VulsHighNumber 是否已赋值
                     */
                    bool VulsHighNumberHasBeenSet() const;

                    /**
                     * 获取中风险漏洞数量。
                     * @return VulsMiddleNumber 中风险漏洞数量。
                     */
                    uint64_t GetVulsMiddleNumber() const;

                    /**
                     * 设置中风险漏洞数量。
                     * @param VulsMiddleNumber 中风险漏洞数量。
                     */
                    void SetVulsMiddleNumber(const uint64_t& _vulsMiddleNumber);

                    /**
                     * 判断参数 VulsMiddleNumber 是否已赋值
                     * @return VulsMiddleNumber 是否已赋值
                     */
                    bool VulsMiddleNumberHasBeenSet() const;

                    /**
                     * 获取低风险漏洞数量。
                     * @return VulsLowNumber 低风险漏洞数量。
                     */
                    uint64_t GetVulsLowNumber() const;

                    /**
                     * 设置低风险漏洞数量。
                     * @param VulsLowNumber 低风险漏洞数量。
                     */
                    void SetVulsLowNumber(const uint64_t& _vulsLowNumber);

                    /**
                     * 判断参数 VulsLowNumber 是否已赋值
                     * @return VulsLowNumber 是否已赋值
                     */
                    bool VulsLowNumberHasBeenSet() const;

                    /**
                     * 获取提示数量。
                     * @return VulsNoticeNumber 提示数量。
                     */
                    uint64_t GetVulsNoticeNumber() const;

                    /**
                     * 设置提示数量。
                     * @param VulsNoticeNumber 提示数量。
                     */
                    void SetVulsNoticeNumber(const uint64_t& _vulsNoticeNumber);

                    /**
                     * 判断参数 VulsNoticeNumber 是否已赋值
                     * @return VulsNoticeNumber 是否已赋值
                     */
                    bool VulsNoticeNumberHasBeenSet() const;

                private:

                    /**
                     * 监控任务包含的站点列表的平均扫描进度。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 扫描页面总数。
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 监控任务基础信息。
                     */
                    Monitor m_basic;
                    bool m_basicHasBeenSet;

                    /**
                     * 监控任务包含的站点列表。
                     */
                    std::vector<MonitorMiniSite> m_sites;
                    bool m_sitesHasBeenSet;

                    /**
                     * 监控任务包含的站点列表数量。
                     */
                    uint64_t m_siteNumber;
                    bool m_siteNumberHasBeenSet;

                    /**
                     * 监控任务包含的受漏洞威胁的站点列表。
                     */
                    std::vector<MonitorMiniSite> m_impactSites;
                    bool m_impactSitesHasBeenSet;

                    /**
                     * 监控任务包含的受漏洞威胁的站点列表数量。
                     */
                    uint64_t m_impactSiteNumber;
                    bool m_impactSiteNumberHasBeenSet;

                    /**
                     * 高风险漏洞数量。
                     */
                    uint64_t m_vulsHighNumber;
                    bool m_vulsHighNumberHasBeenSet;

                    /**
                     * 中风险漏洞数量。
                     */
                    uint64_t m_vulsMiddleNumber;
                    bool m_vulsMiddleNumberHasBeenSet;

                    /**
                     * 低风险漏洞数量。
                     */
                    uint64_t m_vulsLowNumber;
                    bool m_vulsLowNumberHasBeenSet;

                    /**
                     * 提示数量。
                     */
                    uint64_t m_vulsNoticeNumber;
                    bool m_vulsNoticeNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_MONITORSDETAIL_H_

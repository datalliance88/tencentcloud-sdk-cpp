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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * PushUrlsCache请求参数结构体
                */
                class PushUrlsCacheRequest : public AbstractModel
                {
                public:
                    PushUrlsCacheRequest();
                    ~PushUrlsCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL 列表，提交时需要包含协议头部（http:// 或 https://）
                     * @return Urls URL 列表，提交时需要包含协议头部（http:// 或 https://）
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置URL 列表，提交时需要包含协议头部（http:// 或 https://）
                     * @param Urls URL 列表，提交时需要包含协议头部（http:// 或 https://）
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取预热请求回源时 HTTP 请求的 User-Agent 头部，默认为 TencentCdn
                     * @return UserAgent 预热请求回源时 HTTP 请求的 User-Agent 头部，默认为 TencentCdn
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置预热请求回源时 HTTP 请求的 User-Agent 头部，默认为 TencentCdn
                     * @param UserAgent 预热请求回源时 HTTP 请求的 User-Agent 头部，默认为 TencentCdn
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                private:

                    /**
                     * URL 列表，提交时需要包含协议头部（http:// 或 https://）
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 预热请求回源时 HTTP 请求的 User-Agent 头部，默认为 TencentCdn
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_

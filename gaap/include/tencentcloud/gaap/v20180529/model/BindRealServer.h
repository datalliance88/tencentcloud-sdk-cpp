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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 已绑定的源站信息
                */
                class BindRealServer : public AbstractModel
                {
                public:
                    BindRealServer();
                    ~BindRealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param RealServerId 源站ID
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取源站IP或者域名
                     * @return RealServerIP 源站IP或者域名
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站IP或者域名
                     * @param RealServerIP 源站IP或者域名
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取该源站所占权重
                     * @return RealServerWeight 该源站所占权重
                     */
                    int64_t GetRealServerWeight() const;

                    /**
                     * 设置该源站所占权重
                     * @param RealServerWeight 该源站所占权重
                     */
                    void SetRealServerWeight(const int64_t& _realServerWeight);

                    /**
                     * 判断参数 RealServerWeight 是否已赋值
                     * @return RealServerWeight 是否已赋值
                     */
                    bool RealServerWeightHasBeenSet() const;

                    /**
                     * 获取源站状态，异常状态包括IP连接不上和域名解析失败（源站为域名）。其中：
0，源站正常；
1，IP异常；
2，域名解析异常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerStatus 源站状态，异常状态包括IP连接不上和域名解析失败（源站为域名）。其中：
0，源站正常；
1，IP异常；
2，域名解析异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRealServerStatus() const;

                    /**
                     * 设置源站状态，异常状态包括IP连接不上和域名解析失败（源站为域名）。其中：
0，源站正常；
1，IP异常；
2，域名解析异常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerStatus 源站状态，异常状态包括IP连接不上和域名解析失败（源站为域名）。其中：
0，源站正常；
1，IP异常；
2，域名解析异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerStatus(const int64_t& _realServerStatus);

                    /**
                     * 判断参数 RealServerStatus 是否已赋值
                     * @return RealServerStatus 是否已赋值
                     */
                    bool RealServerStatusHasBeenSet() const;

                    /**
                     * 获取源站的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerPort 源站的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRealServerPort() const;

                    /**
                     * 设置源站的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerPort 源站的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerPort(const int64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。
                     * @return DownIPList 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。
                     */
                    std::vector<std::string> GetDownIPList() const;

                    /**
                     * 设置当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。
                     * @param DownIPList 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。
                     */
                    void SetDownIPList(const std::vector<std::string>& _downIPList);

                    /**
                     * 判断参数 DownIPList 是否已赋值
                     * @return DownIPList 是否已赋值
                     */
                    bool DownIPListHasBeenSet() const;

                private:

                    /**
                     * 源站ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 源站IP或者域名
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * 该源站所占权重
                     */
                    int64_t m_realServerWeight;
                    bool m_realServerWeightHasBeenSet;

                    /**
                     * 源站状态，异常状态包括IP连接不上和域名解析失败（源站为域名）。其中：
0，源站正常；
1，IP异常；
2，域名解析异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_realServerStatus;
                    bool m_realServerStatusHasBeenSet;

                    /**
                     * 源站的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。
                     */
                    std::vector<std::string> m_downIPList;
                    bool m_downIPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_

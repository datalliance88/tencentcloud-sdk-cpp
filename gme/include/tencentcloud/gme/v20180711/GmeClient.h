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

#ifndef TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
#define TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultListResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListResponse.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceRequest.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceResponse.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterRequest.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterResponse.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            class GmeClient : public AbstractClient
            {
            public:
                GmeClient(const Credential &credential, const std::string &region);
                GmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeFilterResultResponse> DescribeFilterResultOutcome;
                typedef std::future<DescribeFilterResultOutcome> DescribeFilterResultOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeFilterResultRequest&, DescribeFilterResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeFilterResultListResponse> DescribeFilterResultListOutcome;
                typedef std::future<DescribeFilterResultListOutcome> DescribeFilterResultListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeFilterResultListRequest&, DescribeFilterResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterResultListAsyncHandler;
                typedef Outcome<Error, Model::DescribeScanResultListResponse> DescribeScanResultListOutcome;
                typedef std::future<DescribeScanResultListOutcome> DescribeScanResultListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeScanResultListRequest&, DescribeScanResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanResultListAsyncHandler;
                typedef Outcome<Error, Model::ScanVoiceResponse> ScanVoiceOutcome;
                typedef std::future<ScanVoiceOutcome> ScanVoiceOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ScanVoiceRequest&, ScanVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVoiceAsyncHandler;
                typedef Outcome<Error, Model::VoiceFilterResponse> VoiceFilterOutcome;
                typedef std::future<VoiceFilterOutcome> VoiceFilterOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::VoiceFilterRequest&, VoiceFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoiceFilterAsyncHandler;



                /**
                 *根据应用ID和文件ID查询识别结果
                 * @param req DescribeFilterResultRequest
                 * @return DescribeFilterResultOutcome
                 */
                DescribeFilterResultOutcome DescribeFilterResult(const Model::DescribeFilterResultRequest &request);
                void DescribeFilterResultAsync(const Model::DescribeFilterResultRequest& request, const DescribeFilterResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilterResultOutcomeCallable DescribeFilterResultCallable(const Model::DescribeFilterResultRequest& request);

                /**
                 *根据日期查询识别结果列表
                 * @param req DescribeFilterResultListRequest
                 * @return DescribeFilterResultListOutcome
                 */
                DescribeFilterResultListOutcome DescribeFilterResultList(const Model::DescribeFilterResultListRequest &request);
                void DescribeFilterResultListAsync(const Model::DescribeFilterResultListRequest& request, const DescribeFilterResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilterResultListOutcomeCallable DescribeFilterResultListCallable(const Model::DescribeFilterResultListRequest& request);

                /**
                 *本接口(DescribeScanResultList)用于查询语音检测结果，查询任务列表最多支持100个。
<p style="color:red">如果在提交语音检测任务时未设置 Callback 字段，则需要通过本接口获取检测结果</p>
                 * @param req DescribeScanResultListRequest
                 * @return DescribeScanResultListOutcome
                 */
                DescribeScanResultListOutcome DescribeScanResultList(const Model::DescribeScanResultListRequest &request);
                void DescribeScanResultListAsync(const Model::DescribeScanResultListRequest& request, const DescribeScanResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanResultListOutcomeCallable DescribeScanResultListCallable(const Model::DescribeScanResultListRequest& request);

                /**
                 *本接口(ScanVoice)用于提交语音检测任务，检测任务列表最多支持100个。
</br></br>
<h4><b>接口功能说明：</b></h4>
<li>支持对语音流或语音文件进行检测，判断其中是否包含违规内容。</li>
<li>支持设置回调地址 Callback 获取检测结果，同时支持通过接口(查询语音检测结果)主动轮询获取检测结果。</li>
<li>支持场景输入，包括：谩骂、色情、涉政等场景</li>
<li>支持批量提交检测任务。检测任务列表最多支持100个。</li>
</br>
<h4><b>音频文件限制说明：</b></h4>
<li>音频文件大小限制：100 M</li>
<li>音频文件时长限制：30分钟</li>
<li>音频文件格式支持的类型：.wav、.m4a、.amr、.mp3、.aac、.wma、.ogg</li>
</br>
<h4><b>语音流限制说明：</b></h4>
<li>语音流格式支持的类型：.m3u8、.flv</li>
<li>语音流支持的传输协议：RTMP、HTTP、HTTPS</li>
<li>语音流时长限制：4小时</li>
</br>
<h4 id="Label_Value"><b>Scenes 与 Label 参数说明：</b></h4>
<p>提交语音检测任务时，需要指定 Scenes 场景参数，<font color="red">目前要求您设置 Scenes 参数值为：["default"]</font>；而在检测结果中，则包含请求时指定的场景，以及对应类型的检测结果。</p>
<table>
<thread>
<tr>
<th>场景</th>
<th>描述</th>
<th>Label</th>
</tr>
</thread>
<tbody>
<tr>
<td>语音检测</td>
<td>语音检测的检测类型</td>
<td>
<p>normal:正常文本</p>
<p>porn:色情</p>
<p>politics:涉政</p>
<p>abuse:谩骂</p>
<p>ad :广告</p>
<p>terrorism:暴恐</p>
<p>contraband :违禁</p>
<p>customized:自定义词库</p>
</td>
</tr>
</tbody>
</table>
</br>
<h4 id="Callback_Declare"><b>回调相关说明：</b></h4>
<li>如果在请求参数中指定了回调地址参数 Callback，即一个 HTTP(S) 协议接口的 URL，则需要支持 POST 方法，传输数据编码采用 UTF-8。</li>
<li>在推送回调数据后，接收到的 HTTP 状态码为 200 时，表示推送成功。</li>
<li>HTTP 头参数说明：</li>
<table>
<thread>
<tr>
<th>名称</th>
<th>类型</th>
<th>是否必需</th>
<th>描述</th>
</tr>
</thread>
<tbody>
<tr>
<td>Signatue</td>
<td>string</td>
<td>是</td>
<td>签名，具体见<a href="#Callback_Signatue">签名生成说明</a></td>
</tr>
</tbody>
</table>
<ul  id="Callback_Signatue">
	<li>签名生成说明：</li>
	<ul>
		<li>使用 HMAC-SH1 算法, 最终结果做 BASE64 编码;</li>
		<li>签名原文串为 POST+body 的整个json内容(长度以 Content-Length 为准);</li>
		<li>签名key为应用的 secrectkey，可以通过控制台查看。</li>
	</ul>
</ul>

<ul>
	<li>回调请求 Body 的字段说明如下：</li>
</ul>
<table>
<thread>
<tr>
<th>名称</th>
<th>类型</th>
<th>是否必需</th>
<th>描述</th>
</tr>
</thread>
<tbody>
<tr>
<td>Data</td>
<td>Array of <a href="https://cloud.tencent.com/document/api/607/35375#DescribeScanResult">DescribeScanResult</a></td>
<td>是</td>
<td>语音检测任务的结果</td>
</tr>
</tbody>
</table>
<li>回调示例如下<font color="red">（详细字段说明见上述表格中 Data 字段说明）</font>：</li>
<pre><code>{
	"Data": [{
		"Code": 0,
		"DataId": "1400000000_test_data_id",
		"ScanFinishTime": 1566720906,
		"HitFlag": true,
		"Live": false,
		"Msg": "",
		"ScanPiece": [{
			"DumpUrl": "",
			"HitFlag": true,
			"MainType": "abuse",
			"RoomId": "123",
			"OpenId": "xxx",
			"ScanDetail": [{
				"EndTime": 1110,
				"KeyWord": "xxx",
				"Label": "abuse",
				"Rate": "90.00",
				"StartTime": 1110
			}, {
				"EndTime": 1380,
				"KeyWord": "xxx",
				"Label": "abuse",
				"Rate": "90.00",
				"StartTime": 930
			}, {
				"EndTime": 1560,
				"KeyWord": "xxx",
				"Label": "abuse",
				"Rate": "90.00",
				"StartTime": 930
			}, {
				"EndTime": 2820,
				"KeyWord": "xxx",
				"Label": "abuse",
				"Rate": "90.00",
				"StartTime": 2490
			}]
		}],
		"ScanStartTime": 1566720905,
		"Scenes": [
			"default"
		],
		"Status": "Success",
		"TaskId": "xxx",
		"Url": "https://xxx/xxx.m4a"
	}],
	"RequestId": "xxx"
}</code></pre>
                 * @param req ScanVoiceRequest
                 * @return ScanVoiceOutcome
                 */
                ScanVoiceOutcome ScanVoice(const Model::ScanVoiceRequest &request);
                void ScanVoiceAsync(const Model::ScanVoiceRequest& request, const ScanVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVoiceOutcomeCallable ScanVoiceCallable(const Model::ScanVoiceRequest& request);

                /**
                 *本接口用于识别涉黄、涉政等违规音频，成功会回调配置在应用的回调地址。回调示例如下：
{"BizId":0,"FileId":"test_file_id","FileName":"test_file_name","FileUrl":"test_file_url","OpenId":"test_open_id","TimeStamp":"0000-00-00 00:00:00","Data":[{"Type":1,"Word":"xx"}]}
Type表示过滤类型，1：政治，2：色情，3：谩骂
                 * @param req VoiceFilterRequest
                 * @return VoiceFilterOutcome
                 */
                VoiceFilterOutcome VoiceFilter(const Model::VoiceFilterRequest &request);
                void VoiceFilterAsync(const Model::VoiceFilterRequest& request, const VoiceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoiceFilterOutcomeCallable VoiceFilterCallable(const Model::VoiceFilterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

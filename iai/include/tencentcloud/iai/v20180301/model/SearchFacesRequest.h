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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESREQUEST_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESREQUEST_H_

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
                * SearchFaces请求参数结构体
                */
                class SearchFacesRequest : public AbstractModel
                {
                public:
                    SearchFacesRequest();
                    ~SearchFacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取希望搜索的人员库列表，上限100个。
                     * @return GroupIds 希望搜索的人员库列表，上限100个。
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置希望搜索的人员库列表，上限100个。
                     * @param GroupIds 希望搜索的人员库列表，上限100个。
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Image 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取最多识别的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     * @return MaxFaceNum 最多识别的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置最多识别的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     * @param MaxFaceNum 最多识别的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取人脸长和宽的最小尺寸，单位为像素。默认为80。低于40的人脸图片无法被识别。建议设置为80。
                     * @return MinFaceSize 人脸长和宽的最小尺寸，单位为像素。默认为80。低于40的人脸图片无法被识别。建议设置为80。
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置人脸长和宽的最小尺寸，单位为像素。默认为80。低于40的人脸图片无法被识别。建议设置为80。
                     * @param MinFaceSize 人脸长和宽的最小尺寸，单位为像素。默认为80。低于40的人脸图片无法被识别。建议设置为80。
                     */
                    void SetMinFaceSize(const uint64_t& _minFaceSize);

                    /**
                     * 判断参数 MinFaceSize 是否已赋值
                     * @return MinFaceSize 是否已赋值
                     */
                    bool MinFaceSizeHasBeenSet() const;

                    /**
                     * 获取单张被识别的人脸返回的最相似人员数量。默认值为5，最大值为100。 
例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
值越大，需要处理的时间越长。建议不要超过10。
                     * @return MaxPersonNum 单张被识别的人脸返回的最相似人员数量。默认值为5，最大值为100。 
例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
值越大，需要处理的时间越长。建议不要超过10。
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置单张被识别的人脸返回的最相似人员数量。默认值为5，最大值为100。 
例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
值越大，需要处理的时间越长。建议不要超过10。
                     * @param MaxPersonNum 单张被识别的人脸返回的最相似人员数量。默认值为5，最大值为100。 
例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
值越大，需要处理的时间越长。建议不要超过10。
                     */
                    void SetMaxPersonNum(const uint64_t& _maxPersonNum);

                    /**
                     * 判断参数 MaxPersonNum 是否已赋值
                     * @return MaxPersonNum 是否已赋值
                     */
                    bool MaxPersonNumHasBeenSet() const;

                    /**
                     * 获取是否返回人员具体信息。0 为关闭，1 为开启。默认为 0。其他非0非1值默认为0
                     * @return NeedPersonInfo 是否返回人员具体信息。0 为关闭，1 为开启。默认为 0。其他非0非1值默认为0
                     */
                    int64_t GetNeedPersonInfo() const;

                    /**
                     * 设置是否返回人员具体信息。0 为关闭，1 为开启。默认为 0。其他非0非1值默认为0
                     * @param NeedPersonInfo 是否返回人员具体信息。0 为关闭，1 为开启。默认为 0。其他非0非1值默认为0
                     */
                    void SetNeedPersonInfo(const int64_t& _needPersonInfo);

                    /**
                     * 判断参数 NeedPersonInfo 是否已赋值
                     * @return NeedPersonInfo 是否已赋值
                     */
                    bool NeedPersonInfoHasBeenSet() const;

                private:

                    /**
                     * 希望搜索的人员库列表，上限100个。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 最多识别的人脸数目。默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * 人脸长和宽的最小尺寸，单位为像素。默认为80。低于40的人脸图片无法被识别。建议设置为80。
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * 单张被识别的人脸返回的最相似人员数量。默认值为5，最大值为100。 
例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
值越大，需要处理的时间越长。建议不要超过10。
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

                    /**
                     * 是否返回人员具体信息。0 为关闭，1 为开启。默认为 0。其他非0非1值默认为0
                     */
                    int64_t m_needPersonInfo;
                    bool m_needPersonInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_SEARCHFACESREQUEST_H_

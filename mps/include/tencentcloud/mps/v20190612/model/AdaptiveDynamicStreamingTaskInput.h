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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 对视频转自适应码流的输入参数类型
                */
                class AdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTaskInput();
                    ~AdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转自适应码流模板 ID。
                     * @return Definition 转自适应码流模板 ID。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流模板 ID。
                     * @param Definition 转自适应码流模板 ID。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutputStorage 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}.{format}`。
                     * @return OutputObjectPath 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}.{format}`。
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}.{format}`。
                     * @param OutputObjectPath 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}.{format}`。
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取转自适应码流（HLS）后，二级 index 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}.{format}`。
                     * @return SubStreamManifestObjectName 转自适应码流（HLS）后，二级 index 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}.{format}`。
                     */
                    std::string GetSubStreamManifestObjectName() const;

                    /**
                     * 设置转自适应码流（HLS）后，二级 index 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}.{format}`。
                     * @param SubStreamManifestObjectName 转自适应码流（HLS）后，二级 index 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}.{format}`。
                     */
                    void SetSubStreamManifestObjectName(const std::string& _subStreamManifestObjectName);

                    /**
                     * 判断参数 SubStreamManifestObjectName 是否已赋值
                     * @return SubStreamManifestObjectName 是否已赋值
                     */
                    bool SubStreamManifestObjectNameHasBeenSet() const;

                    /**
                     * 获取转自适应码流后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}_{number}.{format}`。
                     * @return SegmentObjectName 转自适应码流后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}_{number}.{format}`。
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置转自适应码流后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}_{number}.{format}`。
                     * @param SegmentObjectName 转自适应码流后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}_{number}.{format}`。
                     */
                    void SetSegmentObjectName(const std::string& _segmentObjectName);

                    /**
                     * 判断参数 SegmentObjectName 是否已赋值
                     * @return SegmentObjectName 是否已赋值
                     */
                    bool SegmentObjectNameHasBeenSet() const;

                    /**
                     * 获取转自适应码流后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectNumberFormat 转自适应码流后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置转自适应码流后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ObjectNumberFormat 转自适应码流后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 转自适应码流后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 转自适应码流后，manifest 文件的输出路径，可以为相对路径或者绝对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}.{format}`。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * 转自适应码流（HLS）后，二级 index 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}.{format}`。
                     */
                    std::string m_subStreamManifestObjectName;
                    bool m_subStreamManifestObjectNameHasBeenSet;

                    /**
                     * 转自适应码流后，分片文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：`{inputName}_adaptiveDynamicStreaming_{definition}_{trackType}_{trackDefinition}_{number}.{format}`。
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * 转自适应码流后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

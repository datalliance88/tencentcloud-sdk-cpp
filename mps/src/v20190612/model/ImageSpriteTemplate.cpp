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

#include <tencentcloud/mps/v20190612/model/ImageSpriteTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

ImageSpriteTemplate::ImageSpriteTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_sampleIntervalHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageSpriteTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.SampleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleType = string(value["SampleType"].GetString());
        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("SampleInterval") && !value["SampleInterval"].IsNull())
    {
        if (!value["SampleInterval"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.SampleInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleInterval = value["SampleInterval"].GetUint64();
        m_sampleIntervalHasBeenSet = true;
    }

    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.RowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetUint64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("ColumnCount") && !value["ColumnCount"].IsNull())
    {
        if (!value["ColumnCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.ColumnCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnCount = value["ColumnCount"].GetUint64();
        m_columnCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSpriteTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSpriteTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleInterval, allocator);
    }

    if (m_rowCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_columnCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageSpriteTemplate::GetDefinition() const
{
    return m_definition;
}

void ImageSpriteTemplate::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ImageSpriteTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ImageSpriteTemplate::GetType() const
{
    return m_type;
}

void ImageSpriteTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageSpriteTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageSpriteTemplate::GetName() const
{
    return m_name;
}

void ImageSpriteTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageSpriteTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ImageSpriteTemplate::GetWidth() const
{
    return m_width;
}

void ImageSpriteTemplate::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageSpriteTemplate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ImageSpriteTemplate::GetHeight() const
{
    return m_height;
}

void ImageSpriteTemplate::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageSpriteTemplate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ImageSpriteTemplate::GetSampleType() const
{
    return m_sampleType;
}

void ImageSpriteTemplate::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool ImageSpriteTemplate::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

uint64_t ImageSpriteTemplate::GetSampleInterval() const
{
    return m_sampleInterval;
}

void ImageSpriteTemplate::SetSampleInterval(const uint64_t& _sampleInterval)
{
    m_sampleInterval = _sampleInterval;
    m_sampleIntervalHasBeenSet = true;
}

bool ImageSpriteTemplate::SampleIntervalHasBeenSet() const
{
    return m_sampleIntervalHasBeenSet;
}

uint64_t ImageSpriteTemplate::GetRowCount() const
{
    return m_rowCount;
}

void ImageSpriteTemplate::SetRowCount(const uint64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool ImageSpriteTemplate::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

uint64_t ImageSpriteTemplate::GetColumnCount() const
{
    return m_columnCount;
}

void ImageSpriteTemplate::SetColumnCount(const uint64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool ImageSpriteTemplate::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

string ImageSpriteTemplate::GetCreateTime() const
{
    return m_createTime;
}

void ImageSpriteTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ImageSpriteTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ImageSpriteTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageSpriteTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageSpriteTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


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

#include <tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

CreateWorkflowRequest::CreateWorkflowRequest() :
    m_workflowNameHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_taskPriorityHasBeenSet(false)
{
}

string CreateWorkflowRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workflowNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaProcessTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaProcessTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaProcessTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskPriorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskPriority, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkflowRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void CreateWorkflowRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool CreateWorkflowRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

WorkflowTrigger CreateWorkflowRequest::GetTrigger() const
{
    return m_trigger;
}

void CreateWorkflowRequest::SetTrigger(const WorkflowTrigger& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool CreateWorkflowRequest::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

TaskOutputStorage CreateWorkflowRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void CreateWorkflowRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool CreateWorkflowRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string CreateWorkflowRequest::GetOutputDir() const
{
    return m_outputDir;
}

void CreateWorkflowRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool CreateWorkflowRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

MediaProcessTaskInput CreateWorkflowRequest::GetMediaProcessTask() const
{
    return m_mediaProcessTask;
}

void CreateWorkflowRequest::SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask)
{
    m_mediaProcessTask = _mediaProcessTask;
    m_mediaProcessTaskHasBeenSet = true;
}

bool CreateWorkflowRequest::MediaProcessTaskHasBeenSet() const
{
    return m_mediaProcessTaskHasBeenSet;
}

TaskNotifyConfig CreateWorkflowRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void CreateWorkflowRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool CreateWorkflowRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t CreateWorkflowRequest::GetTaskPriority() const
{
    return m_taskPriority;
}

void CreateWorkflowRequest::SetTaskPriority(const int64_t& _taskPriority)
{
    m_taskPriority = _taskPriority;
    m_taskPriorityHasBeenSet = true;
}

bool CreateWorkflowRequest::TaskPriorityHasBeenSet() const
{
    return m_taskPriorityHasBeenSet;
}



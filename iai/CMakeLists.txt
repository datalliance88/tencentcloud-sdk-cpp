#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(iai_public_header
  include/tencentcloud/iai/v20180301/IaiClient.h
  )

set(iai_public_header_model
  include/tencentcloud/iai/v20180301/model/GetPersonGroupInfoResponse.h
  include/tencentcloud/iai/v20180301/model/Candidate.h
  include/tencentcloud/iai/v20180301/model/ModifyGroupResponse.h
  include/tencentcloud/iai/v20180301/model/DeletePersonRequest.h
  include/tencentcloud/iai/v20180301/model/DetectLiveFaceResponse.h
  include/tencentcloud/iai/v20180301/model/DeleteFaceRequest.h
  include/tencentcloud/iai/v20180301/model/ModifyPersonBaseInfoResponse.h
  include/tencentcloud/iai/v20180301/model/GetGroupListResponse.h
  include/tencentcloud/iai/v20180301/model/GroupInfo.h
  include/tencentcloud/iai/v20180301/model/GetPersonListResponse.h
  include/tencentcloud/iai/v20180301/model/FaceQualityCompleteness.h
  include/tencentcloud/iai/v20180301/model/FaceAttributesInfo.h
  include/tencentcloud/iai/v20180301/model/PersonGroupInfo.h
  include/tencentcloud/iai/v20180301/model/ModifyGroupRequest.h
  include/tencentcloud/iai/v20180301/model/CreatePersonRequest.h
  include/tencentcloud/iai/v20180301/model/DeleteGroupRequest.h
  include/tencentcloud/iai/v20180301/model/CreateFaceResponse.h
  include/tencentcloud/iai/v20180301/model/ModifyPersonBaseInfoRequest.h
  include/tencentcloud/iai/v20180301/model/CompareFaceResponse.h
  include/tencentcloud/iai/v20180301/model/PersonExDescriptionInfo.h
  include/tencentcloud/iai/v20180301/model/DetectLiveFaceRequest.h
  include/tencentcloud/iai/v20180301/model/VerifyFaceResponse.h
  include/tencentcloud/iai/v20180301/model/GetPersonBaseInfoResponse.h
  include/tencentcloud/iai/v20180301/model/CreateFaceRequest.h
  include/tencentcloud/iai/v20180301/model/CreateGroupRequest.h
  include/tencentcloud/iai/v20180301/model/ModifyPersonGroupInfoRequest.h
  include/tencentcloud/iai/v20180301/model/GetPersonGroupInfoRequest.h
  include/tencentcloud/iai/v20180301/model/Result.h
  include/tencentcloud/iai/v20180301/model/FaceInfo.h
  include/tencentcloud/iai/v20180301/model/DeleteGroupResponse.h
  include/tencentcloud/iai/v20180301/model/FaceQualityInfo.h
  include/tencentcloud/iai/v20180301/model/CompareFaceRequest.h
  include/tencentcloud/iai/v20180301/model/PersonInfo.h
  include/tencentcloud/iai/v20180301/model/FaceShape.h
  include/tencentcloud/iai/v20180301/model/DetectFaceResponse.h
  include/tencentcloud/iai/v20180301/model/CopyPersonRequest.h
  include/tencentcloud/iai/v20180301/model/GetPersonListNumRequest.h
  include/tencentcloud/iai/v20180301/model/DeletePersonFromGroupResponse.h
  include/tencentcloud/iai/v20180301/model/AnalyzeFaceResponse.h
  include/tencentcloud/iai/v20180301/model/GetGroupListRequest.h
  include/tencentcloud/iai/v20180301/model/FaceHairAttributesInfo.h
  include/tencentcloud/iai/v20180301/model/AnalyzeFaceRequest.h
  include/tencentcloud/iai/v20180301/model/Point.h
  include/tencentcloud/iai/v20180301/model/DetectFaceRequest.h
  include/tencentcloud/iai/v20180301/model/CreatePersonResponse.h
  include/tencentcloud/iai/v20180301/model/GetPersonBaseInfoRequest.h
  include/tencentcloud/iai/v20180301/model/SearchFacesResponse.h
  include/tencentcloud/iai/v20180301/model/GroupExDescriptionInfo.h
  include/tencentcloud/iai/v20180301/model/VerifyFaceRequest.h
  include/tencentcloud/iai/v20180301/model/CopyPersonResponse.h
  include/tencentcloud/iai/v20180301/model/GetPersonListNumResponse.h
  include/tencentcloud/iai/v20180301/model/GetPersonListRequest.h
  include/tencentcloud/iai/v20180301/model/DeleteFaceResponse.h
  include/tencentcloud/iai/v20180301/model/DeletePersonResponse.h
  include/tencentcloud/iai/v20180301/model/FaceRect.h
  include/tencentcloud/iai/v20180301/model/ModifyPersonGroupInfoResponse.h
  include/tencentcloud/iai/v20180301/model/SearchFacesRequest.h
  include/tencentcloud/iai/v20180301/model/DeletePersonFromGroupRequest.h
  include/tencentcloud/iai/v20180301/model/CreateGroupResponse.h
  )

set(iai_src
  src/v20180301/IaiClient.cpp
  src/v20180301/model/GetPersonGroupInfoResponse.cpp
  src/v20180301/model/Candidate.cpp
  src/v20180301/model/ModifyGroupResponse.cpp
  src/v20180301/model/DeletePersonRequest.cpp
  src/v20180301/model/DetectLiveFaceResponse.cpp
  src/v20180301/model/DeleteFaceRequest.cpp
  src/v20180301/model/ModifyPersonBaseInfoResponse.cpp
  src/v20180301/model/GetGroupListResponse.cpp
  src/v20180301/model/GroupInfo.cpp
  src/v20180301/model/GetPersonListResponse.cpp
  src/v20180301/model/FaceQualityCompleteness.cpp
  src/v20180301/model/FaceAttributesInfo.cpp
  src/v20180301/model/PersonGroupInfo.cpp
  src/v20180301/model/ModifyGroupRequest.cpp
  src/v20180301/model/CreatePersonRequest.cpp
  src/v20180301/model/DeleteGroupRequest.cpp
  src/v20180301/model/CreateFaceResponse.cpp
  src/v20180301/model/ModifyPersonBaseInfoRequest.cpp
  src/v20180301/model/CompareFaceResponse.cpp
  src/v20180301/model/PersonExDescriptionInfo.cpp
  src/v20180301/model/DetectLiveFaceRequest.cpp
  src/v20180301/model/VerifyFaceResponse.cpp
  src/v20180301/model/GetPersonBaseInfoResponse.cpp
  src/v20180301/model/CreateFaceRequest.cpp
  src/v20180301/model/CreateGroupRequest.cpp
  src/v20180301/model/ModifyPersonGroupInfoRequest.cpp
  src/v20180301/model/GetPersonGroupInfoRequest.cpp
  src/v20180301/model/Result.cpp
  src/v20180301/model/FaceInfo.cpp
  src/v20180301/model/DeleteGroupResponse.cpp
  src/v20180301/model/FaceQualityInfo.cpp
  src/v20180301/model/CompareFaceRequest.cpp
  src/v20180301/model/PersonInfo.cpp
  src/v20180301/model/FaceShape.cpp
  src/v20180301/model/DetectFaceResponse.cpp
  src/v20180301/model/CopyPersonRequest.cpp
  src/v20180301/model/GetPersonListNumRequest.cpp
  src/v20180301/model/DeletePersonFromGroupResponse.cpp
  src/v20180301/model/AnalyzeFaceResponse.cpp
  src/v20180301/model/GetGroupListRequest.cpp
  src/v20180301/model/FaceHairAttributesInfo.cpp
  src/v20180301/model/AnalyzeFaceRequest.cpp
  src/v20180301/model/Point.cpp
  src/v20180301/model/DetectFaceRequest.cpp
  src/v20180301/model/CreatePersonResponse.cpp
  src/v20180301/model/GetPersonBaseInfoRequest.cpp
  src/v20180301/model/SearchFacesResponse.cpp
  src/v20180301/model/GroupExDescriptionInfo.cpp
  src/v20180301/model/VerifyFaceRequest.cpp
  src/v20180301/model/CopyPersonResponse.cpp
  src/v20180301/model/GetPersonListNumResponse.cpp
  src/v20180301/model/GetPersonListRequest.cpp
  src/v20180301/model/DeleteFaceResponse.cpp
  src/v20180301/model/DeletePersonResponse.cpp
  src/v20180301/model/FaceRect.cpp
  src/v20180301/model/ModifyPersonGroupInfoResponse.cpp
  src/v20180301/model/SearchFacesRequest.cpp
  src/v20180301/model/DeletePersonFromGroupRequest.cpp
  src/v20180301/model/CreateGroupResponse.cpp
  )

set(iai_include
    include/tencentcloud/iai
  )

add_library(iai ${LIB_TYPE}
  ${iai_public_header}
  ${iai_public_header_model}
  ${iai_src})

set_target_properties(iai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iai
  )

target_include_directories(iai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iai
  core)

#install(FILES ${iai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iai/v20180301)
#install(FILES ${iai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iai/v20180301/model)
install(DIRECTORY ${iai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERSCRIPTREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateClusterScriptRequest : public RpcServiceRequest
			{

			public:
				CreateClusterScriptRequest();
				~CreateClusterScriptRequest();

				std::string getArgs()const;
				void setArgs(const std::string& args);
				std::string getPath()const;
				void setPath(const std::string& path);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getNodeIdList()const;
				void setNodeIdList(const std::string& nodeIdList);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string args_;
				std::string path_;
				long resourceOwnerId_;
				std::string regionId_;
				std::string name_;
				std::string clusterId_;
				std::string nodeIdList_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERSCRIPTREQUEST_H_
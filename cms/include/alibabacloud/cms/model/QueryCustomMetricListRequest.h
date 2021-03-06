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

#ifndef ALIBABACLOUD_CMS_MODEL_QUERYCUSTOMMETRICLISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_QUERYCUSTOMMETRICLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT QueryCustomMetricListRequest : public RpcServiceRequest
			{

			public:
				QueryCustomMetricListRequest();
				~QueryCustomMetricListRequest();

				std::string getSize()const;
				void setSize(const std::string& size);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getPage()const;
				void setPage(const std::string& page);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getDimension()const;
				void setDimension(const std::string& dimension);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getMd5()const;
				void setMd5(const std::string& md5);

            private:
				std::string size_;
				std::string groupId_;
				std::string page_;
				std::string metricName_;
				std::string dimension_;
				std::string accessKeyId_;
				std::string md5_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_QUERYCUSTOMMETRICLISTREQUEST_H_
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

#ifndef ALIBABACLOUD_CSB_MODEL_GETORDERRESULT_H_
#define ALIBABACLOUD_CSB_MODEL_GETORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT GetOrderResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Order
					{
						struct Service
						{
							std::string projectName;
							std::string ownerId;
							std::string consumeTypesJSON;
							bool skipAuth;
							bool ottFlag;
							std::string interfaceName;
							int status;
							std::string statisticName;
							std::string errDefJSON;
							long createTime;
							long csbId;
							std::string projectId;
							std::string principalName;
							std::string accessParamsJSON;
							bool sSL;
							bool active;
							std::string serviceProviderType;
							std::string scope;
							bool allVisiable;
							std::string serviceName;
							std::string alias;
							std::string provideType;
							long userId;
							std::string serviceVersion;
							std::string oldVersion;
							bool validConsumeTypes;
							long id;
							bool validProvideType;
						};
						struct SlaInfo
						{
							std::string qps;
							std::string qph;
						};
						struct Total
						{
							int total;
							int errorNum;
						};
						struct ErrorTypeCatagory
						{
							int total;
							int errorNum;
							std::string name;
						};
						std::vector<ErrorTypeCatagory> errorTypeCatagoryList;
						std::string groupName;
						int status;
						std::string statisticName;
						long credentialGroupId;
						std::string projectName;
						long csbId;
						long gmtModified;
						Service service;
						long serviceId;
						long gmtCreate;
						std::string serviceName;
						std::string alias;
						int serviceStatus;
						std::string userId;
						Total total;
						std::string serviceVersion;
						std::string strictWhiteListJson;
						long id;
						SlaInfo slaInfo;
						std::vector<std::string> strictWhiteList;
						std::string dauthGroupName;
					};
					Order order;
				};


				GetOrderResult();
				explicit GetOrderResult(const std::string &payload);
				~GetOrderResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_GETORDERRESULT_H_
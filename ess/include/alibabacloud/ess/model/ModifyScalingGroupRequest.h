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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT ModifyScalingGroupRequest : public RpcServiceRequest
			{

			public:
				ModifyScalingGroupRequest();
				~ModifyScalingGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHealthCheckType()const;
				void setHealthCheckType(const std::string& healthCheckType);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupName()const;
				void setScalingGroupName(const std::string& scalingGroupName);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::vector<std::string> getVSwitchIds()const;
				void setVSwitchIds(const std::vector<std::string>& vSwitchIds);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getActiveScalingConfigurationId()const;
				void setActiveScalingConfigurationId(const std::string& activeScalingConfigurationId);
				int getMinSize()const;
				void setMinSize(int minSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getMaxSize()const;
				void setMaxSize(int maxSize);
				int getDefaultCooldown()const;
				void setDefaultCooldown(int defaultCooldown);
				std::string getRemovalPolicy1()const;
				void setRemovalPolicy1(const std::string& removalPolicy1);
				std::string getRemovalPolicy2()const;
				void setRemovalPolicy2(const std::string& removalPolicy2);

            private:
				long resourceOwnerId_;
				std::string healthCheckType_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupName_;
				std::string scalingGroupId_;
				std::vector<std::string> vSwitchIds_;
				std::string ownerAccount_;
				std::string activeScalingConfigurationId_;
				int minSize_;
				long ownerId_;
				std::string launchTemplateVersion_;
				std::string accessKeyId_;
				int maxSize_;
				int defaultCooldown_;
				std::string removalPolicy1_;
				std::string removalPolicy2_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_
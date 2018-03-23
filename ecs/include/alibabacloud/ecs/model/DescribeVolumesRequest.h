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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeVolumesRequest : public RpcServiceRequest
			{

			public:
				DescribeVolumesRequest();
				~DescribeVolumesRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getAutoSnapshotPolicyId()const;
				void setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
				std::string getLockReason()const;
				void setLockReason(const std::string& lockReason);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getEnableAutomatedSnapshotPolicy()const;
				void setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);
				std::string getVolumeIds()const;
				void setVolumeIds(const std::string& volumeIds);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string tag2Key_;
				std::string autoSnapshotPolicyId_;
				std::string tag3Key_;
				int pageNumber_;
				std::string tag1Value_;
				std::string lockReason_;
				std::string regionId_;
				int pageSize_;
				std::string tag3Value_;
				std::string tag5Key_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				bool enableAutomatedSnapshotPolicy_;
				long ownerId_;
				std::string tag5Value_;
				std::string tag1Key_;
				std::string instanceId_;
				std::string tag2Value_;
				std::string zoneId_;
				std::string tag4Key_;
				std::string volumeIds_;
				std::string category_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVOLUMESREQUEST_H_
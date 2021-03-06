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

#include <alibabacloud/rds/model/DescibeImportsFromDatabaseRequest.h>

using AlibabaCloud::Rds::Model::DescibeImportsFromDatabaseRequest;

DescibeImportsFromDatabaseRequest::DescibeImportsFromDatabaseRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescibeImportsFromDatabase")
{}

DescibeImportsFromDatabaseRequest::~DescibeImportsFromDatabaseRequest()
{}

long DescibeImportsFromDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescibeImportsFromDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescibeImportsFromDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescibeImportsFromDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescibeImportsFromDatabaseRequest::getClientToken()const
{
	return clientToken_;
}

void DescibeImportsFromDatabaseRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescibeImportsFromDatabaseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescibeImportsFromDatabaseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescibeImportsFromDatabaseRequest::getEndTime()const
{
	return endTime_;
}

void DescibeImportsFromDatabaseRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescibeImportsFromDatabaseRequest::getStartTime()const
{
	return startTime_;
}

void DescibeImportsFromDatabaseRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescibeImportsFromDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void DescibeImportsFromDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescibeImportsFromDatabaseRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescibeImportsFromDatabaseRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescibeImportsFromDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescibeImportsFromDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescibeImportsFromDatabaseRequest::getImportId()const
{
	return importId_;
}

void DescibeImportsFromDatabaseRequest::setImportId(int importId)
{
	importId_ = importId;
	setParameter("ImportId", std::to_string(importId));
}

std::string DescibeImportsFromDatabaseRequest::getEngine()const
{
	return engine_;
}

void DescibeImportsFromDatabaseRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

int DescibeImportsFromDatabaseRequest::getPageSize()const
{
	return pageSize_;
}

void DescibeImportsFromDatabaseRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescibeImportsFromDatabaseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescibeImportsFromDatabaseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}


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

#include <alibabacloud/emr/model/MetastoreDropTableRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDropTableRequest;

MetastoreDropTableRequest::MetastoreDropTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDropTable")
{}

MetastoreDropTableRequest::~MetastoreDropTableRequest()
{}

long MetastoreDropTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDropTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreDropTableRequest::getDbName()const
{
	return dbName_;
}

void MetastoreDropTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string MetastoreDropTableRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDropTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MetastoreDropTableRequest::getTableId()const
{
	return tableId_;
}

void MetastoreDropTableRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setParameter("TableId", tableId);
}

std::string MetastoreDropTableRequest::getTableName()const
{
	return tableName_;
}

void MetastoreDropTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string MetastoreDropTableRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreDropTableRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setParameter("DatabaseId", databaseId);
}

std::string MetastoreDropTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDropTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


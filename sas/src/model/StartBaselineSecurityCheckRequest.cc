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

#include <alibabacloud/sas/model/StartBaselineSecurityCheckRequest.h>

using AlibabaCloud::Sas::Model::StartBaselineSecurityCheckRequest;

StartBaselineSecurityCheckRequest::StartBaselineSecurityCheckRequest() :
	RpcServiceRequest("sas", "2018-12-03", "StartBaselineSecurityCheck")
{}

StartBaselineSecurityCheckRequest::~StartBaselineSecurityCheckRequest()
{}

long StartBaselineSecurityCheckRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartBaselineSecurityCheckRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> StartBaselineSecurityCheckRequest::getAssets()const
{
	return assets_;
}

void StartBaselineSecurityCheckRequest::setAssets(const std::vector<std::string>& assets)
{
	assets_ = assets;
	for(int i = 0; i!= assets.size(); i++)
		setCoreParameter("Assets."+ std::to_string(i), assets.at(i));
}

std::string StartBaselineSecurityCheckRequest::getSourceIp()const
{
	return sourceIp_;
}

void StartBaselineSecurityCheckRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::vector<long> StartBaselineSecurityCheckRequest::getItemIds()const
{
	return itemIds_;
}

void StartBaselineSecurityCheckRequest::setItemIds(const std::vector<long>& itemIds)
{
	itemIds_ = itemIds;
	for(int i = 0; i!= itemIds.size(); i++)
		setCoreParameter("ItemIds."+ std::to_string(i), std::to_string(itemIds.at(i)));
}

std::string StartBaselineSecurityCheckRequest::getLang()const
{
	return lang_;
}

void StartBaselineSecurityCheckRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string StartBaselineSecurityCheckRequest::getType()const
{
	return type_;
}

void StartBaselineSecurityCheckRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}


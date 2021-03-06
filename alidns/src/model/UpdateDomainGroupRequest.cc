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

#include <alibabacloud/alidns/model/UpdateDomainGroupRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDomainGroupRequest;

UpdateDomainGroupRequest::UpdateDomainGroupRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UpdateDomainGroup")
{}

UpdateDomainGroupRequest::~UpdateDomainGroupRequest()
{}

std::string UpdateDomainGroupRequest::getGroupId()const
{
	return groupId_;
}

void UpdateDomainGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string UpdateDomainGroupRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateDomainGroupRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string UpdateDomainGroupRequest::getLang()const
{
	return lang_;
}

void UpdateDomainGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string UpdateDomainGroupRequest::getGroupName()const
{
	return groupName_;
}

void UpdateDomainGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string UpdateDomainGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDomainGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


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

#include <alibabacloud/alidns/model/DescribeDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainsRequest;

DescribeDomainsRequest::DescribeDomainsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDomains")
{}

DescribeDomainsRequest::~DescribeDomainsRequest()
{}

std::string DescribeDomainsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDomainsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeDomainsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDomainsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

long DescribeDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainsRequest::getSearchMode()const
{
	return searchMode_;
}

void DescribeDomainsRequest::setSearchMode(const std::string& searchMode)
{
	searchMode_ = searchMode;
	setParameter("SearchMode", searchMode);
}

std::string DescribeDomainsRequest::getLang()const
{
	return lang_;
}

void DescribeDomainsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDomainsRequest::getKeyWord()const
{
	return keyWord_;
}

void DescribeDomainsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

long DescribeDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}


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

#include <alibabacloud/sas-api/model/DescribeThreatDistributeRequest.h>

using AlibabaCloud::Sas_api::Model::DescribeThreatDistributeRequest;

DescribeThreatDistributeRequest::DescribeThreatDistributeRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "DescribeThreatDistribute")
{}

DescribeThreatDistributeRequest::~DescribeThreatDistributeRequest()
{}

std::string DescribeThreatDistributeRequest::getEndDate()const
{
	return endDate_;
}

void DescribeThreatDistributeRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeThreatDistributeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeThreatDistributeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeThreatDistributeRequest::getHitDay()const
{
	return hitDay_;
}

void DescribeThreatDistributeRequest::setHitDay(int hitDay)
{
	hitDay_ = hitDay;
	setParameter("HitDay", std::to_string(hitDay));
}

std::string DescribeThreatDistributeRequest::getStartDate()const
{
	return startDate_;
}

void DescribeThreatDistributeRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

int DescribeThreatDistributeRequest::getApiType()const
{
	return apiType_;
}

void DescribeThreatDistributeRequest::setApiType(int apiType)
{
	apiType_ = apiType;
	setParameter("ApiType", std::to_string(apiType));
}


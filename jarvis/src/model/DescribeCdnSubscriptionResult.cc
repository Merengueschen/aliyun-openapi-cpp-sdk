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

#include <alibabacloud/jarvis/model/DescribeCdnSubscriptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeCdnSubscriptionResult::DescribeCdnSubscriptionResult() :
	ServiceResult()
{}

DescribeCdnSubscriptionResult::DescribeCdnSubscriptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnSubscriptionResult::~DescribeCdnSubscriptionResult()
{}

void DescribeCdnSubscriptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDataList = value["DataList"]["Data"];
	for (auto value : allDataList)
	{
		Data dataListObject;
		if(!value["VendorAliuid"].isNull())
			dataListObject.vendorAliuid = std::stoi(value["VendorAliuid"].asString());
		if(!value["VendorName"].isNull())
			dataListObject.vendorName = value["VendorName"].asString();
		if(!value["SafetyFactor"].isNull())
			dataListObject.safetyFactor = value["SafetyFactor"].asString();
		if(!value["SubscriptionState"].isNull())
			dataListObject.subscriptionState = std::stoi(value["SubscriptionState"].asString());
		if(!value["GmtCreate"].isNull())
			dataListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["UpdateTime"].isNull())
			dataListObject.updateTime = value["UpdateTime"].asString();
		dataList_.push_back(dataListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["total"].isNull())
		pageInfo_.total = std::stoi(pageInfoNode["total"].asString());
	if(!pageInfoNode["pageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["pageSize"].asString());
	if(!pageInfoNode["currentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["currentPage"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeCdnSubscriptionResult::Data> DescribeCdnSubscriptionResult::getDataList()const
{
	return dataList_;
}

DescribeCdnSubscriptionResult::PageInfo DescribeCdnSubscriptionResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeCdnSubscriptionResult::getModule()const
{
	return module_;
}


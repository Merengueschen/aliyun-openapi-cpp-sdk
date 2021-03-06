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

#include <alibabacloud/iot/model/QueryDeviceByTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceByTagsResult::QueryDeviceByTagsResult() :
	ServiceResult()
{}

QueryDeviceByTagsResult::QueryDeviceByTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceByTagsResult::~QueryDeviceByTagsResult()
{}

void QueryDeviceByTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["SimpleDeviceInfo"];
	for (auto value : allData)
	{
		SimpleDeviceInfo dataObject;
		if(!value["ProductName"].isNull())
			dataObject.productName = value["ProductName"].asString();
		if(!value["ProductKey"].isNull())
			dataObject.productKey = value["ProductKey"].asString();
		if(!value["DeviceName"].isNull())
			dataObject.deviceName = value["DeviceName"].asString();
		if(!value["IotId"].isNull())
			dataObject.iotId = value["IotId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int QueryDeviceByTagsResult::getPageSize()const
{
	return pageSize_;
}

int QueryDeviceByTagsResult::getPageCount()const
{
	return pageCount_;
}

int QueryDeviceByTagsResult::getTotal()const
{
	return total_;
}

std::vector<QueryDeviceByTagsResult::SimpleDeviceInfo> QueryDeviceByTagsResult::getData()const
{
	return data_;
}

int QueryDeviceByTagsResult::getPage()const
{
	return page_;
}

std::string QueryDeviceByTagsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceByTagsResult::getCode()const
{
	return code_;
}

bool QueryDeviceByTagsResult::getSuccess()const
{
	return success_;
}


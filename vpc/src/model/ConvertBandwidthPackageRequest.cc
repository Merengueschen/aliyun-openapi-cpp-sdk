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

#include <alibabacloud/vpc/model/ConvertBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::ConvertBandwidthPackageRequest;

ConvertBandwidthPackageRequest::ConvertBandwidthPackageRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ConvertBandwidthPackage")
{}

ConvertBandwidthPackageRequest::~ConvertBandwidthPackageRequest()
{}

long ConvertBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ConvertBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ConvertBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void ConvertBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long ConvertBandwidthPackageRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ConvertBandwidthPackageRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ConvertBandwidthPackageRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ConvertBandwidthPackageRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ConvertBandwidthPackageRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ConvertBandwidthPackageRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ConvertBandwidthPackageRequest::getCallerType()const
{
	return callerType_;
}

void ConvertBandwidthPackageRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ConvertBandwidthPackageRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ConvertBandwidthPackageRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ConvertBandwidthPackageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConvertBandwidthPackageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConvertBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void ConvertBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConvertBandwidthPackageRequest::getSecurityToken()const
{
	return securityToken_;
}

void ConvertBandwidthPackageRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool ConvertBandwidthPackageRequest::getEnable()const
{
	return enable_;
}

void ConvertBandwidthPackageRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ConvertBandwidthPackageRequest::getRequestContent()const
{
	return requestContent_;
}

void ConvertBandwidthPackageRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ConvertBandwidthPackageRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ConvertBandwidthPackageRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ConvertBandwidthPackageRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ConvertBandwidthPackageRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ConvertBandwidthPackageRequest::getCallerUid()const
{
	return callerUid_;
}

void ConvertBandwidthPackageRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ConvertBandwidthPackageRequest::getApp_ip()const
{
	return app_ip_;
}

void ConvertBandwidthPackageRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ConvertBandwidthPackageRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ConvertBandwidthPackageRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string ConvertBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ConvertBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ConvertBandwidthPackageRequest::getCallerBid()const
{
	return callerBid_;
}

void ConvertBandwidthPackageRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ConvertBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void ConvertBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ConvertBandwidthPackageRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ConvertBandwidthPackageRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ConvertBandwidthPackageRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ConvertBandwidthPackageRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ConvertBandwidthPackageRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ConvertBandwidthPackageRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ConvertBandwidthPackageRequest::getRequestId()const
{
	return requestId_;
}

void ConvertBandwidthPackageRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


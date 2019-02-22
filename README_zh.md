# 阿里云开发者C++工具套件

[![Build Status](https://travis-ci.org/aliyun/aliyun-openapi-cpp-sdk.svg?branch=master)](https://travis-ci.org/aliyun/aliyun-openapi-cpp-sdk)
[![codecov](https://codecov.io/gh/aliyun/aliyun-openapi-cpp-sdk/branch/master/graph/badge.svg)](https://codecov.io/gh/aliyun/aliyun-openapi-cpp-sdk)

欢迎使用阿里云开发者工具套件（SDK）。

适用于阿里云的 C++ SDK 提供了一组现代化的 C++（C++ 11 或更高版本）接口，让您不用复杂编程即可访问云服务器、云监控等多个阿里云服务。

如果您在使用SDK的过程中遇到任何问题，欢迎前往[阿里云SDK问答社区](https://yq.aliyun.com/tags/type_ask-tagid_23350)提问，提问前请阅读[提问引导](https://help.aliyun.com/document_detail/93957.html)。亦可在当前 GitHub [提交 Issues](https://github.com/aliyun/aliyun-openapi-cpp-sdk/issues/new)。

完成本文档中的操作开始使用 C++ SDK。

## 前提条件

在使用 C++ SDK 前，确保您已经：

* 注册了阿里云账号并获取了访问密钥（AccessKey）。

> **说明：** 为了保证您的账号安全，建议您使用RAM账号来访问阿里云服务。阿里云账号对拥有的资源有全部权限。RAM账号由阿里云账号授权创建，仅有对特定资源限定的操作权限。详情[参见RAM](https://help.aliyun.com/document_detail/28647.html)。

* 开通了云产品服务。有些云产品如对象存储（OSS）需要先在[阿里云控制台](https://home.console.aliyun.com)开通服务。

* 安装支持 C++ 11 或更高版本的编译器：
	* Windows: Visual Studio 2015 或以上版本
	* Linux: GCC 4.9 或以上版本

* 安装 CMake 3.0 或以上版本
* 建议 4G 或以上内存

## 从源代码构建 SDK

1. 从 GitHub 下载或 Git 克隆 [aliyun-openapi-cpp-sdk](https://github.com/aliyun/aliyun-openapi-cpp-sdk)

* 直接下载 https://github.com/aliyun/aliyun-openapi-cpp-sdk/archive/master.zip
* 使用 Git 命令获取

```
git clone https://github.com/aliyun/aliyun-openapi-cpp-sdk.git
```

2. 创建生成必要的构建文件

```bash
cd <path/to/aliyun-openapi-cpp-sdk>
mkdir sdk_build
cd sdk_build
cmake ..
```

### Linux

要在 Linux 平台进行编译, 您必须安装依赖的外部库文件 libcurl、libopenssl、libuuid、libjsoncpp, 通常情况下，系统的包管理器中的会有提供。

例如：在基于 Redhat / Fedora 的系统上安装这些软件包

```bash
sudo dnf install libcurl-devel openssl-devel libuuid-devel libjsoncpp-devel
```

在基于 Debian/Ubuntu 的系统
```bash
sudo apt-get install libcurl4-openssl-dev libssl-dev uuid-dev libjsoncpp-dev
```

在安装依赖库后执行以下命令编译并安装：

手动编译安装
```bash
  cd aliyun-openapi-cpp-sdk
  mkdir sdk_build
  cd sdk_build
  cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr ..
  make
  sudo make install
```

或者通过 `easyinstall.sh`一键式安装

```bash
  cd aliyun-openapi-cpp-sdk
  sudo sh easyinstall.sh
```

**C++ SDK 将被安装在 `/usr`.**


### Windows

通过 cmake 生成 Visual Studio 解决方案:

在 aliyun-openapi-cpp-sdk 下创建 sdk_build 目录

打开 cmake-ui 选择源代码目录和构建目录，点击 `配置(configure)` 和 `生成(generate)` 构建 VS 解决方案。

进入 sdk_build 目录使用 Visual Studio 打开 alibabacloud-sdk.sln 解决方案。

选择构建 `Release` 输出，并打开配置管理器勾选 `INSTALL`。

构建 -> 生成解决方案。

或者您也可以使用 VS 的开发人员命令提示符，执行以下命令编译并安装：

```
msbuild ALL_BUILD.vcxproj
msbuild INSTALL.vcxproj
```

**C++ SDK 将安装在 `C:\Program File (x86)\alibabacloud-sdk` 目录**

**注意：请以管理员身份运行 Visual Studio，否则无法安装 SDK**

## 如何使用 C++ SDK

在调用 C++ SDK时，您首先需要配置预处理器定义 ALIBABACLOUD_SHARED 以引用阿里云 C++ SDK 的共享库，然后通过创建 Client 实例提供身份验证，并指定云服务的地域，然后发送API请求。

以下代码展示了如何调用 DescribeInstancesAPI 查询指定地域所有 ECS 实例的详细信息。

> **说明：** 您需要替换示例中的 your-region-id、your-access-key-id 和 your-access-key-secret 的值。

```
#include <iostream>
#include <alibabacloud/core/AlibabaCloud.h>
#include <alibabacloud/ecs/EcsClient.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Ecs;

int main(int argc, char** argv) {
  // 初始化 SDK
  AlibabaCloud::InitializeSdk();

  // 配置 ecs 实例
  ClientConfiguration configuration("<your-region-id>");
  EcsClient client("<your-access-key-id>", "<your-access-key-secret>", configuration);

  // 创建API请求并设置参数
  Model::DescribeInstancesRequest request;
  request.setPageSize(10);

  auto outcome = client.describeInstances(request);
  if (!outcome.isSuccess()) {
    // 异常处理
    std::cout << outcome.error().errorCode() << std::endl;
    AlibabaCloud::ShutdownSdk();
    return -1;
  }

  std::cout << "totalCount: " << outcome.result().getTotalCount() << std::endl;

  // 关闭 SDK
  AlibabaCloud::ShutdownSdk();
  return 0;
}
```

复制上述文件到 ecs_test.cc。

Linux 下

```bash
~$ g++ -o ecstest ecs_test.cc --std=c++11 -lalibabacloud-sdk-core -l alibabacloud-sdk-ecs
~$ ./ecstest
# 结果或错误返回将在此展示
~$
```

**更多 [例程](https://github.com/aliyun/aliyun-openapi-cpp-sdk/tree/master/examples) 请(参考)[https://github.com/aliyun/aliyun-openapi-cpp-sdk/blob/master/examples/README_zh.md]**

## 许可协议
请参阅 LICENSE 文件（Apache 2.0 许可证）。

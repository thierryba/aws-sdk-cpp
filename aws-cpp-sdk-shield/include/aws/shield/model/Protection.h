﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{

  /**
   * <p>An object that represents a resource that is under DDoS
   * protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Protection">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API Protection
  {
  public:
    Protection();
    Protection(Aws::Utils::Json::JsonView jsonValue);
    Protection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline Protection& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline Protection& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the protection.</p>
     */
    inline Protection& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline Protection& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline Protection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the protection. For example, <code>My CloudFront
     * distributions</code>.</p>
     */
    inline Protection& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline Protection& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline Protection& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the AWS resource that is protected.</p>
     */
    inline Protection& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHealthCheckIds() const{ return m_healthCheckIds; }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline bool HealthCheckIdsHasBeenSet() const { return m_healthCheckIdsHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline void SetHealthCheckIds(const Aws::Vector<Aws::String>& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = value; }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline void SetHealthCheckIds(Aws::Vector<Aws::String>&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline Protection& WithHealthCheckIds(const Aws::Vector<Aws::String>& value) { SetHealthCheckIds(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline Protection& WithHealthCheckIds(Aws::Vector<Aws::String>&& value) { SetHealthCheckIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline Protection& AddHealthCheckIds(const Aws::String& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline Protection& AddHealthCheckIds(Aws::String&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier (ID) for the Route 53 health check that's associated
     * with the protection. </p>
     */
    inline Protection& AddHealthCheckIds(const char* value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_healthCheckIds;
    bool m_healthCheckIdsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws

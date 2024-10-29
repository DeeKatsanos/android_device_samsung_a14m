#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

# Inherit from a14m device
$(call inherit-product, device/samsung/a14m/device.mk)

PRODUCT_DEVICE := a14m
PRODUCT_NAME := lineage_a14m
PRODUCT_BRAND := Samsung
PRODUCT_MODEL := Samsung Galaxy A14
PRODUCT_MANUFACTURER := samsung

PRODUCT_GMS_CLIENTID_BASE := android-samsung-ss

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="a14mnsxx-user 14 UP1A.231005.007 A145RXXS6CXF1 release-keys"

BUILD_FINGERPRINT := samsung/a14mnsxx/a14m:14/UP1A.231005.007/A145RXXS6CXF1:user/release-keys


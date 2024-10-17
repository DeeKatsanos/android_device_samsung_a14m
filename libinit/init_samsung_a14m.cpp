/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>
#include "vendor_init.h"
static const variant_info_t a145p_info = {
    .hwc_value = "",
    .sku_value = "a14m",
    .brand = "Samsung",
    .device = "a14m",
    .marketname = "Samsung Galaxy A14",
    .model = "SM-A145P",
    .build_fingerprint = "samsung/a14mnsx/a14m:14/UP1A.231005.007/A145RXXS6CXF1:user/release-keys"
};
static const variant_info_t a145r_info = {
    .hwc_value = "",
    .sku_value = "a14m",
    .brand = "Samsung",
    .device = "a14m",
    .marketname = "Samsung Galaxy A14",
    .model = "SM-A145R",
    .build_fingerprint = "samsung/a14mnsx/a14m:14/UP1A.231005.007/A145RXXS6CXF1:user/release-keys"
};
static const std::vector<variant_info_t> variants = {
    a145p_info,
    a145r_info,
};
void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}

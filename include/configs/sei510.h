/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Configuration for the SEI510
 *
 * Copyright (C) 2019 Baylibre, SAS
 * Author: Jerome Brunet <jbrunet@baylibre.com>
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define PARTS_DEFAULT                                        \
	"uuid_disk=${uuid_gpt_disk};"  	\
	"name=logo,size=2M,uuid=" LOGO_UUID             \
	"name=misc,size=128K,uuid=${uuid_gpt_misc};" \
	"name=dtbo,size=8M,uuid=${uuid_gpt_dtbo};"  \
	"name=vbmeta,size=64K,uuid=${uuid_gpt_vbmeta};" \
	"name=boot,size=64M,bootable,uuid=${uuid_gpt_boot};" \
	"name=recovery,size=64M,uuid=${uuid_gpt_recovery};"	\
	"name=cache,size=256M,uuid=${uuid_gpt_cache};"	\
	"name=super,size=2304M,uuid=${uuid_gpt_super};"	\
	"name=userdata,size=4756M,uuid=${uuid_gpt_userdata};" \
	"name=rootfs,size=-,uuid=" ROOT_UUID

#include <configs/meson64_android.h>

#endif /* __CONFIG_H */

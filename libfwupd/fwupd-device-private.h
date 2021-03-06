/*
 * Copyright (C) 2017 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef __FWUPD_DEVICE_PRIVATE_H
#define __FWUPD_DEVICE_PRIVATE_H

#include <glib-object.h>

#include "fwupd-device.h"

G_BEGIN_DECLS

FwupdDevice	*fwupd_device_from_variant		(GVariant	*data);
GVariant	*fwupd_device_to_variant		(FwupdDevice	*device);
GVariant	*fwupd_device_to_variant_full		(FwupdDevice	*device,
							 FwupdDeviceFlags flags);
void		 fwupd_device_incorporate		(FwupdDevice	*self,
							 FwupdDevice	*donor);

G_END_DECLS

#endif /* __FWUPD_DEVICE_PRIVATE_H */


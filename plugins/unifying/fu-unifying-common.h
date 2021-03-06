/*
 * Copyright (C) 2016-2018 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef __FU_UNIFYING_COMMON_H
#define __FU_UNIFYING_COMMON_H

#include <glib.h>

G_BEGIN_DECLS

#define	FU_UNIFYING_DEVICE_VID				0x046d

#define	FU_UNIFYING_DEVICE_PID_RUNTIME			0xc52b
#define	FU_UNIFYING_DEVICE_PID_BOOTLOADER_NORDIC	0xaaaa
#define	FU_UNIFYING_DEVICE_PID_BOOTLOADER_NORDIC_PICO	0xaaae
#define	FU_UNIFYING_DEVICE_PID_BOOTLOADER_TEXAS		0xaaac
#define	FU_UNIFYING_DEVICE_PID_BOOTLOADER_TEXAS_PICO	0xaaad

/* Signed firmware are very long to verify on the device */
#define FU_UNIFYING_DEVICE_TIMEOUT_MS			20000

void		 fu_unifying_dump_raw		(const gchar	*title,
						 const guint8	*data,
						 gsize		 len);

guint8		 fu_unifying_buffer_read_uint8	(const gchar	*str);
guint16		 fu_unifying_buffer_read_uint16	(const gchar	*str);

gchar		*fu_unifying_format_version	(const gchar	*name,
						 guint8		 major,
						 guint8		 minor,
						 guint16	 build);

gint		 fu_unifying_nonblock_open	(const gchar	*filename,
						 GError		**error);
gboolean	 fu_unifying_nonblock_read	(gint		 fd,
						 guint8		*data,
						 gsize		 data_sz,
						 gsize		*data_len,
						 guint		 timeout,
						 GError		**error);
gboolean	 fu_unifying_nonblock_write	(gint		 fd,
						 const guint8	*data,
						 gsize		 data_sz,
						 GError		**error);

G_END_DECLS

#endif /* __FU_UNIFYING_COMMON_H */

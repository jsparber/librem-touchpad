/*
 * byd.h --- Driver for BYD Touchpad
 *
 * Copyright (C) 2015, Tai Chi Minh Ralph Eastwood
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef __BYD_H
#define __BYD_H
#define CONFIG_MOUSE_BYD
#define CONFIG_MOUSE_BYD
#define CONFIG_MOUSE_BYD

#ifdef CONFIG_MOUSE_BYD
int byd_detect(struct psmouse *psmouse, bool set_properties);
int byd_init(struct psmouse *psmouse);
#else
static inline int byd_detect(struct psmouse *psmouse,
				      bool set_properties)
{
	return -ENOSYS;
}
static inline int byd_init(struct psmouse *psmouse)
{
	return -ENOSYS;
}

#endif /* CONFIG_MOUSE_BYD */

#endif /* !__BYD_H */

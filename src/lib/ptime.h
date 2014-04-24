/*
 * Copyright (C) 2010-2014 jeanfi@gmail.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
#ifndef _P_TIME_H
#define _P_TIME_H

#include <time.h>

extern const int P_TIME_VER;

char *get_current_ISO8601_time();

char *time_to_ISO8601_time(time_t *);
char *time_to_ISO8601_date(time_t *);

char *tm_to_ISO8601_date(struct tm *);
char *tm_to_ISO8601_time(struct tm *);

#endif

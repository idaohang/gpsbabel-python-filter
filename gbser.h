/*
    OS Abstraction for serial interface.

    Copyright (C) 2006  Robert Lipe, robertlipe@usa.net

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111 USA

 */

void *gbser_init(const char *name);
void gbser_deinit (void *);
int  gbser_read(void *handle, char *ibuf, int sz);
int  gbser_setspeed(void *handle, unsigned speed);

#if __WIN32__
char * fix_win_serial_name(const char *comname);
#endif

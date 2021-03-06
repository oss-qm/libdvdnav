/*
 * Copyright (C) 2000, 2001 Håkan Hjort
 * Copyright (C) 2001 Rich Wareham <richwareham@users.sourceforge.net>
 *               2002-2004 the dvdnav project
 *
 * This file is part of libdvdnav, a DVD navigation library. It is modified
 * from a file originally part of the Ogle DVD player.
 *
 * libdvdnav is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * libdvdnav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with libdvdnav; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/* get_XYZ returns a value.
 * set_XYZ sets state using passed parameters.
 *         returns success/failure.
 */

/* Set */
int  set_TT(dvdnav_vm_t *vm, int tt);
int  set_PTT(dvdnav_vm_t *vm, int tt, int ptt);
int  set_VTS_TT(dvdnav_vm_t *vm, int vtsN, int vts_ttn);
int  set_VTS_PTT(dvdnav_vm_t *vm, int vtsN, int vts_ttn, int part);
int  set_PROG(dvdnav_vm_t *vm, int tt, int pgcn, int pgn);
int  set_VTS_PROG(dvdnav_vm_t *vm, int vtsN, int vts_ttn, int pgcn, int pgn);
int  set_FP_PGC(dvdnav_vm_t *vm);
int  set_MENU(dvdnav_vm_t *vm, int menu);
int  set_PGCN(dvdnav_vm_t *vm, int pgcN);
int  set_PGN(dvdnav_vm_t *vm); /* Set PGN based on (vm->state).CellN */
void set_RSMinfo(dvdnav_vm_t *vm, int cellN, int blockN);

/* Get */
int get_TT(dvdnav_vm_t *vm, int vtsN, int vts_ttn);
int get_ID(dvdnav_vm_t *vm, int id);
int get_PGCN(dvdnav_vm_t *vm);

pgcit_t* get_MENU_PGCIT(dvdnav_vm_t *vm, ifo_handle_t *h, uint16_t lang);
pgcit_t* get_PGCIT(dvdnav_vm_t *vm);


/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
*/
#ifndef __FRULIB_SMBIOS_CHASSIS_H__
#define __FRULIB_SMBIOS_CHASSIS_H__

/*
 * This file contains definitions for various enums defined
 * in DMTF SMBIOS Specification.
 */

enum {
    SMBIOS_CHASSIS_UNDEFINED,
    SMBIOS_CHASSIS_OTHER,
    SMBIOS_CHASSIS_UNKNOWN,
    SMBIOS_CHASSIS_DESKTOP,
    SMBIOS_CHASSIS_LPDESKTOP,
    SMBIOS_CHASSIS_PIZZABOX,
    SMBIOS_CHASSIS_MINITOWER,
    SMBIOS_CHASSIS_TOWER,
    SMBIOS_CHASSIS_PORTABLE,
    SMBIOS_CHASSIS_LAPTOP,
    SMBIOS_CHASSIS_NOTEBOOK,
    SMBIOS_CHASSIS_HANDHELD,
    SMBIOS_CHASSIS_DOCKSTATION,
    SMBIOS_CHASSIS_AIO,
    SMBIOS_CHASSIS_SUBNOTEBOOK,
    SMBIOS_CHASSIS_SPACESAVING,
    SMBIOS_CHASSIS_LUNCHBOX,
    SMBIOS_CHASSIS_MAINSERVER,
    SMBIOS_CHASSIS_EXPANSION,
    SMBIOS_CHASSIS_SUBCHASSIS,
    SMBIOS_CHASSIS_BUSEXPANSION,
    SMBIOS_CHASSIS_PERIPHERAL,
    SMBIOS_CHASSIS_RAID,
    SMBIOS_CHASSIS_RACKMOUNT,
    SMBIOS_CHASSIS_SEALED,
    SMBIOS_CHASSIS_MULTISYSTEM,
    SMBIOS_CHASSIS_COMPACT_PCI,
    SMBIOS_CHASSIS_ADVANCED_TCA,
    SMBIOS_CHASSIS_BLADE,
    SMBIOS_CHASSIS_BLADE_ENCLOSURE,
    SMBIOS_CHASSIS_TABLET,
    SMBIOS_CHASSIS_CONVERTIBLE,
    SMBIOS_CHASSIS_DETACHABLE,
    SMBIOS_CHASSIS_TYPES_TOTAL,
};

#define SMBIOS_CHASSIS_IS_VALID(t) ((t) > SMBIOS_CHASSIS_UNDEFINED && (t) < SMBIOS_CHASSIS_TYPES_TOTAL)

#endif // __FRULIB_SMBIOS_CHASSIS_H__

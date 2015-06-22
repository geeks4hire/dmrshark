/*
 * This file is part of dmrshark.
 *
 * dmrshark is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * dmrshark is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with dmrshark.  If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef DMR_H_
#define DMR_H_

#include "types.h"

#define DMR_CALL_TYPE_PRIVATE					0x00
#define DMR_CALL_TYPE_GROUP						0x01
typedef uint8_t dmr_call_type_t;

typedef uint8_t dmr_timeslot_t;
typedef uint32_t dmr_id_t;

char *dmr_get_readable_call_type(dmr_call_type_t call_type);

#endif
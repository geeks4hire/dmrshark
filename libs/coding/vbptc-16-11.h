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

#ifndef VBPTC_16_11_H_
#define VBPTC_16_11_H_

#include <libs/base/types.h>

typedef struct {
	flag_t *matrix;
	flag_t *data; // Data extracted from the completed matrix is stored here.
	uint8_t current_row;
	uint8_t current_col;
	uint8_t expected_rows;
} vbptc_16_11_t;

void vbptc_16_11_print_matrix(vbptc_16_11_t *vbptc);

flag_t vbptc_16_11_add_burst(vbptc_16_11_t *vbptc, flag_t *burst_data, uint8_t burst_data_length);
void vbptc_16_11_get_data_bits(vbptc_16_11_t *vbptc, flag_t *bits, uint16_t bits_size);

void vbptc_16_11_free(vbptc_16_11_t *vbptc);
void vbptc_16_11_init(vbptc_16_11_t *vbptc, uint8_t expected_rows);

#endif

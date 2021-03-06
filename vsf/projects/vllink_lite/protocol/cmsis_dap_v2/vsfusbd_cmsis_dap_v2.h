/***************************************************************************
 *   Copyright (C) 2018 - 2019 by Chen Le <talpachen@gmail.com>            *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef __VSFUSBD_CMSIS_DAP_V2_H_INCLUDED__
#define __VSFUSBD_CMSIS_DAP_V2_H_INCLUDED__

#ifdef DAP_BLOCK_TRANSFER
#include "../dap_block/DAP.h"
#else
#include "../dap/DAP.h"
#endif

struct vsfusbd_cmsis_dap_v2_param_t
{
	uint8_t ep_out;
	uint8_t ep_in;

	bool dap_connected;
	struct dap_param_t *dap_param;

	struct vsf_bufstream_t bufstream_tx;
	struct vsf_bufstream_t bufstream_rx;
	
	uint8_t txbuff[DAP_BULK_PACKET_SIZE];
	uint8_t rxbuff[DAP_BULK_PACKET_SIZE];

	struct vsfusbd_device_t *device;
	struct vsfusbd_transact_t IN_transact;
	struct vsfusbd_transact_t OUT_transact;
};

extern const struct vsfusbd_class_protocol_t vsfusbd_cmsis_dap_v2_class;

#endif	// __VSFUSBD_CMSIS_DAP_V2_H_INCLUDED__

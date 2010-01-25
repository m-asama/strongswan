/*
 * Copyright (C) 2010 Martin Willi
 * Copyright (C) 2010 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup tls_peer tls_peer
 * @{ @ingroup tls
 */

#ifndef TLS_PEER_H_
#define TLS_PEER_H_

typedef struct tls_peer_t tls_peer_t;

#include "tls_handshake.h"
#include "tls_crypto.h"

/**
 * TLS handshake protocol handler as peer.
 */
struct tls_peer_t {

	/**
	 * Implements the TLS handshake protocol handler.
	 */
	tls_handshake_t handshake;
};

/**
 * Create a tls_peer instance.
 */
tls_peer_t *tls_peer_create(tls_crypto_t *crypto);

#endif /** TLS_PEER_H_ @}*/

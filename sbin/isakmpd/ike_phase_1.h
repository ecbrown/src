/* $OpenBSD: ike_phase_1.h,v 1.5 2024/05/21 05:00:47 jsg Exp $	 */

/*
 * Copyright (c) 1999 Niklas Hallqvist.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * This code was written under funding by Ericsson Radio Systems.
 */

#ifndef _IKE_PHASE_1_H_
#define _IKE_PHASE_1_H_

struct message;

extern int      ike_phase_1_initiator_recv_KE_NONCE(struct message *);
extern int      ike_phase_1_initiator_recv_SA(struct message *);
extern int      ike_phase_1_initiator_send_KE_NONCE(struct message *);
extern int      ike_phase_1_initiator_send_SA(struct message *);
extern int      ike_phase_1_post_exchange_KE_NONCE(struct message *);
extern int      ike_phase_1_recv_AUTH(struct message *);
extern int      ike_phase_1_recv_ID(struct message *);
extern int      ike_phase_1_recv_ID_AUTH(struct message *);
extern int      ike_phase_1_recv_KE_NONCE(struct message *);
extern int      ike_phase_1_responder_recv_SA(struct message *);
extern int      ike_phase_1_responder_send_SA(struct message *);
extern int      ike_phase_1_responder_send_ID_AUTH(struct message *);
extern int      ike_phase_1_send_AUTH(struct message *);
extern int      ike_phase_1_send_ID(struct message *);
extern int      ike_phase_1_send_KE_NONCE(struct message *, size_t);

#endif				/* _IKE_PHASE_1_H_ */

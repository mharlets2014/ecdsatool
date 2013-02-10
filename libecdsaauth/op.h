/*
 * Copyright (c) 2013 William Pitcock <nenolod@dereferenced.org>.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef OP_H
#define OP_H

#include "keypair.h"

#include <stdbool.h>

/*
 * Verify a signature.
 */
extern bool libecdsaauth_verify(libecdsaauth_key_t *key, unsigned char *blob, size_t len, unsigned char *sig, size_t siglen);

/*
 * Verify a base64-encapsulated signature.
 */
extern bool libecdsaauth_verify_base64(libecdsaauth_key_t *key, unsigned char *blob, size_t len, char *sig_base64);

/*
 * Sign a challenge.
 */
extern bool libecdsaauth_sign(libecdsaauth_key_t *key, unsigned char *in, size_t inlen, unsigned char **out, size_t *outlen);

/*
 * Sign a challenge and base64 it.
 */
extern bool libecdsaauth_sign_base64(libecdsaauth_key_t *key, unsigned char *in, size_t inlen, char **out, size_t *outlen);

#endif

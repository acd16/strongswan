/*
 * Copyright (C) 2015 Martin Willi
 * Copyright (C) 2015 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version. See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * From RFC <TBD>
 */

dh_test_vector_t curve25519 = {
	.group = CURVE_25519, .priv_len = 32, .pub_len = 32, .shared_len = 32,
	.priv_a	= "\x77\x07\x6d\x0a\x73\x18\xa5\x7d\x3c\x16\xc1\x72\x51\xb2\x66\x45"
			  "\xdf\x4c\x2f\x87\xeb\xc0\x99\x2a\xb1\x77\xfb\xa5\x1d\xb9\x2c\x2a",
	.priv_b	= "\x5d\xab\x08\x7e\x62\x4a\x8a\x4b\x79\xe1\x7f\x8b\x83\x80\x0e\xe6"
			  "\x6f\x3b\xb1\x29\x26\x18\xb6\xfd\x1c\x2f\x8b\x27\xff\x88\xe0\xeb",
	.pub_a	= "\x85\x20\xf0\x09\x89\x30\xa7\x54\x74\x8b\x7d\xdc\xb4\x3e\xf7\x5a"
			  "\x0d\xbf\x3a\x0d\x26\x38\x1a\xf4\xeb\xa4\xa9\x8e\xaa\x9b\x4e\x6a",
	.pub_b	= "\xde\x9e\xdb\x7d\x7b\x7d\xc1\xb4\xd3\x5b\x61\xc2\xec\xe4\x35\x37"
			  "\x3f\x83\x43\xc8\x5b\x78\x67\x4d\xad\xfc\x7e\x14\x6f\x88\x2b\x4f",
	.shared	= "\x4a\x5d\x9d\x5b\xa4\xce\x2d\xe1\x72\x8e\x3b\xf4\x80\x35\x0f\x25"
			  "\xe0\x7e\x21\xc9\x47\xd1\x9e\x33\x76\xf0\x9b\x3c\x1e\x16\x17\x42",
};
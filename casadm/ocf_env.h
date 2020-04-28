/*
* Copyright(c) 2012-2020 Intel Corporation
* SPDX-License-Identifier: BSD-3-Clause-Clear
*/

#ifndef OCF_ENV_H_
#define OCF_ENV_H_

#include <string.h>
#include <stdlib.h>
#include "safeclib/safe_lib.h"

#define min(x, y)  ({ x < y ? x : y; })

#define ENV_BUG_ON(cond) ({ if (cond) exit(1); })

/* *** STRING OPERATIONS *** */

#define env_memset memset_s
#define env_memcpy memcpy_s
#define env_memcmp memcmp_s

#define env_strnlen strnlen_s
#define env_strncmp strncmp
#define env_strncpy strncpy_s

#endif /* OCF_ENV_H_ */

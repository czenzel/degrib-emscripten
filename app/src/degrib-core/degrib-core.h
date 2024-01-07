#ifndef DEGRIB_CORE_H
#define DEGRIB_CORE_H

/* Pays attention to the following compile time #defines:
 * 1a) __64BIT__ => use 64 bit compilation as opposed to 32 bit
 * 1b) SIZEOF_LONG_INT =8 vs =4 => use 64 bit compilation as opposed to 32 bit
 * 2) WORDS_BIGENDIAN => files are bigendian
 * 3) DEBUG => Pay attention to assert statements.
 * 4) MEMWATCH => Track memory.
 */

/*
#include <stdarg.h>
#include <stdio.h>
*/

#include "degrib-lib/libaat_type.h"

#include "degrib-lib/scan.h"

#include "degrib-lib/grib2api.h"

#include "degrib-lib/engribapi.h"

#endif

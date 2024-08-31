#ifndef __ENDIANNESS_H__
#define __ENDIANNESS_H__

#include <stdbool.h>

#define BIG_ENDIAN bigEndian
#define LITTLE_ENDIAN !bigEndian

extern bool bigEndian;

void configureEndianness();

#endif
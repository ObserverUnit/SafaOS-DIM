#pragma once

#include <stdio.h>
#include <stdlib.h>

#define assert(x) if (!(x)) { fprintf(stderr, "%s:%d: assertion failed: %s\n", __FILE__, __LINE__, #x); exit(1); }

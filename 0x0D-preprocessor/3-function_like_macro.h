#include <stdio.h>
#include <stdlib.h>

#ifdef ABS(x)

#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif

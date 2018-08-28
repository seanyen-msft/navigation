#ifndef WIN_UTILS_H
#define WIN_UTILS_H

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WIN32
static double drand48(void)
{
    return ((double)rand())/RAND_MAX;
}

static void srand48(long int seedval)
{
    srand(seedval);
}
#endif

#ifdef __cplusplus
}
#endif

#endif
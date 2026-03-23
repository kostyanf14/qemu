#ifndef QEMU_GETOPT_H
#define QEMU_GETOPT_H

#include <getopt.h>

/*
 * After using getopt or getopt_long, if you need to parse another set
 * of options, then you must reset optind.  Unfortunately the way to
 * do this varies between implementations of getopt.
 */
static inline void qemu_reset_optind(void)
{
#ifdef HAVE_OPTRESET
    optind = 1;
    optreset = 1;
#else
    optind = 0;
#endif
}

#endif /* QEMU_GETOPT_H */

/* { dg-do run } */
/* { dg-shouldfail "bounds violation" } */
/* { dg-options "-fcheck-pointer-bounds -mmpx" } */


#define SHOULDFAIL

#include "mpx-check.h"

int buf[100];
int *p[1] = { buf };

int mpx_test (int argc, const char *argv[])
{
  printf ("%d\n", p[0][-1]);

  return 0;
}

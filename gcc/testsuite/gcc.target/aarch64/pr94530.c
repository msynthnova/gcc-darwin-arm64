/* { dg-do compile } */
/* { dg-require-effective-target lp64 } */
/* { dg-options "-Os -mcpu=falkor -mpc-relative-literal-loads -mcmodel=large -fno-pie" } */
/* { dg-xfail-if "issue #100" { *-*-darwin* } } */

extern void bar(const char *);

void foo(void) {
  for (;;)
    bar("");
}

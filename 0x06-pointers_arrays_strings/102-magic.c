#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * Add a comment to explain the next line.
   * Set the value pointed to by p to 98.
   */
  *p = 98;
  /* Print the value of a[2], which is now 98. */
  printf("a[2] = %d\n", a[2]);
  return (0);
}


#include <stdio.h>
#include <sys/time.h>

int main(void)
{
  struct timeval s, f;

  gettimeofday(&s, NULL);


  gettimeofday(&f, NULL);
  return 0;
}

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int loops = 500000000;   // you can tweak this if output is too long

  if(argc > 1){
    loops = atoi(argv[1]);   // allow: cpuloop 10000000
  }

  printf("cpuloop: pid %d starting, loops=%d\n", getpid(), loops);

  volatile int x = 0;
  for (int i = 0; i < loops; i++) {
    x += i;
  }

  printf("cpuloop: pid %d done, x=%d\n", getpid(), x);
  exit(0);
}

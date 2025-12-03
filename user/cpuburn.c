#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("cpuburn: pid %d starting\n", getpid());
  volatile int x = 0;
  while(1){
    x += 1;  // just burn CPU
  }
  exit(0);
}


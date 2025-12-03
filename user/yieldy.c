#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf("yieldy: pid %d starting\n", getpid());

  for(;;){
    // do a bit of fake work
    for(volatile int i = 0; i < 1000000; i++)
      ;

    // give up CPU voluntarily
    pause(1);        // or: sleep(1);
  }

  exit(0);
}

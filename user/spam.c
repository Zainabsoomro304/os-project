#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int id = (argc > 1) ? atoi(argv[1]) : getpid();
  int n = 0;

  while(1){
    printf("spam %d: %d\n", id, n++);
    pause(10);     // slow it down a bit so you can read output
  }

  exit(0);
}

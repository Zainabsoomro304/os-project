#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2){
    printf("usage: pinfo pid\n");
    exit(1);
  }

  int pid = atoi(argv[1]);
  struct procinfo pi;

  if(getprocinfo(pid, &pi) < 0){
    printf("getprocinfo: failed for pid %d\n", pid);
    exit(1);
  }

  printf("pid=%d state=%d queue=%d time_in_queue=%d\n",
         pi.pid, pi.state, pi.queue, pi.time_in_queue);

  exit(0);
}


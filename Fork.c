include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main (void)
{
   char *str_p =   "parent pid %d\n" ;
   char *str_c =   "child pid %d\n" ;
   int pid = 0;

      sleep (1);
      printf("parent pid %d\n" , getpid() );
      execl ("a.out","a.out",NULL);
      pid = fork();
      pid = fork();
      if (pid > 0)
      {
         wait();
         printf(str_p, getpid() );
      }
      else if ( pid == 0)
      printf(str_c, getpid() );
      else 
      printf("error\n", );

   }


#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "commands.h"


int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv)){

   return 1;
}
  // TODO: Fill it!
int valid =  chdir(argv[1]);
if(valid == -1){return 1;}
 return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv)){
   return 1;
}

char buf[255];
getcwd(buf, 255);
printf("%s\n",buf);


  
  // TODO: Fill it!
  

  return 0;

}

int validate_cd_argv(int argc, char** argv) {
    
 

 // TODO: Fill it!
if(strcmp(argv[0],"cd")!=0 || argc != 2  ) return 0; 
 return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
   

 if (strcmp(argv[0],"pwd")!=0  || argc > 1) return 0;

  return 1;
}

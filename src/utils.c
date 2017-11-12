#include "utils.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!

*argc = 0;
int len =  strlen(command);

*argv = (char**)(malloc(sizeof(char*) *(len+1)));
for(int c=0; c<len; c++){
(*argv)[c] = (char*)(malloc(sizeof(char) *(len+1)));
}
***argv = (char)(malloc(sizeof(char) *(len+1)));
int a=0;
char **tmp;
char x[8096] = " ";
char y[8096] = " ";
char z[8096] = " ";


 for(int c=0; c<=len; c++){
x[c] = command[c];
}

if(x[len-1] == '\n'){
x[len-1] = '\0';
len = len -1;
}



char* ptr;

for(int c=0; c<len; c++){
if(x[c] == ' '|| x[c] == " " || x[c] == '\t' || x[c] =="\t" || x[c] == "\n" || x[c] == '\n'){
a++;
}
else break;
}

if(a==len){

strcpy((*argv)[0],"");
*argc =1 ;
return;
}


for(int c=a; c<len; c++){
y[c-a] = x[c];
x[c] =" ";
}

strcpy(x,y);




for(int c=0; c<len-a; c++){
if(x[c]==' ' && x[c+1] == ' '){
for(int d=c; d<len-a-1; d++){
x[d] = x[d+1];
x[d+1] = ' ' ;
}
len =len-1;
c = 0;
}
}
strcpy(x,x);




for(int c=0; c<len-a; c++){
if(x[c]==' '){
ptr = strtok(x, " ");
break;
}
else if(c == (len-a-1)){
if(x[c] == '\n'){
for(c=0; c<len-a-1; c++){
z[c] = x[c];
x[c] = " ";
}
strcpy(x,z);
}
strcpy((*argv)[0],x);
*argc = 1;
return;
}

}


    
int d=0;

for(int c=0; c<=len-a; c++){
if(x[c] == ' ' ||  x[c] == '\0'){
*argc = *argc + 1;
}
   
}




while( d<*argc){
strcpy((*argv)[d++], ptr);
ptr = strtok(NULL," ");
}
    
tmp = (**argv);
return ;
}



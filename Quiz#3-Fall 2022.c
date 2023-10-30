#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char ** modifyWord(char word[]){
  int len=strlen(word);
  
  char** opt=(char**)malloc( (len-1) * sizeof(char*) );
  for(int i=0;i<len-1;i++)
      opt[i]=(char *)malloc(len);
 
  char temp[255];
  for(int i=0;i<len-1;i++){
      strcpy(temp,word);
      char t=temp[i];
      temp[i]=temp[i+1];
      temp[i+1]=t;
      strcpy(opt[i],temp);
    }
  return opt;
}
int main() {
char word[]="ABCDEF";
int len=strlen(word);
char **options;
options=modifyWord(word);
for(int i=0;i<len-1;i++)
    printf("%s ",options[i]);
}
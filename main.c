#include <stdio.h>
#include <string.h>

int strlen1(char*);
char* strcpy1(char*, char*);
char* strncat1(char*, char*, int);
int strcmp1(char*, char*);
char* strchr1(char*, char);



int main(){
  char a[100] = "0123456";
  char b[] = "abc";

  printf("regular: %i\nours: %i\n", strcmp(a, b), strcmp1(a, b));


}


int strlen1(char* arr){
    int a = 0;
  while(arr[a] ){
    a++;
  }
  return a;
}

char* strcpy1(char* dest, char* src){
  int a = strlen1(src) + 1;
  int i;
  for(i = 0; i < a; i++){
    dest[i] = src[i];
  }
  return dest;
}

char* strncat1(char* dest, char* src, int a){
  int len = strlen1(dest);
  int i = 0;
  while(src[i] && !(i == a)){
    dest[len + i] = src[i];
    i++;
  }
  dest[len + i] = 0;
  return dest;
}

int strcmp1(char* a1, char* a2){
  int i = 0;
  int len1 = strlen1(a1);

  while(1){
    if(i >= len1){
      return a1[i] - a2[i];
    }
    
    if(a1[i] == a2[i]){
      i++;
    }
    else{
      return a1[i] - a2[i];
    }
  }
}
/*
char* strchr(char*, char)

*/

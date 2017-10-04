#include <stdio.h>
#include <string.h>

int strlen1(char*);
char* strcpy1(char*, char*);
char* strncat1(char*, char*, int);
int strcmp1(char*, char*);
char* strchr1(char*, char);



int main(){
  char a[] = "0123";
  char b[] = "abc";
  char c[] = "sgag";
  char d[] = "yergysersdfwe";
  printf("a: [%s]\nb: [%s]\nc: [%s]\nd: [%s]\n\n", a, b, c, d);
  printf("Testing strlen(b):\n[standard]: %d\n[ours]: %d\n\n", strlen(b), strlen1(b));
  printf("Testing strcpy(c, a):\n[standard]: %s\n[ours]: %s\n\n", strcpy(c, a), strcpy1(d, a));
  printf("Testing strncat(c, b, 2):\n[standard]: %s\n[ours]: %s\n\n", strncat(c, b, 2), strncat1(d, b, 2));
  printf("Testing strcmp(a, b):\n[standard]: %d\n[ours]: %d\n\n", strcmp(a, b), strcmp(a, b));
  printf("Testing strcmp(a, a):\n[standard]: %d\n[ours]: %d\n\n", strcmp(a, a), strcmp(a, a));
  printf("Testing strcmp(b, a):\n[standard]: %d\n[ours]: %d\n\n", strcmp(b, a), strcmp(b, a));
  printf("Testing strchr(b, 'c'):\n[standard]: %p\n[ours]: %p\n\n", strchr(b, 'c'), strchr1(b, 'c'));
  printf("Testing strchr(b, 0):\n[standard]: %p\n[ours]: %p\n\n", strchr(b, 0), strchr1(b, 0));
  printf("Testing strchr(b, 'u'):\n[standard]: %p\n[ours]: %p\n\n", strchr(b, 'u'), strchr1(b, 'u'));
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

char* strchr1(char* arr, char a){
  int i = 0;
  while(arr[i]){
    if(a == arr[i])
      return &arr[i];
    i++;
  }
  if(arr[i] == a){
    return &arr[i];
  }
  return NULL;
}



#include "headers.h"
#include <stdio.h>

int doCalculate(int type);

int main(int argc, char* argv[]){
  char[1024] input = "";
  int type=0
  int result=0;
  
  printf("1. add 2.sub 3.mul 4.div");
  scanf("%d", &type);
  result = doCalculate(type);
  if(result == -1) printf("Calculation Type Error\n");
  else printf("Result is: %d\n", result);
  
  return 0;
}

int doCalculate(int type){
  if( ! (1<=type || type<=4)) return -1;
  int a, b;
  
  printf("Enter two number a, b :");
  scanf("%d %d", &a, &b);
  
  if(type == 1) return add(a,b);
  if(type == 2) return sub(a,b);
  if(type ==3) return mul(a,b);
  return div(a,b);
}

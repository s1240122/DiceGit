#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int) time(NULL));
  int n=rand()%6+1;
  int m=rand()%6+1;
  printf("Rolling the dice...\n");
  printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",n,m,n+m);
  if(n+m>7)
    printf("You won\n");
  else
    printf("You lost\n");
  return 0;
}

#include<stdio.h>

int main(){
  int sum=0,i,num;

  srand(time(NULL)); // 現在時刻の情報で初期化
  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++) {

    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1,num);
    sum+=num;
  }

  printf("Total value: %d\n",sum);
  
  return 0;
}

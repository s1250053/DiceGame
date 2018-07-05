#include<stdio.h>

int main(){
  int sum=0,i,num;
  char name[100];

  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  srand(time(NULL)); // 現在時刻の情報で初期化
  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++) {

    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1,num);
    sum+=num;
  }

  printf("Total value: %d\n",sum);

  if(sum > 7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
  return 0;
}

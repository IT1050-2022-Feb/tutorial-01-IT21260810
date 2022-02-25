#include <stdio.h>

int main() {

  int dis=0 ;
  float rate=0 ;

  printf("Enter the distance the van travelled : ");
  scanf("%d" , &dis);

  if(dis <= 30)
  {
    rate = dis * 50 ;
  }

  else
  {
    rate = 1500 + 40 * (dis - 30);
  }

  printf("Amount : %.2f" , rate);

  return 0;
}
#include<stdio.h>
int main()
{
  int number[5][5]={{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300,
400, 500}, {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000,
40000, 50000}};
  int number2[5][5];
  int r,c;
  printf("content of first array (number):\n");
  for(r=0;r<5;r++){
    for(c=0;c<5;c++){
      printf("%d ",number[r][c]);
    }
    printf("\n");
  }
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
          number2[c][r]=number[r][c];//copied
        }
    }
    printf("Content of second array (number2): \n");
    for (r = 0; r < 5; r++) {
for(c = 0; c < 5; c++) {
printf("%d ", number2[r][c]);
     }
     printf("\n");
  }
  return 0;
}

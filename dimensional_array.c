#include<stdio.h>
int main()
{
  int marks[4][10];
  int i,j,k;
  for(i=0;i<3;i++){
    for(j=0;j<10;j++){
      scanf("%d",&marks[i][j]);
   }
  }
  for(k=0;k<10;k++)
      {
          marks[3][k]=marks[0][k]/4.0+marks[1][k]/4.0+marks[2][k]/2.0;
          printf("roll no:%d total marks:%d\n",k+1,marks[3][k]);
      }
  return 0;
}

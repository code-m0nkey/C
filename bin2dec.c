#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
  char bin[65];
  int length,decimal,power,i;
  printf("Enter the binary number:");
  scanf("%s",&bin);
  decimal=0;
  length=strlen(bin);
  power=length-1;
  for(i=0;i<length;i++){
    decimal += (bin[i]-'0')*pow(2,power);
    power--;
  }
  printf("Decimal value is %d\n",decimal);
  return 0;
}

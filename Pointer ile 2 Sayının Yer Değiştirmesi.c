#include <stdio.h>
void swap(int *a,int *b);
int main() {
  int sayi1,sayi2;
  printf("İki sayi yaziniz: ");
  scanf("%d %d",&sayi1,&sayi2);
  swap(&sayi1,&sayi2);
  printf("Degistirilmis Hali: %d %d",sayi1,sayi2);
  return 0;
}
void swap(int *a,int *b)
{
  int temp=0;
  if(*a>*b)
  {
    temp=*b;
    *b=*a;
    *a=temp;
  }
  
  else if(*b>*a)
  {
    temp=*a;
    *a=*b;
    *b=temp;
  }
}

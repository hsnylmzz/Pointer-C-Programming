#include <stdio.h>
#include <stdlib.h>   // Bu kütüphane mutlak degeri hesaplayan abs fonksiyonu içindir.
void update(int *a,int *b);
int main() {
  int sayi1,sayi2;
  printf("İki Sayi giriniz: ");
  scanf("%d %d",&sayi1,&sayi2);
  update(&sayi1,&sayi2);
  return 0;
}
void update(int *a,int *b)
{
  int toplam=0;
  int fark=0;
  toplam=*a+*b;
  fark=abs(*a-(*b));
  printf("Sayinin Toplami : %d\n ",toplam);
  printf("Sayinin Farki : %d ",fark);
}

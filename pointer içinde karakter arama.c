#include<stdio.h>
void myStringSearch(const char*,const char,int *);

int main()
{
    char myString[]="aabkaaa";
    char charToFind='k';
    
    int result;
    myStringSearch(myString,charToFind,&result);
    
    if(result!=-1)
    {
        printf("KARAKTER BULUNDU %d\n",result+1);
    }
    else
    {
        printf("KARAKTER BULUNAMADI.\n");
    }
}
void myStringSearch(const char *param1,const char param2,int *sonuc)
{
    int i,control=0;
    for(;*param1!='\0';param1++,i++)
    {
      if(control==0)
      {
         if(*param1==param2)
         {
           *sonuc=i;
           control++;
         }
      }
    }
}

// Not : 'a' harfi verilen karakter hangi indiste oldugunu ararsa ilk bulunan indisi yazar

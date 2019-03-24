#include<stdio.h>
void myStringSearch(const char*,const char,int *);

int main()
{
    char myString[]="aabkaaa";
    char charToFind='b';
    
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
    int i;
    for(i=0;param1[i]!='\0';i++)
    {
      if(param1[i]==param2)
      {
        *sonuc=i;
      }
    }
}

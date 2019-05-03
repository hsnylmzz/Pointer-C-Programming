#include<stdio.h>
void myStringSearch(const char*,const char,int *);

int main()
{
    char myString[]="aabkaaa";
    char charToFind='a';
    
    int result;
    myStringSearch(myString,charToFind,&result);
    
}
void myStringSearch(const char *param1,const char param2,int *sonuc)
{
    int i,control=0;
    for(;*param1!='\0';param1++,i++)
    {
        if(*param1==param2)
         {
           *sonuc=i;
           control++;
           printf("KARAKTER BULUNDU %d\n",i+1);
         }
    }
}

//Burada bir veya birden fazla karakter olması durumunda hangi indiste olduğunu bu kodda yazılmıştır.

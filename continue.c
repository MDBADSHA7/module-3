#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i=i+1){
        //It's just continue without 5
         if(i==5)
          {
             continue;
          }
         printf("%d\n",i);
         //After printf this condition doesn't work
        //  if(i==5)
        //  {
        //     continue;
        //  }
    }
    return 0;
}
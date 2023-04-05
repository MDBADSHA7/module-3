#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i=i+1){
        // Before use for instant break
        // if (i==5)
        // {
        //     //Just for instant break
        //     break;
        // }
         printf("%d\n",i);
        //  After use for 1 times later break
         if(i==5)
         {
            break;
         }

    }
    return 0;
}
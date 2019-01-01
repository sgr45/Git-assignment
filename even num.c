/*Display all even number from 1 to 100*/
#include <stdio.h>
void main()
    {
       int beg , end ,a=0,b;
        printf("From where should I start?\n");
        scanf("%d",&beg);
        printf("Where should it end\n");
        scanf("%d",&end);
        printf("The even numbers are\n");
        while (beg <=end)
            {

                b=beg % 2;
                if (b==0) printf("%d\t", beg);
                a++;
                beg++;
            }
    }

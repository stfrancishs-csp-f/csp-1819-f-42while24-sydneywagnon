#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    //for (k=0;k<5;k++)
    while (k<5)
   {
       //sum+=k; //use something different in "while" version
       printf("%d\n",k);
        sum = sum + k;
        k++;
    }

    printf ("Sum - %d\n",sum);

    //k=5;

    //while (k>0)
    for (k=10; k>=0;k--)
    {

        //k=k-1;//use something different in "for" version
        printf ("%2d\n", k);
    }
        printf("Blastoff!");

}
#include <stdio.h>
int main()
{
    //to make four iterations
    int i = 4;
    //while loop to make iterations
    while(i>0)
    {
        //number of digits in each row is (2*i)-1
        //in i is 4
        //number of digits is 2*4-1 = 7
        //when 3 - 5
        //4-i is the space before the digits
        int k = 4-i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        int j = (2*i)-1;
        //adding 0 and 1
        while (j>0)
        {
            if (j%2==0)
                printf("0");
            else
                printf("1");
            j = j-1;
        }
        printf("\n");
        i=i-1;
    }
    return 0;
}
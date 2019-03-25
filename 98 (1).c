
// Every even integer greater than 2 can be exoressed as the sum of two primes, e.g input n = 44, output 3 + 41 (both are primes)

#include <stdio.h>
#include<cs50.h>

int index = 0;

void prime_numbers(int n, int *p);


int main(void)
{

    int Integer;
    int sum = 0;
    int mod = 0;

    while (true)
    {

        int *prime = NULL;

         do
         {
        Integer = get_int("Integer: ");
         }
         while (Integer <= 2);


         if (Integer == INT_MAX)  // This condition means when user wants stop inputting, or when user presses ctrl + D
         {
              break;
         }

         mod = Integer % 2;

         if (mod == 0)
         {

             prime = malloc(Integer * sizeof(int));
             prime_numbers(Integer, &prime[0]);

             for(int first = 0; first <index; first++)
             {
                for(int second = 0; second < index; second++ )
                {
                    sum = prime[first] + prime [second];

                    if (sum == Integer)
                    {
                        printf("\n");
                        printf("%i + %i = %i\n",prime[first],prime[second],sum);
                        printf("\n");
                        sum = 0;
                    }

                    else
                    {
                        sum = 0;
                    }
                }
             }

          }
          else
          {
              printf("Please enter Even Integer\n");
          }

          free(prime);
          index = 0;

 }

}

void prime_numbers (int n, int *p)
{
       for (int i = 2; i <= n; i++)
       {
           int check = 0;
         for(int m = 1; m <= i; m++)
         {
             int imodm = i % m;
             float idvdm = i / m;

             if( imodm == 0 && m < i && m > 1   )
             {
                 check = 1;
             }
             else if(imodm == 0 && idvdm == 1.000 && check == 0 )
             {
                 p[index] = i;
                 index++;
             }
         }


       }

}

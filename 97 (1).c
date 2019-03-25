#include <stdio.h>
#include <cs50.h>

int index = 0;

void prime_numbers (int n,int *p);


int main(void)
{

    int Integers;

    while (true)
 {
      int *prime = NULL;
    do
    {
        Integers = get_int("Integers: ");
    }
    while(Integers < 1);

      if (Integers == INT_MAX)
          {
              break;
          }

     prime = malloc(Integers*sizeof(int));

      prime_numbers(Integers, &prime[0]);

      int Even_prime[index];
      int index_Even = 0;

     for(int i = 0; i <index; i= i + 2)
     {

         Even_prime[index_Even]= prime[i];
         printf("%i\n",Even_prime[index_Even]);
         index_Even ++;

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

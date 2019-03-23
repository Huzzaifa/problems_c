
// Find even prime numbers  from first n integers your program should should stop only when user wants it.

#include <stdio.h>
#include <cs50.h>

int index = 0;

void prime_numbers (int n,int *p);


int main(void)
{

    while (true)

 {
      int Integers;
    do
    {
        Integers = get_int("Integers: ");
    }
    while(Integers < 1);

      if (Integers == INT_MAX)
          {
              break;
          }

     int *prime = malloc(Integers*sizeof(int));

      prime_numbers(Integers, &prime[0]);

      int Even_prime[index];
      int index_Even = 0;

     for(int i = 0; i < index; i= i + 2)
     {
         Even_prime[index_Even]= prime[i];
         printf("%i\n",Even_prime[index_Even]);
         b++;

     }
      free(prime);
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
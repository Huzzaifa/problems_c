#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{

//Find Whether the sum of two numbers is greater than 50?

  /*int number1 = get_int("Number 1: ");
  int number2 = get_int("Number 2: ");
  int sum = number1 + number2;
  if(sum > 50)
  printf("Sum is greater than fifty\n");
  else
  printf("Sum is less than fifty\n");*/

//Find Whether the sum of two numbers is greater than the third number?

  /*int number1 = get_int("Number 1: ");
  int number2 = get_int("Number 2: ");
  int number3 = get_int("Number 3: ");

  int Sum1 = number1 + number2;
  int Sum2 = number2 + number3;
  int Sum3 = number3 + number1;

  if(Sum1 > number3 || Sum2 > number1 || Sum3 > number2)
  printf("Sum is greater than third number");
  else
  printf("Not greater than third number");*/

// Divide a number by another if and only if the second number is not equal to zero

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");

   if(number2 != 0 && number1 != 0)
   {
       float answer1 = number1 / number2;
       float answer2 = number2 / number1;
       printf("Answer1: %f\n Answer2: %f\n",answer1,answer2);
   }

  else
   printf("cannot be divided");*/

// Determine whether a student is passed or failed?


   /*int student_marks = get_int("Marks of student: ");
   int Passing_marks = get_int("Marks of passing: ");

   if(student_marks > Passing_marks )
   printf("Passed!\n");
   else
   printf("failed!\n");*/

// Divide two numbers if there difference is greater than 10, otherwise multiply them

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float differnce = number1 - number2;

   if(fabs(differnce) > 10 )
   {
       float answer = number1 / number2;
       printf("Division Answer:%f\n",answer);
   }
   else
   {
       float answer = number1 * number2;
       printf("Multiplication Answer:%f\n",answer);
   }*/


// Determine whether average of two numbers is negative or not

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float average = (number1 + number2) / 2;

   if(average < 0 )
   printf("Average is negative\n");
   else
   printf("Average is positive\n");*/


 // Multiply two numbers if their sum is greater than 100, otherwise divide them

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float sum = number1 + number2;

   if(sum > 100)
   {
       float answer = number1 / number2;
       printf("Division Answer:%f\n",answer);
   }
   else
   {
       float answer = number1 * number2;
       printf("Multiplication Answer:%f\n",answer);
   }*/


// Determine product of two numbers is negative or not

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float product = number1 * number2;

   if(product < 0)
   {
       printf("product is negative");
   }
   else
   printf("Product is positive");*/

// Subtract two numbers if their sum is greater than 100, otherwise divide them

   /*float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float sum = number1 + number2;

   if(sum > 100)
   {
       float answer = number1 - number2;
       printf("Subtraction Answer:%f\n",answer);
   }
   else
   {
       float answer = number1 / number2;
       printf("Division Answer:%f\n",answer);
   }*/

// Determine whether the average of 3 numbers is negative or not

  /* float number1 = get_float("Number 1: ");
   float number2 = get_float("Number 2: ");
   float number3 = get_float("Number 3: ");
   float average = (number1 + number2 + number3) / 3;

   if(average < 0 )
   printf("Average is negative\n");
   else
   printf("Average is positive\n");*/

// Find sum of two  numbers if second number is 0 add 5 to it

  /*int number1 = get_int("Number 1: ");
  int number2 = get_int("Number 2: ");
  int sum = number1 + number2;

  if (number1 != 0 && number2 != 0)
  printf("Simple Sum:%i\n",sum);
  else
  {
      sum = sum + 5;
     printf("Addition of 5 in Sum:%i\n",sum);
  }*/

}
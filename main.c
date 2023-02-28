#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

     // Methods to calc the sum with int and double and float
   int sum (int num1 , int num2){
    int result = num1 + num2;
    return result;
    }
   double sum (double num1 , double num2){
    double result = num1 + num2;
    return result;
    }
   float sum (float num1 , float num2){
    float result = num1 + num2;
    return result;
    }

     // Methods to calc the sub with int and double and float

   int sum (int num1 , int num2){
    int result = num1 - num2;
    return result;
    }
   double sum (double num1 , double num2){
    double result = num1 - num2;
    return result
    }
   float sum (float num1 , float num2){
    float result = num1 - num2;
    return result;
    }

     // Methods to calc the multi with int and double and float

   int sum (int num1 , int num2){
    int result = num1 * num2;
    return result;
   }
   double sum (double num1 , double num2){
    double result = num1 * num2;
    return result;
   }
   float sum (float num1 , float num2){
    float result = num1 * num2;
    return result;
   }

   // Methods to calc the div with int and double and float

   int sum (int num1 , int num2){
    int result = num1 / num2;
    return result;
   }
   double sum (double num1 , double num2){
    double result = num1 / num2;
    return result;
   }
   float sum (float num1 , float num2){
    float result = num1 / num2;
    return result;
   }

    // Structs for student and employee and teacher

    struct student{
        char name [60];
        char major [60];
        char student_class [60];
        int age;
        double GPA;

        }    ;

    struct teacher{
    char name [50];
    char major [40];
    char teacher_class [30];
    int number_of_student;
    char uni_gradiuate [50];

    };

    struct employee {
    char name [50];
    char major [50];
    char uni_gradiuate [50];
    int place;
    int age;
    double salary;
    } ;

int main()
{
    // Program which ask the user his name and age , after that print the name and age//

    char name[100];
    int age;
    printf("enter your name : ");
    scanf("%s" , &name );
    printf("enter your age :  ");
    scanf("%d", &age);

    printf("your name is : %s \n" , name);
    printf("your age is : %d \n" , age);

    // this program you can use it to add two numbers
      double num1 , num2 , sum;
    printf("enter the first number : ");
    scanf("%lf" , &num1);
    printf("enter the second number : ");
    scanf("%lf", &num2);
    sum = num1 + num2 ;
    printf("the sum is : %lf " ,sum ) ;

    // program that ask for two numbers and calc them with show the user a list of opraters

     char op ;
    double num2 ;
    double num1 ;

  printf("enter the first number : ");
   scanf("%lf" , &num1);

  printf("enter the second number : ");
   scanf("%lf" , &num2);

    printf("select from this list : \n");

    printf(" + \n");
    printf(" - \n");
    printf(" * \n");
    printf(" / \n");
    scanf(" %c" , &op);

        if( op == '+'){
    printf("the answer is : %lf" , num1 + num2 );
    }   else if (op == '-'){
    printf("the answer is : %lf" , num1 - num2 );
    }   else if (op == '*'){
    printf("the answer is : %lf" , num1 * num2 );
    }   else if (op == '/'){
    printf("the answer is : %lf" , num1 / num2 );
    }   else{
    printf(" wrong choice");
    }

    // This program will show you the weekday by enter the number of the day

     int daynum ;
   printf(" enter the number of the day : ");
   scanf("%d" , &daynum);

     if(daynum == 1){
       printf(" Sunday ");
   } else if (daynum == 2) {
       printf(" Monday");
   } else if (daynum == 3){
       printf(" Tuesday");
   } else if (daynum == 4 ){
       printf(" Wednesday");
   } else if (daynum == 5 ){
       printf(" Thursday");
   } else if (daynum == 6 ){
       printf(" Friday");
   } else if (daynum == 7){
       printf(" Saturday");
   } else {
       printf(" Try again");
   }

       // program that ask you about your first and last name to print them

   char Fname [20] , Lname [20];

   printf("enter the first name : ");
   scanf("%s" , &Fname);

   printf("enter the last name : ");
   scanf("%s", &Lname);

   printf(" your name is  : %s %s " , Fname , Lname);


        // Rectangle program

   int width , length ;

   printf(" enter the width : ") ;
   scanf("%d" , &width);

   printf("enter the length : ");
   scanf("%d" , &length);

   printf("the area of rectangle with width %d and length %d is : %d " , width , length , width * length);4


   // Program calc the greads

   double grade;

   printf("enter your mark : ");
   scanf("%lf" , &grade);

     if(grade >= 95 && grade <= 100){
    printf("A+");
   } else if(grade >= 90 && grade <= 100){
    printf("A");
   } else if(grade >= 85 && grade <= 100){
    printf("B+");
   } else if(grade >= 80 && grade <= 100){
    printf("B");
   } else if(grade >= 75 && grade <= 100){
    printf("C+");
   } else if(grade >= 70 && grade <= 100){
    printf("C");
   } else if(grade >= 65 && grade <= 100){
    printf("D+");
   }else if(grade >= 59.1 && grade <= 100){
    printf("D");
    }else if(grade <= 59 && grade > 0 && grade <= 100){
    printf("F");
    } else if (grade < 0) {
    printf("Try again with positive number");
    } else{
     printf("You have to try from 1 to 100 only ");
    }


    // The same program but in switch statement

   int grade ;
    printf("select from this list : ");;
    printf("1. 95 to 100 \n 2. 90 to 94 \n 3. 85 to 89 \n 4. 80 to 84 \n 5. 75 to 79 \n 6. 70 to 74 \n 7. 65 to 69 \n 8. 59.01 to 64 \n 9. 59 to 0");
    printf("select here : ");
    scanf("%d", &grade);
    switch(grade){
    case 1 :
        printf("A+ ");
        break;
    case 2 :
        printf("A ");
        break;
    case 3 :
        printf("B+ ");
        break;
    case 4 :
        printf("B ");
        break;
    case 5 :
        printf("C+ ");
        break;
    case 6 :
        printf("C");
        break;
    case 7 :
        printf("D+");
        break;
    case 8 :
        printf("D");
        break;
    case 9 :
        printf("F");
        break;

    default :
        printf(" wrong choice");
    }

    // Program  calc the average for student marks

     int counter ;
   double sum = 0;
   double marks;
   int num_s;
   printf("enter the number of student : ");
   scanf("%d", &num_s);
   while(counter <= num_s){
    printf(" enter the mark for student number %d :  \n", counter+1  );
     scanf("%lf" , &marks);
     sum+= marks;
     counter++;
   }
   printf("the average of students mark is : %lf " , sum / 3 );


   // The same program but the number of student is 10

    int counter ;
   double sum = 0;
   double marks;
   while(counter <= 10){
    printf(" enter the mark for student number %d :  \n", counter  );
     scanf("%lf" , &marks);
     sum+= marks;
     counter++;
   }
   printf("the average of students mark is : %lf " , sum / 3 );


   // Program take only positive number from the user to clac the sum and average

    double sum = 0;
  double num;
  bool positve = true;

  while(positve){
    printf("enter the positive number : \n");
    scanf("%lf" , &num);

    if(num < 0){
        positve = false;
        printf("The negative numbers are invalid \n");
    }
    else
        sum+= num;
  }
  printf("The sum of positive numbers is : %lf and the average is : %lf" , sum , sum/3);

    return 0;
}

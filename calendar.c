#include<stdio.h> /*header file*/

int first_day (int k, int m, int c, int y); /*First day function prototype*/
void calendar(int first5,int first6); /* Calendar function prototype*/
int main()
{
   char month[20]; /*Will store month*/
   int year;       /*Will store year*/
   int first1=1;   /*value of k*/
   int first2,first3,first4; /*will store m,c,and y*/
   int sami;                 /*Will store first day*/
   int days;                 /*will store number of days*/
   char first7[]="Sun";
   char first8[]="Mon";
   char first9[]="Tue";
   char first10[]="Wed";
   char first11[]="Thu";
   char first12[]="Fri";
   char first13[]="Sat";


   printf("Enter the month:"); /*Promoting message*/
   gets(month);                /*Getting month from user*/
   printf("Enter the year:");  /*Promoting message*/
   scanf("%d",&year);           /*Getting year from user*/



    if (strcmp(month, "january") == 0||(strcmp(month, "JANUARY") == 0)||(strcmp(month, "January") == 0))/*Check month*/
    {
        first2=11;   /* Assigning value according to month */
        days=31;     /* Assigning days according to month */
    }

    if (strcmp(month, "february") == 0||(strcmp(month, "FEBRUARY") == 0)||(strcmp(month, "February") == 0))/*Check month*/
    {
        first2=12;/* Assigning value according to month */
        /*checking leap year*/
        if(year%4==0)
        {
            days=29;
        }
        else if(days%100==0)
        {
            days=28;
        }
        else if(days%400==0)
        {
            days==29;
        }
        else
        {
            days=28;
        }
    }

    if (strcmp(month, "march") == 0||(strcmp(month, "MARCH") == 0)||(strcmp(month, "March") == 0))/*Check month*/
    {
        first2=1; /* Assigning value according to month */
        days=31; /* Assigning days according to month */
    }
    else if (strcmp(month, "april") == 0||(strcmp(month, "APRIL") == 0)||(strcmp(month, "April") == 0))/*Check month*/
    {
        first2=2; /* Assigning value according to month */
        days=30; /* Assigning days according to month */
    }
    else if (strcmp(month, "may") == 0||(strcmp(month, "MAY") == 0)||(strcmp(month, "May") == 0))/*Check month*/
    {
       first2=3; /* Assigning value according to month */
       days=31; /* Assigning days according to month */

    }
    else if (strcmp(month, "june") == 0||(strcmp(month, "JUNE") == 0)||(strcmp(month, "June") == 0))/*Check month*/
    {
        first2=4; /* Assigning value according to month */
        days=30; /* Assigning days according to month */
    }
    else if (strcmp(month, "july") == 0||(strcmp(month, "JULY") == 0)||(strcmp(month, "July") == 0))/*Check month*/
    {
        first2=5; /* Assigning value according to month */
        days=31; /* Assigning days according to month */
    }
     else if (strcmp(month, "august") == 0||(strcmp(month, "AUGUST") == 0)||(strcmp(month, "August") == 0))/*Check month*/
     {
        first2=6; /* Assigning value according to month */
        days=31;  /* Assigning days according to month */
     }
     else if (strcmp(month, "september") == 0||(strcmp(month, "SEPTEMBER") == 0)||(strcmp(month, "September") == 0))/*Check month*/
     {
         first2=7; /* Assigning value according to month */
         days=30; /* Assigning days according to month */

     }
     else if (strcmp(month, "october") == 0||(strcmp(month, "OCTOBER") == 0)||(strcmp(month, "October") == 0))/*Check month*/
     {
         first2=8; /* Assigning value according to month */
         days=31; /* Assigning days according to month */
     }
     else if (strcmp(month, "november") == 0||(strcmp(month, "NOVEMBER") == 0)||(strcmp(month, "November") == 0))/*Check month*/
     {
         first2=9; /* Assigning value according to month */
         days=30; /* Assigning days according to month */
     }
     else if (strcmp(month, "december") == 0||(strcmp(month, "DECEMBER") == 0)||(strcmp(month, "December") == 0))/*Check month*/

      {
          first2=10;/* Assigning  value according to month */
          days=31; /* Assigning days according to month */
      }



    first3=year/100; /* Calculating century */

     /* Assigning year value according to month */
    if (strcmp(month, "january") == 0||(strcmp(month, "JANUARY") == 0)||(strcmp(month, "January") == 0))/*Check month*/
    {
        first4=13;
    }


    /* Assigning year value according to month */
    if (strcmp(month, "february") == 0||(strcmp(month, "FEBRUARY") == 0)||(strcmp(month, "February") == 0))/*Check month*/
    {
        first4=13;
    }
   else
   {
          first4=year%100;
   }



 sami=first_day (first1, first2, first3, first4);  /*First day function call*/
 printf("%3s%3s%3s%3s%3s%3s%3s\n",first7,first8,first9,first10,first11,first12,first13); /*Printing days names*/
 calendar(sami,days);                                /*Calendar function call*/

return 0;

}

int first_day (int k , int m , int c , int y ) /*First day function header*/
{
 int  w,p;
  if(y==00) /*checking if the year ends with double zero*/
  {
      c-=1;
      y=99;
  }

 w=(k+(int)(2.6*m-0.2)-2*c+y+(int)(y/4)+(int)(c/4))%7; /*Function to find first day*/ /*Typecast to avoid truncating*/
if(w<0)
{
    w+=7;
}


 return w;

}
void calendar(int first5,int first6) /*Function to print calendar*/
{
   int o;                            /*Incrementer*/

   for(o=0;o<first5;o++)            /*loop to check if a day is empty*/
   {
       printf("   ");
   }
   for(o=1;o<=first6;o++)        /*Loop to print day number*/
   {
       printf("%3d",o);
       /*To check when to move to next line*/
        first5=(first5+1)%7;
        if(first5==0)
        {
            printf("\n");  /*Print empty line*/
        }

   }
}








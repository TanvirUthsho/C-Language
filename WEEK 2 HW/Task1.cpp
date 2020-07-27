#include<stdio.h>
 int main()
  {
       float variable; 
printf("Enter a number:"); 
scanf("%f",&variable);
 if(variable>=0)
  {
       printf("\tThe number is positive \n");
        }
         if(variable<0) 
         {
              printf("\tThe number is negative \n");
               } if(variable-(int)variable==0&&variable>0)
                { 
                    printf("\tand\nThe number is natural\n");
                 } 
                 if(variable-(int)variable!=0&&variable<0)
                  
                {
                      printf("\tand \n\tthe number is rational\n"); 
                      }

                       }
                
            //Output:
            //Enter a number:6
                 //The number is positive        
                //and
           //The number is natural

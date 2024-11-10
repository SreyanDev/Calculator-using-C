#include<stdio.h>                       //Standard input output header file all the predefined functions stored in this file.

int main()                              //Main function.

{
    float a,b,result;                   //Variable declaration.
    char operator;                      

    printf("Enter the operator (+,-,*,/):  ");                  
    scanf("%c",&operator);                              //Asking the user input for the operator.

    printf("Enter the two integer or float numbers: \n");
    scanf("%f%f",&a,&b);                                        //Asking the user input for the a and b integer or float numbers.

 

    switch(operator)                                            //It displays a case when a operator is typed by the user.
    {
        case '+':
                result=a+b;
                printf("The sum of %.3f and %.3f is %.3f",a,b,result);                  //%.3f is used to display only 3 decimal values unlike 6 as defualt.
                break;
        
        case '-': 
                result=a-b;
                printf("The difference of %.3f and %.3f is %.3f",a,b,result);
                break;

        case '*': 
                result=a*b;
                printf("The product of %.3f and %.3f is %.3f",a,b,result);
                break;

        case '/': 

                if(b!=0)                                        //Telling the computer to check wheather the b is 0 or not.
                                                                //If b is not 0 then if statement executes else it executes the else statement.
                {
                        result=a/b;
                        printf("The division of %.5f and %.5f is %.5f",a,b,result);
                        break;

                }
                else
                {
                        printf("Since the b is 0 the answer %.3f / %.3f is not defined",a,b);
                        break;
                }

        default: 
                                                       //If the user gives different symbol except +,-,*,/ then it executes the default statement.

                printf("Invalid Operation, please enter the valid operators(+,-,*,/)");
                break;


    }
    
    return 0;


}
#include<stdio.h>                     //Header files
#include<stdlib.h>
#include<math.h>
int fact(int);                         //Function prototype for finding factorial
main()
{
    int n,f;                           //Variable declaration
    printf("Enter the value of n\n");  //Display user to enter the value
    scanf("%d",&n);                    //Read the value
    if(n>=0)                           //Check the condition if the value is valid
    {
        f=fact(n);                     //If true call fact function
        printf("%d!=%d",n,f);          //Display the factorial
    }
    else
    {
        printf("Invalid input\n");     //Display invalid input
    }
}
int fact(int n)                       //Function definition
{
    int i,f=1;                        //variable declaration for counter and to store the result.
    for(i=1;i<=n;i++)                 //loop till the counter i equals n value
        f=f*i;                        //Multiply f with updated i values
    return f;                         //return result
}

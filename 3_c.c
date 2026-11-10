#include <stdio.h> //include the standard input-output library

//main function with an explicit return type
int main()
{
    int n,s,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThe reverse number is: ");
    while(n!=0)
    {
        r=n%10;
        printf("%d", r);
        n=n/10;
    }
    return 0;
}
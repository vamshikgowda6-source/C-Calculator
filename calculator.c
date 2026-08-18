#include <stdio.h>
#include <math.h>
int main(){
    printf("Simple C Calculator\n");
    printf("Operations: + - * / %% ^ (power)\n");
    printf("Enter 'q' to quit.\n\n");
    char choice;
    int a,b;
    // for (int i = 0; i < 1; i++)
    while (1)
    {
        printf("Choose operation (+ - * / %% ^) or q to quit:");
        scanf(" %c",&choice);
    switch (choice)
    {
    case '+':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d + %d= %d\n\n",a,b,a+b);
        break;
    
    
    case '-':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d - %d= %d\n\n",a,b,a-b);
        break;
    
    
    case '*':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d * %d= %d\n\n",a,b,a*b);
        break;
    
    
    case '/':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d / %d= %d\n\n",a,b,a/b);
        break;
    
    
    case '%':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d %% %d= %d\n\n",a,b,a%b);
        break;
    
    
    case '^':
        printf("Enter two numbers (seperated by space):");
        scanf("%d %d",&a,&b);
        printf("%d ^ %d= %f\n\n",a,b,pow(a,b));
        break;

    case 'q':
        printf("Thank You,Visit again\n\n");
    }
    
    } //while
    return 0;
}
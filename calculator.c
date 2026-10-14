#include <stdio.h>
#include <math.h>
int main(){
    printf("Scientific C Calculator\n");
    printf("Operations: + - * / %% ^ sinx\n");
    printf("Enter 'q' to quit.\n\n");
    char choice;
    int a,b;
    float c;

    while (1)
    {
        printf("Choose operation (+ - * / %% ^ s=sinx) or q to quit:");
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


    case 's':
        printf("Enter the value of x:");
        scanf("%f",&c);
        printf("sin(%f)=%f\n\n",c,sin(c));
        break;

    case 'q':
        printf("Thank You,Visit again\n\n");
    }
    
    } //while
    return 0;
}
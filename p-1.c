#include<stdio.h>
void calculator()
{
    int n,no1,no2;
    do{
        printf("\n----- Calculator Menu -----");
        printf("\nPress 1 for + ");
        printf("\nPress 2 for - ");
        printf("\nPress 3 for * ");
        printf("\nPress 4 for / ");
        printf("\nPress 5 for %% ");
        printf("\nPress 0 for EXIT");
        printf("\n---------------------------");
        printf("\n----->Enter:");
        scanf("%d",&n);
        if(n<0 || n>5)
        {
            printf("!!! Please Enter valid No");
            continue;
        }
        if(n==0)
        {
            printf("Exited !");
            break;
        }
        printf("\nEnter no1:");
        scanf("%d",&no1);
        printf("\nEnter no2:");
        scanf("%d",&no2);
        switch(n)
        {
            case 1:
            printf("\nAddition of %d and %d is: %d",no1,no2,no1+no2);
            break;
            case 2:
            printf("\nSubtraction of %d and %d is: %d",no1,no2,no1-no2);
            break;
            case 3:
            printf("\nMultipliaction of %d and %d is: %d",no1,no2,no1*no2);
            break;
            case 4:
            printf("\nDivision of %d and %d is: %d",no1,no2,no1/no2);
            break;
            case 5:
            printf("\nModule of %d and %d is: %d",no1,no2,no1%no2);
            break;
            default:
            printf("\nPlease Enter valid number 0 to 5:");
        }
    }while(n!=0);
}
int main()
{
    calculator();
}
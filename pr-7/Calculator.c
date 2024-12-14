#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("not divide by zero !!");
        return 0;
    }
}
int moduls(int a, int b)
{
    return a % b;
}
void main()
{

    int choice;
    int a, b;

    do
    {
        printf("\n Press 1 for + ");
        printf("\n Press 2 for - ");
        printf("\n Press 3 for * ");
        printf("\n Press 4 for / ");
        printf("\n Press 5 for %%");
        printf("\n Press 0 for the exit  \n\n");

        printf("Press Your Symboles :-");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
        else if (choice >= 1 && choice <= 5)
        {
            printf("Press  First Number:-");
            scanf("%d", &a);
            printf("Press Last Nmber:-");
            scanf("%d", &b);
        }
         switch (choice)
        {
        case 1:
            printf("\nadd is %d & %d :- %d\n", a, b, add(a, b));

            break;

        case 2:
            printf("\nsub is %d & %d :- %d\n", a, b, subtraction(a, b));

            break;

        case 3:
            printf("\nmul  is %d & %d :- %d\n\n", a, b, multiplication(a, b));

            break;

        case 4:

            printf("\nDiv  is %d & %d :- %d\n\n", a, b, divide(a, b));

            break;

        case 5:
            printf("\nMod  is %d & %d :- %d\n\n", a, b, moduls(a, b));
            break;

        default:
            printf("\n\n please try again...\n");
        }
    } while (1);

}
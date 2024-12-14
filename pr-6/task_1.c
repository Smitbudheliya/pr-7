#include <stdio.h>
#include <string.h>
main()

{
    int count =  20;
    char name [count];
    // printf("enter any string number :-");
    // scanf("%d", &string);

    // char string[count], copy[count];
    printf("enter any name:-");
    scanf("%[^\n]", &name);

    char copy[count];

    // printf("%s \n\n",string);

    for (int i = 0; i < count; i++)
    {
        copy[i] = name[i];
    }
    // printf("copy name :- %s", copy);

    int length = strlen(copy);
    int l = length - 1;
    int temp, i = 0;
    while (i < l)
    {
        temp = copy[i];
        copy[i] = copy[l];
        copy[l] = temp;
        l--;
        i++;
    }

    int condition = 0;

    for (int i = 0; i < length; i++)
    {
        if (name[i] != copy[i])
        {
            condition = 1;
            break;
        }
    }

    if (condition == 1)
    {
        printf("this name is not palindrom...");
    }
    else
    {
        printf("this name is palindrom...");
    }
}
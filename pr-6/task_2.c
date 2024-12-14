#include <stdio.h>
#include <string.h>

void main()
{
    char string[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &string); 

    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        int feq = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (string[i] == string[j]) 
            {
                feq++; 
                string[j] = '\0';
            }
        }

        if (string[i] != '\0')
            printf("%c => %d\n", string[i], feq); 
        }
}
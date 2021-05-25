#include<stdio.h>
main()
{
    printf("Choose a number: \n 1. Monday\n 2. Wednesday\n 3. Friday\n 4. Saturday");
    int choice=0;
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("You chose Monday.");
        case 2:
        printf("You chose Wednesday.");
        case 3:
        printf("You chose Friday.");
        case 4:
        printf("You chose Saturday.");
        default: printf("You chose an invalid number. Please enter a valid number");
    }
}

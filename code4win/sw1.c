
#include <stdio.h>

int main() {
    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);
    switch(day) {
        case 1:

            printf("Saturday");
        break;

        case 2:
            printf("Sunday");


        break;

        case 3:
            printf("Monday");

        break;
        case 4:
            printf("Tuesday");

        break;
        case 5:
            printf("Wednesday");

        break;
        case 6:
            printf("Thursday");
            
        break;
        case 7: printf("Friday");

        break;

    }




    return 0;
}

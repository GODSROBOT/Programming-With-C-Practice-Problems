//Days conversion 
//Input a total number of days and convert it into weeks and remaining days. 

#include <stdio.h>
int  main(){
    int day, weeks, remainingDays;
    printf("Enter a total Number of days:\n");
    scanf("%d",&day);
    weeks = day / 7;
    remainingDays = day % 7;
    printf("Number of weeks: %d\n", weeks);
    printf("Remaining days in the week: %d\n", remainingDays);
    return 0;
}
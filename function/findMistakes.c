#include <stdio.h>

void equalYear();
void overYear(int currentYear);
int year = 2021;
char content[40] = "Practice base C programming course.";
void main()
{
    
    int currentYear;
    top:
    printf("Enter current Year!\n");
    scanf("%d", &currentYear);
    
    if(currentYear < year){
         printf("Please enter the correct year\n");
        goto top;
    }
    if (currentYear == year)
    {
        return equalYear();
    }
    if (currentYear > year)
    {
        return overYear(currentYear);
    }
}

void equalYear()
{
    printf("Alhamdulliah!\nOur tutorial published date is not much.\nIt\'s same year\n");
}
void overYear(int currentYear)
{
        printf("Subhanallh! Our tutorial published date is over %d year\n", currentYear - year);
}
// Paul Carter
// 10/20/2023
// Practice

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int daysTillGraduation(char *graddate);

int main() {
    srand(time(NULL));
    char graddate[11];  // Assuming the date is entered as a string in the format "YYYY-MM-DD"
    
    printf("What is the date of your graduation? (YYYY-MM-DD): ");
    scanf("%s", graddate);
    
    int daysleft = daysTillGraduation(graddate);
    
    if (daysleft >= 0) {
        printf("You have %d days left till graduation\n", daysleft);
    } else {
        printf("Invalid date or graduation date has already passed.\n");
    }

    return 0;
}

int daysTillGraduation(char *graddate) {
    struct tm graduation_time = {0}; // Initialize the struct to 0
    time_t current_time, graduation_seconds;

    time(&current_time);
    sscanf(graddate, "%d-%d-%d", &graduation_time.tm_year, &graduation_time.tm_mon, &graduation_time.tm_mday);

    if (graduation_time.tm_year < 1900 || graduation_time.tm_mon <= 0 || graduation_time.tm_mon > 12 || graduation_time.tm_mday <= 0 || graduation_time.tm_mday > 31) {
        return -1;  // Invalid date
    }

    graduation_time.tm_year -= 1900;  // Adjust for the year
    graduation_time.tm_mon -= 1;      // Adjust for the month

    graduation_seconds = mktime(&graduation_time);

    if (graduation_seconds == -1) {
        return -1;  // Invalid date
    }

    int daysleft = (graduation_seconds - current_time) / (60 * 60 * 24);

    return daysleft;
}


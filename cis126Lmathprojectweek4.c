// Paul Carter
// 10/24/20223
// Math Project

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(float x, float y);

float validateAnswer(float correctAnswer, float userAnswer, int *numProblems, int *correctAnswers); // global variables
int numProblems = 0;  // global variable
int correctAnswers = 0; // global variable

int main() {
    char mainMenu[] = "Paul Carter Math Program Practice Main Menu!";  // Character array for user's name
	char userName[] = "Paul Carter";
    srand(time(NULL));
    puts(mainMenu);

    // Get and display the current time
    time_t current_time = time(NULL);
    char *c_time_string = ctime(&current_time);
    printf("Current time is %s", c_time_string);

    
    printf("Hello, %s!\n", userName);

    int math = 0;
    

    float userAnswer;  // Declare userAnswer here

    while (math != 5) {
        printf("Choose a math operation\n\t 1 add\n\t 2 sub\n\t 3 mult\n\t 4 div\n\t 5 exit\n\t");
        scanf("%d", &math);

        if (math == 5) {
            printf("Thank you, %s, for using the program!\n", userName);
            break;
        }

        switch (math) {
            case 1: {
                int num1 = rand() % 100 + 1;
                int num2 = rand() % 100 + 1;

                printf("What is %d + %d? ", num1, num2);
                scanf("%f", &userAnswer);
                correctAnswers += validateAnswer(add(num1, num2), userAnswer, &numProblems, &correctAnswers);
                break;
            }

            case 2: {
                int num1 = rand() % 100 + 1;
                int num2 = rand() % 100 + 1;

                printf("What is %d - %d? ", num1, num2);
                scanf("%f", &userAnswer);
                correctAnswers += validateAnswer(subtract(num1, num2), userAnswer, &numProblems, &correctAnswers);
                break;
            }

            case 3: {
                int num1 = rand() % 100 + 1;
                int num2 = rand() % 100 + 1;

                printf("What is %d * %d? ", num1, num2);
                scanf("%f", &userAnswer);
                correctAnswers += validateAnswer(multiply(num1, num2), userAnswer, &numProblems, &correctAnswers);
                break;
            }

            case 4: {
                float num1 = rand() % 100 + 1;
                float num2 = rand() % 10 + 1;

                if (num1 < num2) {
                    float temp = num1;
                    num1 = num2;
                    num2 = temp;
                }

                float correctResult = divide(num1, num2);

                printf("What is %.0f / %.0f? ", num1, num2);
                scanf("%f", &userAnswer);
                correctAnswers += validateAnswer(correctResult, userAnswer, &numProblems, &correctAnswers);
                break;
            }

            default:
                printf("That is an invalid choice. Please choose a valid option.\n");
        }
    }

    

    if (numProblems > 0) {
        float percentage = (float)correctAnswers / numProblems * 100;
        printf("You attempted %d, problems and got %d problems right\n", numProblems, correctAnswers);
        printf("For a Percentage correct: %.2f\n", percentage);
    } else {
        printf("No problems attempted.\n");
    }

    return 0;
}

float validateAnswer(float correctAnswer, float userAnswer, int *numProblems, int *correctAnswers) {
    float epsilon = 0.01;

    (*numProblems)++;

    if (fabs(userAnswer - correctAnswer) < epsilon) {
        printf("That is correct!\n");
        return 1.0;
    } else {
        printf("That is incorrect! The correct answer is %.2f\n", correctAnswer);
        return 0.0;
    }
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;  // Return 0 as an error value
    }
    return x / y;
}


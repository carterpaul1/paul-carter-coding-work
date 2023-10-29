# Paul Carter
# 09/26/2023
# number guessing game

import random


print("Welcome to the number guessing game!")
name = input("What is your name?: ")
print(f"welcome, {name}, lets get started")

doItAgain = "yes" 
while doItAgain == "yes" or doItAgain == "y":
    

    num = random.randint(1,6)

    user_guess = 0
    guess = 0
    

    while user_guess != num:
        user_guess = int(input("Please take a guess between 1 and 6!: "))
        guess += 1
        
        if user_guess<num:
            print("Guess is to low try again!")
        elif user_guess>num:
            print("Guess is to high try again!")
            
        
    print(f" {name}, You guessed it!. You won in {guess} guesses!")
            
        
    

    
    print("Do you want to play again?")
    doItAgain = input("enter yes or no: ")
        
   
      

print("Thanks for playing the number guessing game!")







                       

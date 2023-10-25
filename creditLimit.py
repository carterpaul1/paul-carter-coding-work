# Paul Carter
# 10/13/2023
# Credit Limit

accountNumber = 0
credits = 0
beginningBalanace = 0
balance = 0
creditLimit = 0
charges = 0
doItAgain = "yes"

while doItAgain == "yes":
    accountNumber = float(input("Enter the account number: "))
    beginningBalance = float(input("Enter the beginning balance: "))
    charges = float(input("Enter the charges: "))
    credits = float(input("Enter the credits: "))
    creditLimit = float(input("Enter the credit limit: "))

    balance = beginningBalance + charges - credits

    if balance < creditLimit:
        print("Account Nummber:", accountNumber)
        print("Credit Limit: " , creditLimit)
        print("Balance: ", balance)
        print("You still have available credit left!")

    else:
        print("Account Number: ", accountNumber)
        print("Credit Limit: ", creditLimit)
        print("Balance: ", balance)
        print("You have exceeded your credit limit!")

    doItAgain = input("Do you want to input another account number?(yes/no)")
    

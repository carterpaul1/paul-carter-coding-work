# Paul Carter
# 10/25/2023
# coding challenge get numbers, display forwards and reverse, average the numbers

def main ():

    prompt = "You will be entering your name.\n"
    prompt1 = "You will be entering 5 numbers.\n"
    numbers =[0.0] * 5 # initalized the list with zeros
    counter = 0
    average = 0
    summation = 0.0
    doItAgain = 'y'

    while doItAgain == 'y':
        

        name  = input(prompt)
        print(name)
        print("\n")

        print(prompt1)
        for counter in range(5):
            numbers[counter] = float(input("Enter a number: : "))
        

        for counter in range(5):
            summation = summation + numbers[counter]

        average = summation / 5

        print(f"The average of those numbers are: {average}\n")

        print("The numbers in forward order\n")
        for counter in range(5):
            print(f"{numbers[counter]:.2f}\n")
        
        print("The numbers in reverse order\n")
        for counter in range (4, -1, -1):
            print(f"{numbers[counter]:.2f}\n")
            
        doItAgain = input("Do you want to run this program again? (y/n): ")
    
        
if __name__ == "__main__":
        main()
        
        
        
          
        
                 
   
    

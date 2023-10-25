# Paul Carter
# 10/25/2023
# Airline seat boarding pass

NUM_Seats = 11

def isSeatAvailable(seatNumber, seats):
    return seats[seatNumber] == 0

def main():
    seats = [0] * NUM_Seats
    seatsSold = 0

    while seatsSold < 10:
        print("Enter 1 for 'first-class' or 2 for 'economy': ")
        try:
            choice = int(input())
        except ValueError:
            print("Invalid input. Please enter a number.")
            continue

        while choice != 1 and choice != 2:
            print("Invalid choice. Please enter 1 for 'first-class' or 2 for 'economy': ")
            try:
                choice = int(input())
            except ValueError:
                print("Invalid input. Please enter a number.")
                continue

        seatAssigned = 0

        if choice == 1:
            for i in range(1, 6):
                if isSeatAvailable(i, seats):
                    print(f"Boarding pass: Seat {i} in first-class.")
                    seats[i] = 1
                    seatAssigned = 1
                    break

            if not seatAssigned:
                print("First-class is full.")
        elif choice == 2:
            for i in range(6, 11):
                if isSeatAvailable(i, seats):
                    print(f"Boarding pass: Seat {i} in economy.")
                    seats[i] = 1
                    seatAssigned = 1
                    break

            if not seatAssigned:
                print("Economy is full.")
        else:
            print("Invalid choice. Please enter 1 for 'first-class' or 2 for 'economy'.")

        seatsSold += seatAssigned

    if seatsSold == 10:
        print("The flight is full. The next flight leaves in 3 hours.")

if __name__ == "__main__":
    main()

               
                
                
                
                
                
        
        

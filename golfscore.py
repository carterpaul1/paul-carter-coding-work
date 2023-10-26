# Paul Carter
# 10/26/2023
# Golf score program

def main():
    scores = [0] * 9

    print("You will enter the score for each hole.\n")

    for counter in range(9):
        scores[counter] = int(input("Enter the score for hole %d: " % (counter + 1)))

    totalScore = computeTotal(scores)

    print("\nScores for each hole\n")

    for counter in range(9):
        print("Hole %d: %d" % (counter + 1, scores[counter]))

    print("\nOverall Total Score: %d\n" % totalScore)

    if totalScore < 45:
        print("Congratulations! You won this time!\n")
    else:
        print("Better luck next time!\n")

def computeTotal(scores):
    total = sum(scores)
    return total

if __name__ == "__main__":
    main()

    

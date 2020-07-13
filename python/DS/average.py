def Average():
    Num = None
    Sum = 0
    i = 0
    print("Enter the number to sum: ",end = "")
    Num = int(input())
    print("")
    while(Num != 0):
        Sum += Num
        i +=1
        print("Enter the number to sum: ",end = "")
        Num = int(input())
        print("")
    avg = Sum/ i
    return avg

average_number = Average()
print("The average is: " , average_number)

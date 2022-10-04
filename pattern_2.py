n=int(input("Enter the number of rows"))
for r in range(1,n+1):
    for space in range(1,n-r+1):
        print(" ",end=" ")
    for star in range(1,r+1):
        print("*",end=" ")
    print("\r")
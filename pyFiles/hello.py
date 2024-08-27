num = int(input("enter a number"))
for i in range(num):
    for j in range(i):
        print(chr(64+j+1)+(chr(65)),end=" ")
    print()
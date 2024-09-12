# Program to find the sum of all number divisible by 7 between 1 to 100. 
sum=0
for i in range(1,101):
    if i % 7 == 0:
        sum+=i
print("total of number divisible by 7 between 1 to 100 is ",sum)
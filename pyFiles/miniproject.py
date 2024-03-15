#Calcultor

first=input("Give 1st Number : ")
second=input("Give 2nd number : ")
operator=input("Give the operation you want to perform (+,-,*,/,%) :- ")

first=int(first)
second=int(second)

if operator=="+" :
    print(first+second)

elif operator=="-" :
    print(first-second)    

elif operator=="*" :
    print(first*second)   

elif operator=="/" :
    print(first/second)   

elif operator=="%" :
    print(first%second)   

else :
    print("invalid operation !")
def check_odd_even(number):
    if number % 2 == 0:
        return "Even"
    else:
        return "Odd"

# Example usage
number = int(input("Enter a number: "))
result = check_odd_even(number)
print(f"The number {number} is {result}.")
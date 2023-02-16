#DIVIDE BY ZERO ERROR
num = int(input("enter the numerator: "))
den = int(input("enter the denominator: "))

try:
    result = num/den
    print(result)
except ZeroDivisionError:
    print("Error: Denominator cannot be 0.")

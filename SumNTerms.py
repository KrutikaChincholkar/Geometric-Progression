a = float(input("Enter first term (a): "))
r = float(input("Enter common ratio (r): "))
n = int(input("Enter number of terms (n): "))

if r == 1:
    sum_gp = a * n
else:
    sum_gp = a * (1 - r**n) / (1 - r)

print("Sum of GP =", sum_gp)

a = int(input("Enter first term (a): "))
r = int(input("Enter common ratio (r): "))
n = int(input("Enter term number (n): "))

term = a * (r ** (n - 1))

print("The", n, "th term of the GP is:", term)

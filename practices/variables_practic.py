# ME 6th Variables Practice


expressions = [
    "7 - 24 / 8 * 4 + 6",                     # = 1
    "18 / 3 - 7 + 2 * 5",                     # = 9
    "6 * 4 / 12 + 72 / 8 - 9",                # = 2
    "(17 - 6 / 2) + 4 * 3",                   # = 26
    "-2 * (1 * 4 - 2 / 2) + (6 + 2 - 3)",     # = -1
    "-1 * ((3 - 4 * 7) / 5) - 2 * 24 / 6",    # = -3
    "(3 * 5**2 / 15) - (5 - 2**2)",           # = 4
    "(1**4 * 2**2 + 3**3) - 2**5 / 4",        # = 23
    "(22 / 2 - 2 * 5)**2 + (4 - 6 / 6)**2"    # = 10
]


for i, expr in enumerate(expressions, 1):
    result = eval(expr)
    print(f"Expression {i}: {expr} = {result}")





expressions = [
    "7 - 24 / 8 * 4 + 6",                     # = 1
    "18 / 3 - 7 + 2 * 5",                     # = 9
    "6 * 4 / 12 + 72 / 8 - 9",                # = 2
    "(17 - 6 / 2) + 4 * 3",                   # = 26
    "-2 * (1 * 4 - 2 / 2) + (6 + 2 - 3)",     # = -1
    "-1 * ((3 - 4 * 7) / 5) - 2 * 24 / 6",    # = -3
    "(3 * 5**2 / 15) - (5 - 2**2)",           # = 4
    "(1**4 * 2**2 + 3**3) - 2**5 / 4",        # = 23
    "(22 / 2 - 2 * 5)**2 + (4 - 6 / 6)**2"    # = 10
]


for i, expr in enumerate(expressions, 1):
    result = eval(expr)
    print(f"Expression {i}: {expr} = {result}")




name = input("Whats your name\n")

number = input("A number between 1 and 10\n")

number_2 = input("A number between 100 and 1000\n")

breakfast = input("What you had for breakfast\n")

color = input("Whats your favorite color\n")

school = input("What the schools name\n")

year = input("What year is it\n")

eye = input("Your eye color\n")

age = input("Whats your age\n")

subject = input("Your favorite subject in school\n")

print("Hi there", name, "you picked the number", number, "another number you picked is", number_2, "for breakfast you had", breakfast, "your favorite color is", color, "you go to", school, "the year it is", year, "your eye color is", eye, "your age is", age, "and you favorite subject in school is", subject)
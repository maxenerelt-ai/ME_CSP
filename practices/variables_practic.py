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





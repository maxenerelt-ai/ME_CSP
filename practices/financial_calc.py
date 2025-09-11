# ME 6th Financial Calculator

income = float(input("whats your monthly income?\n")).title()

rent = float(input("how much do you spend on rent or mortgage?\n")).title()

utilities = float(input("how much do you spend on Utilities?\n")).title()

groceries = float(input("how much do you spend on groceries?\n")).title()

transportation = float(input("how much do you spend on transportation?\n")).title()

rent_1 = (income / rent) * 100

print(rent_1)
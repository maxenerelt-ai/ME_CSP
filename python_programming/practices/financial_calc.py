# ME 6th Financial Calculator

# Variables

income = float(input("whats your monthly income?\n"))

rent = float(input("how much do you spend on rent or mortgage?\n"))

utilities = float(input("how much do you spend on utilities?\n"))

groceries = float(input("how much do you spend on groceries?\n"))

transportation = float(input("how much do you spend on transportation?\n"))

# Percentage of what it takes up of

rent_percentage = (rent / income) * 100

utilities_percentage = (utilities / income) * 100

groceries_percentage = (groceries / income) * 100

transportation_percentage = (transportation / income) * 100

savings = income * 0.1

# Total Expense

total = rent + utilities + groceries + transportation + savings

change = income - total

# Print Statement

print("Hello There! You earn", income, "per month and your rent is", round(rent_percentage), "percent of your total income and your utility bill is", round(utilities_percentage), "percent of your income while your groceries take up", round(groceries_percentage), "percent of your income and you transportation percentage is", round(transportation_percentage), "you should save atleast", savings, "dollars of your income and your total expenses are", total, "thats alot while you have", change, "left.")
#ME 6th Are you old enough?

age = int(input("What is your current age?:"))

if age >= 18:
    print("You can vote!")
elif age >= 16:
    print("You can drive!")
elif age >= 15:
    print("You can get a learners permit!")
else:
    print("You can go to school!")
# ME 6th Loops Notes


# What is a loop? 
    #  Keep going until a specific condition is met
# What are the two types of loops?
    #  Regular loops and While loops
# What is iteration
    #  helps perform repetitive tasks one instance keeping track of how many times we loop ever it
# What are lists? 
    #  ordered/neat collection of items
# How do you make lists in python? 
    #  list = ["Apples", "Bannana", "Pineapple"] print(list)
        
# How do you make for loops in python? 
    #  fruits = ["apple", "banana", "cherry"]
#for fruit in fruits:
#print(fruit)
# How do you make while loops in python?
    #while x != number:
    #print("Duck")
    #x += 1


# lists first complex data type we learn about T^T

siblings = ["Zorro", "KK", 21, 41, 81]

print(siblings[3])
print(siblings)
siblings[4] = "Zorro"
siblings[1] = "KK"
siblings.remove(21)

#Structure for loop sibling is a temporary variable equals someone else until there are no items left first number equals start second equals stop third equals what we count by

for sibling in siblings:
    print(f"Hello {sibling}")

for x in range(1, 20):
    print(x)

for x in range(20, 1, -1):
    print(x)

# While loops
#infinite loops

#while True:
   # print("Oh NO!")


# Good While loop

i = 1



while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random

number = random.randint(1,20)
x = 1
"""while x != number:
    print("Duck")
    x += 1


print("Goose!")"""

while True:
    if number == x:
        print("Goose!")
        break
    else:
        print("Duck!")
        x += 1
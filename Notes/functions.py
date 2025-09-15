# ME 6th Functions Notes

import random

print("The print commmand is a function")


name = input("What is your name?")

print(f"Hello {name}!")

name = input("What is your name?")

print(f"Hello {name}!")

name = input("What is your name?")

def welcome():
    name = input("What is your name\n")
    print(f"Hello {name}!")

    print(f"The function is over")

welcome()
welcome()
welcome()
welcome()
welcome()
welcome()



# use the info somewhere else in the code in side {}


  #What a function is
#reusable block of code using def something()
   #Why we use functions
#Reuse code easily and more organized
   #How to write a function in Python
#def function(something)
#   something + something_2 = something_3
#function(13) makes something equal 13
   #What parameters and arguments are
#parameter is a variable declared in a function's definition argument is supplying the function with info while executing code
   #How to use parameters and arguments in python
#putting them in functions and below functions
   #What return statements are
#where you can use the code somewhere else in the code without using a special variable
  #How to use return statements in a program
#Define a function with a return type
def believe(sentence):
    length = len(sentence)
    spot_1= random(0, length -1)
    spot_2= random(0, length -1)
    spot_3= random(0, length -1)
    full_sentence = sentence.split()
    full-sentence.insert(spot_one, "Believe it!")
    full-sentence.insert(spot_one, "Believe it!")
    full-sentence.insert(spot_one, "Believe it!")
    sentence = full_sentence.join()
    return sentence


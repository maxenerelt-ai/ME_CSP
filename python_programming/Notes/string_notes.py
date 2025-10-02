# ME 6th String Notes

#I Did It

# Class Notes: String- Collection of symblos held together by quotation marks, string is only data type that can hold letters, types of quotation doesnt matter as long as they're the same,
# Bug- any error in your code that keeps it from runnning or makes it run improperly,

#String Exapmles

name = input("What is your name\n").strip().upper().capitalize().title()

sentence = "The quick brown fox jumps over the lazy dog."

first_name = input("Whats your first name?\n").title()

last_name = input("Whats your last name\n").title()

full_name = first_name + " " + last_name

print("Welcome to my program", full_name + "!")

#Stupid Proofing 
    #Strip .strip() gets rid of spaces from the start and the end
    #.upper() turns whole thing too upercase letters .lower() makes all lowercase
    #.capitalize() makes first letter capital .title() makes every first letter per space capital
    # To get rid of space use +
    # Bug- any error in your code that keeps it from runnning or makes it run improperly

#What makes something a string?
    # Symbols inside quotation marks
#Why do we have strings?
    # Strings are a fundamental data type in coding because they are designed to represent and manipulate text
#How do stupid proofing and sanitization relate to each other?
    #They both correct user error
#What is debugging?
    # Fixing problems in my code
#How do you debug the different types of errors?
    #Syntax string = 'this is my string" wrong code foretting a equal sign or comma etc 
    # Logic Error  Where our code does something we didnt expect it to do like instead of num_1 + num_2 = 123 it would be num_1 + num_2 = 14
    # Run-Time Error When there is a problem in the code which will break the code when it is trying to run (when it runs it breaks) variables spelled wrong
#Describe what each of the methods below does:
    #find() Tells you where brown is located in your variable sentence
    ##upper() Makes everything upper case
    #lower() Makes everything lower case
    #strip() Removes spaces at the front and back of their symbol input



from math import *
import standardplot
from Student import Student
import numpy as np

# print("   /| ")
# print("  / |")
# print(" /  |")
# print("/___|")
##########################

# character_name = "John"
#  x = 35;

# print("There once was a man named " + character_name + ",")
# print("he was years " + x + " old")

###############################################################

# my_num = 5
# print(str(my_num) + " is my favourite number")

# #############################################

# my_num1 = -5
# my_num2 = 5
# print(abs(my_num1))
# print(pow(my_num2,2))
# print(max(my_num1,my_num2))
# print(round(3.7))
# print(floor(3.3))
# print(ceil(3.7))
# print(sqrt(6))

#############################
# getting input
# age = input("Enter your age: ")
# name = input("Enter your name: ")
# print("Hello "+name+ " you are "+age+" years old")

################################################
#calculator
# num_1 = input("Enter number 1: ")
# num_2 = input("Enter number 2: ")
# result = float(num_1) + float(num_2)
# print(str(num_1)+" + " +str(num_2)+ " = "+str(result))

#######################################################
#mad libs

# color = input("Enter a color: ")
# noun = input("Enter a plural noun: ")
# celeb = input("Enter name of celebrity: ")

# print("roses are "+color)
# print(noun+ " are blue")
# print("I love " +celeb)

##############################################################

# lucky_numbers = [4,8,15,16,23,3]
# friends = ["Molly","Jack","Mary","Jim","Oscar"]


# friends2 = friends.copy()
# print(friends2)

# lucky_numbers.reverse()
# print(lucky_numbers)


# friends.sort()
# print(friends)
# lucky_numbers.sort()
# print(lucky_numbers)
# friends.append("Jim")
# print(friends.count("Jim"))
# friends[2] = "Pam"
# friends.insert(1,"Andy")
# print(friends)
# friends.remove("Jack")
# print(friends)
# friends.extend(lucky_numbers)
# print(friends)
# friends.append("Creed")
# print(friends)
# print(friends.index("Molly"))
# friends.pop()
# print(friends)
# friends.clear()
# print(friends)
#####################################################
##Tuple lists that are constant and cannot be changed (immutable)

# coordinates = [(4,5),(6,7),(80,34)]

# print(coordinates[2])

########################################################
#function

# def say_hi(name, age): 
    
#     print("Hello " +name+ " you are "+age+" years old")


# say_hi("ameer","23")
################################################
#return statements

# def add_Numbers(num_1,num_2):
#     return num_1 + num_2 #return forces program to leave the function

# def mult_Numbers(num_1,num_2):
#     return num_1*num_2

# def cube(num):
#     return pow(num,3)


# a = 3
# b = 3
# c = add_Numbers(a,b)
# print(c)
# print(mult_Numbers(a,b))
# print(cube(4))

##########################################################
#if statements

# is_whitemale = True
# is_tall = False

# if is_whitemale and is_tall: 
#     print("You are a true male")
# elif is_whitemale or is_tall:
#     print("Youre either white or Asian short or not short")
# else:
#     print("You are an incel")
###############################################################
# if in function
# def max_Num(num_1,num_2,num_3):
#     if num_1 >= num_2 and num_1 >= num_3:
#         return num_1
#     elif num_2 >= num_1 and num_2 >= num_3:
#         return num_2
#     else:
#         return num_3

# result = max_Num(1,2,3)

# print(max_Num(1,2,3))

# grade = input("Enter your grade: ")

# if grade == "A":
#     print("Excellent")
# elif grade == "B":
#     print("Good")
# elif grade == "C":
#     print("Sufficient")
# elif grade == "D":
#     print("Bad")
# elif grade == "E":
#     print("Very bad")
# else:
#     print("You failed")

###################################################
#better calculator 

# num_1 = float(input("Enter your first number: "))
# op = input("Enter a operator: ")
# num_2 = float(input("Enter your second number: "))


# if op == "+":
#     print(str(num_1)+ " + " +str(num_2)+ " = "+str(num_1+num_2))
# elif op == "-":
#     print(str(num_1)+ " - " +str(num_2)+ " = "+str(num_1+num_2))
# elif op == "*":
#    print(str(num_1)+ " * " +str(num_2)+ " = "+str(num_1+num_2))
# elif op == "/":
#     print(str(num_1)+ " / " +str(num_2)+ " = "+str(num_1+num_2))
# else:
#     print("Invalid operator")

#######################################################
#dictionaries

# monthConversion = {

#     0: "January",
#     "Feb": "February",
#     "Mar": "January",
#     "Apr": "February",
#     "May": "January",
#     "Jun": "February",
#     "July": "January",
#     "Aug": "February",
#     "Sept": "January",
#     "Oct": "February",
#     "Nov": "November",
#     "Dec": "December",
# }


# print(monthConversion.get(0))

################################################################
#While

# i = 0

# while i <= 10:
#     print(i)
#     i+=1

# print("Done with the loop")
#############################################################
#guessing game 
# secret_word = "giraffe"
# guess = ""
# num_oftries = 0
# limit = 3 
# out_oftries = False


# while guess != secret_word and out_oftries == False :
#     guess = input("Guess the secret word: ")
#     num_oftries += 1
#     if num_oftries > 3:
#         out_oftries = True
    
# if out_oftries == True :
#     print("no tries available")
# else:
#     print("You guessed it right")

# while guess != secret_word and out_oftries == False:
#     if num_oftries < limit:
#         guess = input("Guess the secret word: ")
#         num_oftries += 1
#     else:
#         out_oftries = True

# if out_oftries:
#     print("Out of tries")
# else:
#     print("You win!")
##############################################################
# for loop

# friends = ["Jim","Karen","Pam"]

# for friend in friends :
#     print(friend)

# numbers = [1,2,3,4,5]
# my_list  = [i*5 for i in numbers]

# print(my_list)


# for index in range(len(friends)):
#     print(friends[index])

# for index in range(5):
#     if index == 0:
#         print("First Iteration")
#     else:
#         print("Not first")
################################################################
#exponents

# print(2**3) #2^3



# def raise_to_power(base_num,pow_num):
#     result = 1
#     for index in range (pow_num):
#         result = result * base_num
#     return result
    
# print(raise_to_power(3,2))

#######################################################################
#2d list 

# number_grid = [
#     [1,2,3],
#     [4,5,6],
#     [7,8,9],
#     [0]
# ]

# print(number_grid[0][0]) #[row] [column]

# for row in number_grid:
#     for col in row:
#         print(col)
#########################################################################
#translation

# def translate(phrase):
#     translation = ""
#     for letter in phrase:
#         if letter.lower() in "aeiou":
#             if letter.isupper():
#                 translation = translation + "G"
#             else:
#                 translation = translation + "g"
#         else:
#             translation = translation + letter 
#     return translation


# result = translate(input("Enter a phrase: "))

# print(result)

############################################################
# try except

# number = int(input("Enter a number: "))

# print(number)

# try:
#     value = 10/0
#     number = int(input("Enter a number: "))
#     print(number)
# except ZeroDivisionError as err:
#     print(err)
# except ValueError:
#     print("invalid input")

##########################################

# w write / a append / r read and write
# employee_file = open("employees.txt","r")  
# print(employee_file.read())
# employee_file.close()




####################################################
#modules and pip

# print(standardplot.add_Num(1,2))

######################################################
#class and objects in standard plot

# student1 = Student("Jim","Business",3.1,False)

# print()

######################################################
#Question


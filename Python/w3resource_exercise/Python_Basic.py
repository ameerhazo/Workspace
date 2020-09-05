import sys
import datetime
import math
import calendar
# #question1
# print("Twinkle, twinkle, little star, \n\t How I wonder what you are! \n\t\t Up above the world so high, \n\t\t Like a diamond in the sky.")

# #question2
# print("Python version: " + sys.version)
# print("Python version info: ")
# print(sys.version_info)

# #question3
# currentDT = datetime.datetime.now()
# print("Current date and time: ")
# print(currentDT)

# #question4

# Pi = 3.14159
# radiusStr = input("Enter radius of circle: ")
# radiusStrtoInt = float(radiusStr)
# circle_area = Pi*(math.pow(radiusStrtoInt,2))
# print("r = " + str(radiusStr))
# print("Area = " + str(circle_area))

# #question5

# FirstName = input("First name: ")
# LastName = input("Last name: ")
# FullName = FirstName + LastName

# print(LastName + " " + FirstName)

#question6

# Num_str = "3, 5, 7, 23"
# List = Num_str.split(', ')
# tuple = tuple(List)

# print(List)
# print(tuple)

#question6

# Filename = input("Give filename: ")
# File_split = Filename.split('.')
# ext_name = File_split[1]
# print(ext_name)
# print(File_split[-1])
# print(File_split)

#question7

# color_list = ["Red","Green","White","Black"]
# print(color_list[0])
# print(color_list[len(color_list)-1])

#question9
# exam_st_date = (11,12,2014)
# exam_st_date2 = list(exam_st_date)
# print("The examination will start from : " + str(exam_st_date[0]) + "/" + str(exam_st_date[1]) + "/" + str(exam_st_date[2]))

#question10
# n = int(input("Give n value: "))
# print(str(n) + "+" + str(math.pow(n,2)) + "+" + str(math.pow(n,3)) + "= " + str(n + math.pow(n,2) + math.pow(n,3) ))

#question11

# print(abs.__doc__)

#question12

# y = int(input("The year: "))
# m = int(input("The month: "))
# print(calendar.month(y,m))

#question14

# from datetime import date

# fdate = date(2014,7,2)
# ldate = date(2020,7,11)
# delta = ldate - fdate
# diff = delta.days
# print(diff)

#question15

# def volumeofSphere(num):

#     return 4/3*(math.pow(num,3))

# r = float(input("radius of sphere: "))

# print("Volume of sphere = " + str(volumeofSphere(r)))

# r = float(input("Radius of sphere: "))
# Vol_Sphere = 4/3*(math.pow(r,3))
# print(str(Vol_Sphere))

#question16

# def doubleabs(num):
#     return 2*abs(num)

# num2 = 17



# num = int(input("Give a number: "))
# diff = num - num2

# if num > num2:
#     print(doubleabs(diff))
# else:
#     print(diff)

#question17

# num = int(input("Give a number: "))
# num1k = 1000
# num2k = 2000

# diff1 = num1k - num
# diff2 = num2k - num

# if diff1 <= 100 and diff1 >= -100:
#     print("Within 100 from 1000")
# elif diff2 <=100 and diff2 >= -100:
#     print("Within 100 from 2000")
# else:
#     print("not within 100 of either")

#question 18

# lst = []

# n = int(input("Number of elements in the list: "))

# for i in range (0,n):
#     ele = int(input("Add num: "))
    
#     lst.append(ele)

# sum = 0
# if lst[0] == lst[1] and lst[0] == lst[2]:
#    for i in range(0,n):
#        sum = sum + lst[i]
#    print(sum*3)
# else:
#     for i in range(0,n):
#         sum = sum + lst[i]
#     print(sum)
    
   
# print(lst)    
# print(sum)
    
# friends = ["I", "have", "no", "friends"]

# for i in friends:
#     print(i)


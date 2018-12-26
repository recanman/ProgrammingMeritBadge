#!/usr/bin/env python

def convertUSDtoEURO_req5():
   usd = input("Enter money in USD ($) > ")
   euro = (usd * 0.87)
   print("This is the amount of money in EURO'S: " + str(euro))

def convertTemp_req4():
   name = raw_input("What is your name?")
   print("Hello, " + name)
   #...initialize looping variable, assume 'yes' as the first answer
   continueYN = "y"

   while continueYN == "y":
      #...get temperature input from the user
      sDegreeF = input(name + ", enter next temperature in degrees Farenheight (F):")

      #...convert text entry to number value that can be used in equations
      nDegreeF = int(sDegreeF)

      #...convert temperature from F to Celsius
      nDegreeC = (nDegreeF - 32) * 5 / 9

      print (name + ", the temperature in degrees C is:", nDegreeC)

      #...check for temperature below freezing..
      if nDegreeC < 0:
         print ("Hey " + name + ", Pack long underwear!")

      #...check for it being a hot day...
      if nDegreeF > 100:
         print ("Hey " + name + " ,Remember to hydrate!")

      continueYN = input(name + ", would you like to input another?")

   #exit the program

def convertTemp_req3():
   #...initialize looping variable, assume 'yes' as the first answer
   continueYN = "y"

   while continueYN == "y":
      #...get temperature input from the user
      sDegreeF = input("Enter next temperature in degrees Farenheight (F):")

      #...convert text entry to number value that can be used in equations
      nDegreeF = int(sDegreeF)

      #...convert temperature from F to Celsius
      nDegreeC = (nDegreeF - 32) * 5 / 9

      print ("Temperature in degrees C is:", nDegreeC)

      #...check for temperature below freezing..
      if nDegreeC < 0:
         print ("Pack long underwear!")

      #...check for it being a hot day...
      if nDegreeF > 100:
         print ("Remember to hydrate!")

      if nDegreeF > 120:
         print("Maybe you should reconsider going on this trip.")

      continueYN = input("Input another?")

   #exit the program

def convertTemp_req2():
   #...initialize looping variable, assume 'yes' as the first answer
   continueYN = "y"

   while continueYN == "y":
      #...get temperature input from the user
      sDegreeF = input("Enter next temperature in degrees Farenheight (F):")

      #...convert text entry to number value that can be used in equations
      nDegreeF = int(sDegreeF)

      #...convert temperature from F to Celsius
      nDegreeC = (nDegreeF - 32) * 5 / 9

      print ("Temperature in degrees C is:", nDegreeC)

      #...check for temperature below freezing..
      if nDegreeC < -20:
         print ("Pack long underwear!")

      #...check for it being a hot day...
      if nDegreeF > 105:
         print ("Remember to hydrate!")

      continueYN = input("Input another?")

   #exit the program



def convertTemp_req1():
   #...initialize looping variable, assume 'yes' as the first answer
   continueYN = "y"

   while continueYN == "y":
      #...get temperature input from the user
      sDegreeF = input("Enter next temperature in degrees Farenheight (F):")

      #...convert text entry to number value that can be used in equations
      nDegreeF = int(sDegreeF)

      #...convert temperature from F to Celsius
      nDegreeC = (nDegreeF - 32) * 5 / 9

      print ("Temperature in degrees C is:", nDegreeC)

      #...check for temperature below freezing..
      if nDegreeC < 0:
         print ("Pack warm clothes!")

      #...check for it being a hot day...
      if nDegreeF > 100:
         print ("Remember to bring a lot of water!")

      continueYN = input("Input another?")

   #exit the program

def convertTemp():
   #...initialize looping variable, assume 'yes' as the first answer
   continueYN = "y"

   while continueYN == "y":
      #...get temperature input from the user
      sDegreeF = input("Enter next temperature in degrees Farenheight (F):")

      #...convert text entry to number value that can be used in equations
      nDegreeF = int(sDegreeF)

      #...convert temperature from F to Celsius
      nDegreeC = (nDegreeF - 32) * 5 / 9

      print ("Temperature in degrees C is:", nDegreeC)

      #...check for temperature below freezing..
      if nDegreeC < 0:
         print ("Pack long underwear!")

      #...check for it being a hot day...
      if nDegreeF > 100:
         print ("Remember to hydrate!")

      continueYN = input("Input another?")

   #exit the program
print("This is the original program.")
convertTemp()
print("This is the for the first requirement.")
convertTemp_req1()
print("This is the for the second requirement.")
convertTemp_req2()
print("This is the for the third requirement.")
convertTemp_req3()
print("This is the for the fourth requirement.")
convertTemp_req4()
print("This is for the final requirement.")
convertUSDtoEURO_req5()

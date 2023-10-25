# Paul Carter
# 09/23/2023
# Calucate days tilll graduation

import datetime

graduation = input("What day is your graduation? (MM/DD/YYYY)?")

month, day, year = graduation.split("/")

graduation = datetime.datetime(int(year), int(month), int(day))

todays_date = datetime.datetime.now()

daysTogo = graduation - todays_date

print("You have " + str(daysTogo.days) + " days left till graduation!")

print("You have " + str(daysTogo.days/365.25) + " years left till graduation!")

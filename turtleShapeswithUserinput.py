# Paul Carter
# 09/23/2023
# Turtle Shapes with user input

import turtle

size = int(input("Please enter the size of the shape!: "))

def square(size):
    for i in range(4):
        turtle.forward(size)
        turtle.right(90)

def circle(size):
    turtle.circle(size)

def triangle(size):
    for i in range(3):
        turtle.forward(size)
        turtle.left(120)

def main():
    square(size)
    turtle.penup()
    turtle.forward(150)
    turtle.pendown()
    circle(size)
    turtle.penup()
    turtle.forward(150)
    turtle.pendown()
    triangle(size)

main()
           

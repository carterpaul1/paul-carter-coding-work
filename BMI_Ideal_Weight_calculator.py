# Paul Carter
# 10/11/2023
# BMI and Ideal Weight Calculator

print("Welcome to the BMI Calucator")
user_name = input("What is your name?: ")


height_str = input("Enter the height(in inches): ")
weight_str = input("Enter the weight(in pounds): ")

# convert strings to floats

height = float(height_str)
weight = float(weight_str)

# Define BMI and corresponsing weight
BMI = (weight * 703) / (height * height)
reference_BMI = 22.5

ideal_body_weight = reference_BMI * (height * height) / 703


# round BMI and ideal body weight
rounded_BMI = round(BMI, 2)
rounded_ideal_body_weight = round(ideal_body_weight, 2)

# print the results

print(user_name + " your current BMI is :", rounded_BMI)
print(user_name + " your Ideal Body Weight is :", rounded_ideal_body_weight, "pounds")



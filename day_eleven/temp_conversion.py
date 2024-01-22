#!/usr/bin/python3
def convert_temp():
    unit = input("Type F to enter in Fahrenheit or C to enter in Celcius: ")

    if unit.upper() == "F":
        temperature = float(input("Enter the temperature in fahrenheit:"))
        converted = (temperature - 32) * (5/9)
        print(converted)
    elif unit.upper() == "C":
        temperature = float(input("Enter the temperature in celcius: "))
        converted = (temperature * (9*1.0)/5.0) + 32
        print(converted)


def main():
    convert_temp()

if __name__=="__main__":
    main()
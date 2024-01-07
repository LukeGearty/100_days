#!/usr/bin/python3

import sys

def countdown(num):

    while num > 0:
        print(f"Going in {num}!")
        num -= 1
    
    if num == 0:
        print("Explode!")

def main():
    num = int(sys.argv[1])

    countdown(num)


if __name__=="__main__":
    main()
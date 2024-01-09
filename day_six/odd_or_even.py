#!/usr/bin/python3

import sys

def odd_or_even(num):

    if num % 2 == 0:
        print("It is even!")
    else:
        print("It is odd!")

def main():
    num = int(sys.argv[1])
    odd_or_even(num)

if __name__=="__main__":
    main()
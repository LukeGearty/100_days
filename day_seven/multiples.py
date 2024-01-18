#!/usr/bin/python3

import sys

def multiples():

    for num in range(1, 1000+1):
        if num % 3 == 0 and num % 5 == 0:
            print(num)

def main():
    multiples()

if __name__=="__main__":
    main()
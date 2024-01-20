#!/usr/bin/python3

import sys

def prime_numbers(num):

    for i in range(1, num+1):
        if num % i == 0:
            print(i)

def main():
    num = int(sys.argv[1])

    prime_numbers(num) 

if __name__=="__main__":
    main()
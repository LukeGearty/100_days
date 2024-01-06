#!/usr/bin/python3

import sys

def happy_birthday(name):
    print("Happy birthday to you!")
    print("Happy birthday to you!")
    print(f"Happy birthday dear {name}!")
    print("Happy birthday to you!")

def main():
    name = sys.argv[1]
    happy_birthday(name)


if __name__=="__main__":
    main()
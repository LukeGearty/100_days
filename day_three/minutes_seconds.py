#!/usr/bin/python3
import sys

def minutes_to_seconds(minutes):
    min = int(minutes)

    return min * 60

def main():
    arg = sys.argv[1]
    print(minutes_to_seconds(arg))


if __name__=="__main__":
    main()
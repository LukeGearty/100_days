#!/usr/bin/python3

import sys

def fibonacci_sums(num):
    first_num = 0
    second_num = 1
    fibonacci = [first_num, second_num]
    count = 1
    result = 0

    if num == 1:
        print(result)
    elif num == 2:
        print(result)
    else:
        while count <= num:
            fibonacci.append(second_num + first_num)
            temp = second_num
            second_num = first_num + second_num
            first_num = temp
            count+=1
        
        for i in fibonacci:
            if i % 2 == 0:
                result+=i
        
        print(result)

def main():
    num = int(sys.argv[1])
    fibonacci_sums(num)


if __name__=="__main__":
    main()
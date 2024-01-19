#!/usr/bin/python3

import sys

def fibonacci(num):
    first_num = 0
    second_num = 1
    fibonacci = [first_num, second_num]
    count = 1

    if num == 1:
        return fibonacci[0]
    elif num == 2:
        return fibonacci
    else:
        while count <= num:
            fibonacci.append(second_num + first_num)
            temp = second_num
            second_num = first_num + second_num
            first_num = temp
            count+=1
    
        return fibonacci[:num]

def main():
    num = int(sys.argv[1])
    print(fibonacci(num))

if __name__=="__main__":
    main()
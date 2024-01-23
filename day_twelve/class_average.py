#!/usr/bin/python3

def class_average():

    total = 0
    average = 0
    num_of_students = 0
    is_user_typing = True

    while is_user_typing:
        current_num = int(input("Enter the numbers, then press enter. Enter -1 to exit:\n"))
        if current_num == -1:
            is_user_typing = False
        else:
            total += current_num
            num_of_students += 1
    
    average = total / num_of_students

    return average
def main():

    print(class_average())
if __name__=="__main__":
    main()
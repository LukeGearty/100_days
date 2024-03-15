# Enter your code here. Read input from STDIN. Print output to STDOUT

length = int(input())
dict = {}
for i in range(length):
    key_and_value = input().split()
    dict[key_and_value[0]] = key_and_value[1]

for i in range(length):
    name = input()
    if name in dict:
        print(f"{name}={dict[name]}")
    else:
        print("Not found")
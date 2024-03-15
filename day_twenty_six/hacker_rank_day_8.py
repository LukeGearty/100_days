# Enter your code here. Read input from STDIN. Print output to STDOUT

length = int(input())
dict = {}
for i in range(length):
    try: 
        key_and_value = input().split()
        dict[key_and_value[0]] = key_and_value[1]
    except:
        break

for i in range(length):
    try:
        name = input()
        if name in dict:
            print(name, "=", dict[name], sep="")
        else:
            print("Not found")
    except:
        break

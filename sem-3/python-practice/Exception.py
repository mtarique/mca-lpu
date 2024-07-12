# import module sys to get the type of exception
import sys

randomList = ['a', 0, 2]
for data in randomList:
    try:
        print("The data is", data)
        r = 1/int(data)
    except: 
        print("Oops!", sys.exc_info()[0], "occurred.")

print("Next data.")
print()
print("The reciprocal of", data, "is", r)
import math

print("The Ceiling value of 23.56 are: "+ str(math.ceil(23.56)))
print("The Floor value of 23.56 are: "+ str(math.floor(23.56)))

x = 10
y = -15

print("Print the value of x after copying the sign of y is: "+str(math.copysign(x,y)))

print("Absolute value of -96 and 56 are: "+str(math.fabs(-96)) +", "+str(math.fabs(56)))

my_list = [12, 4.25, 89, 3.02, -65.23, -7.2, 6.3]
print('Sum of the elements of the list: ' + str(math.fsum(my_list)))

print('The GCD of 24 and 56 : ' + str(math.gcd(24, 56)))

x = float('nan')
if math.isnan(x):
    print('It is not a number')

print(math.isfinite(x)) #x is not a finite number
print(math.isfinite(y)) #y is a finite number

# Power and logrithmic Functions
print('The value of 5^8: ' + str(math.pow(5, 8)))
print('Square root of 400: ' + str(math.sqrt(25)))
print('The value of 5^e: ' + str(math.exp(5)))
print('The value of Log(625), base 5: ' + str(math.log(625, 5)))
print('The value of Log(1024), base 2: ' + str(math.log2(1024)))
print('The value of Log(1024), base 10: ' + str(math.log10(1024)))

# Trignometric & Angular Conversion Functions
print('The value of Sin(60 degree): ' + str(math.sin(math.radians(60))))
print('The value of cos(pi): ' + str(math.cos(math.pi)))
print('The value of tan(90 degree): ' + str(math.tan(math.pi/2)))
print('The angle of sin(0.8660254037844386): ' + str(math.degrees(math.asin(0.8660254037844386))))

colors = ["Red", "Green", "Blue"]
for x in colors:
    print(x)

# Import statistics Library
import statistics
print(statistics.mean([2, 4, 8, 16, 9, 11, 13]))
print(statistics.median([2, 4, 6, 8, 16, 11, 13]))

print(math.ceil(2.4))
print(math.ceil(6.3))
print(math.ceil(-4.3))
print(math.ceil(21.6))
print(math.ceil(15.0))

print(math.isfinite(5670))
print(math.isfinite(-46.33))
print(math.isfinite(math.inf))

print(statistics.variance([2, 4, 6, 8, 8, 10]))

print(statistics.stdev([2, 4, 6, 8, 10, 12]))

print(statistics.mode([2, 4, 4, 5, 6, 8, 8, 10]))

# Initialize the number of items to choose from

n = 5

# Initialize the number of possibilities to choose

k = 4

# Print total number of possible combinations

print (math.comb(n, k))

print (math.degrees(7.90))
print (math.degrees(-12))

print(math.fabs(-55.34))
print(math.fabs(-6))

print(math.log10(1.8183))

print(statistics.pvariance([2, 4, 6, 8, 9, 11]))

print (math.gcd(4, 5))

print(math.pow(4, 3))
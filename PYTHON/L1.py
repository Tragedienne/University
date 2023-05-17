# 4. 1. Площадь полной поверхности цилиндра;

import math

r = float()
h = float()
while r <= 0 or h <= 0:
    print('r > 0 and h > 0')
    r = float(input('Enter r: '))
    h = float(input('Enter h: '))
print('S:', 2 * math.pi * r * (r + h))

#    2.
x = float(input('Enter x: '))
y = float(input('Enter y: '))
z = float(input('Enter z: '))
print('t:', (math.atan(z)*x*x*x) + math.log((abs(math.sqrt(x-y)))/(y-x/2)))




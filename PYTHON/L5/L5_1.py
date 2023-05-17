import math

#Variant 4
#L1 task 2

while 1:
    while 1:
        try:
            x = float(input('Enter x: '))
        except ValueError:
            print('Wrong input type!')
        else:
            break
    while 1:
        try:
            y = float(input('Enter y: '))
        except ValueError:
            print('Wrong input type!')
        else:
            break
    while 1:
        try:
            z = float(input('Enter z: '))
        except ValueError:
            print('Wrong input type!')
        else:
            break
    try:
        if x <= y:
            raise ValueError('Math domain error ')
        print('t:', (math.atan(z)*x*x*x) + math.log((abs(math.sqrt(x-y)))/(y-x/2)))
    except (ZeroDivisionError, ValueError) as e:
        print(e, ': function no defined!')
    else:
        break

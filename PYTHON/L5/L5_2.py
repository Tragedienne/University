#Variant 4
#L2 task 1

while 1:
    try:
        x = int(input('Enter x: '))
    except ValueError:
        print('Wrong input type!')
    else:
        break
while 1:
    try:
        y = int(input('Enter y: '))
    except ValueError:
        print('Wrong input type!')
    else:
        break
if x == 0 and y == 0:
    print('Res:', 0)
elif x != 0 and y == 0:
    print('Res:', 1)
elif x == 0 and y != 0:
    print('Res:', 2)
else:
    print('Res:', 3)

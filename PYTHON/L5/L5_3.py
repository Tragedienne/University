#Variant 4
#L3 task 1

def Minmax(X,Y):
    if X < Y:
        A = X
        B = Y
    elif X > Y:
        A = Y
        B = X
    print('Min: ', A, '\nMax: ', B)

while 1:
    while 1:
        try:
            X = float(input('Enter x: '))
        except ValueError:
            print('Wrong input type!')
        else:
            break
    while 1:
        try:
            Y = float(input('Enter y: '))
        except ValueError:
            print('Wrong input type!')
        else:
            break
    try:
        if X == Y:
            raise Exception('Incorrect value: X != Y.')
    except Exception as e:
        print(e)
    else:
        Minmax(X, Y)
        break

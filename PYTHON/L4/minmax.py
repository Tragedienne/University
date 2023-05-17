def Minmax(X,Y):
    if X < Y:
        A = X
        B = Y
        print('Min: ', A, '\nMax: ', B)
    else:
        A = Y
        B = X
        print('Min: ', A, '\nMax: ', B)
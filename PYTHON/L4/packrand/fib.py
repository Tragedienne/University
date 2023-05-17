def Fib(N):
    F1 = 1
    F2 = 1
    while N > 2:
        F = F1 + F2
        F1 = F2
        F2 = F
        N -= 1
    return F2
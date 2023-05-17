import minmax

from packrand.rings import RingS, SquareS
from packrand.fib import Fib

#1
minmax.Minmax(10, 5)
minmax.Minmax(4, 2)
minmax.Minmax(2, 3)
minmax.Minmax(8, 9)

#2-3
print("Ring's square: ", RingS(9, 5))
print("Square R1: ", SquareS(9))
print("Square R2: ", SquareS(5))

print("Ring's square: ", RingS(2, 1))
print("Square R1: ", SquareS(2))
print("Square R2: ", SquareS(1))

print("Ring's square: ", RingS(12, 5))
print("Square R1: ", SquareS(12))
print("Square R2: ", SquareS(5))

print(3, ":", Fib(3))
print(4, ":", Fib(4))
print(5, ":", Fib(5))
print(6, ":", Fib(6))
print(12, ":", Fib(12))




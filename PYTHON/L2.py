"""
4.
1(if) Даны целочисленные координаты точки на плоскости. Если точка совпадает с началом координат,
то вывести 0. Если точка не совпадает с началом координат,
но лежит на оси ОХ или ОУ, то вывести соответственно 1 или 2.
Если точка не лежит на координатных осях, то вывести 3.

2(for) Дано вещественное число X и целое число N (> 0). Найти значение выражения
1 + X + X2/(2!) + … + XN/(N!)
Полученное число является приближенным значением функции exp в точке X.

3(while) Начальный вклад в банке равен 1000 руб.
Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы
(P – вещественное число, 0 < P < 25). По данному P определить,
через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K
(целое число) и итоговый размер вклада S (вещественное число).
"""
#1
x = int(input('Enter x: '))
y = int(input('Enter y: '))
if x == 0 and y == 0:
    print('Res:', 0)
elif x != 0 and y == 0:
    print('Res:', 1)
elif x == 0 and y != 0:
    print('Res:', 2)
else:
    print('Res:', 3)

#2
X = float(input('Enter X: '))
N = int(input('Enter N: '))
exp = 1
pow = 1
factorial = 1
for i in range(1, N):
    factorial *= i
    pow *= X
    exp += pow / factorial
print(exp)

#3
P = float(input('Enter P: '))
K = 1
S = 1000
while S <= 1100:
    K += 1
    S += S * P / 100
print("K:", K, "S:", S)


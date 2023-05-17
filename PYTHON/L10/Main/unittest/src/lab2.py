"""
7.1 (if) Даны три целых числа, одно из которых отлично от двух других, равных между собой.
    Определить порядковый номер числа, отличного от остальных.

7.2 (for) Дано целое число N (> 1) и две вещественные точки на числовой оси: A, B (A < B).
    Отрезок [A, B] разбит на N равных отрезков.
    Вывести H – длину каждого отрезка, а также набор точек  A, A + H, A + 2·H, A + 3·H, …, B,
    образующий разбиение отрезка [A, B].

7.3 (while) Дано число A (> 1).
    Вывести наибольшее из целых чисел K, для которых сумма 1 + 1/2 + … + 1/K будет меньше A, и саму эту сумму.
"""


class Lab2:
    @staticmethod
    def func_1(a, b, c):
        if a == b and a != c:
            return 2
        if a == c and a != b:
            return 1
        if b == c and a != b:
            return 0
        return -1

    @staticmethod
    def func_2(n, b, a):
        if a >= b or n == 0:
            return -1
        h = (b - a) / n
        mas = []
        for i in range(n + 1):
            mas.append(a + i * h)
        return mas

    @staticmethod
    def func_3(a):
        if a <= 1:
            return -1
        s = 0
        k = 1
        while s < a:
            s += 1 / k
            k += 1
        k -= 1
        s -= 1 / k
        k -= 1
        return [k, s]

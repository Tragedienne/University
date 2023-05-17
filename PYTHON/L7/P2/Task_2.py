"""
4. Дана матрица размера M × N.
Найти номера строки и столбца для элемента матрицы, наиболее близкого к среднему значению всех ее элементов.
"""

import sys

mas = []
try:
    with open('task_2.txt', 'r') as file:
        for line in file:
            if line != '\n':
                mas.append(line)
    if len(mas) == 0:
        raise Exception('Empty file!')
except (FileNotFoundError, Exception) as e:
    print(e)
    sys.exit()
for i in range(len(mas) - 1):
    mas[i] = mas[i][:len(mas[i]) - 1]
if mas[-1][-1] == '\n':
    mas[-1] = mas[-1][:len(mas[-1]) - 1]
m = []
lens = 0
for s in mas:
    for i in range(len(s)):
        try:
            if s[i] != ' ' and s[i] != '.' and s[i] != '-' and (s[i] < '0' or s[i] > '9'):
                raise Exception('Incorrect values.')
        except Exception as e:
            print(e)
            sys.exit()
    try:
        s = s.split()
        if lens != 0:
            if lens != len(s):
                raise Exception('List dimension error.')
        else:
            lens = len(s)
        m.append([float(s[j]) for j in range(len(s))])
    except ValueError:
        print('Incorrect values.')
        sys.exit()
    except Exception as e:
        print(e)
        sys.exit()
average = sum([sum(m[i]) for i in range(len(m))]) / len(mas) / lens
minimal = sys.float_info.max
for i in range(len(m)):
    for j in range(len(m[i])):
        if abs(m[i][j] - average) < minimal:
            ni = i
            nj = j
            minimal = abs(m[i][j] - average)
print(ni, nj)

"""
Задание 3. Измените программу (ЛР7 з.2) так, чтобы один поток (процесс) осуществлял чтение данных из файла,
а три других потока (процесса) осуществляли их запись в файл. У каждого потока (процесса) свой файл для записи данных.
----------------------------------------------------------------------------------------------------------------------
4. Дана матрица размера M × N.
Найти номера строки и столбца для элемента матрицы, наиболее близкого к среднему значению всех ее элементов.
"""

import sys
from threading import Thread

def read (file):
    print("Thread read start.")
    global mas
    try:
        with open(file, 'r') as file:
            for line in file:
                if line != '\n':
                    mas.append(line)
    except (FileNotFoundError) as e:
        print(e)
        sys.exit()
    print("Thread read close.")

def write (file, i):
    print("Thread write", i, "start.")
    global res
    with open(file, 'w') as file:
        file.write(res)
    print(res)
    print("Thread write", i, "close.")

mas = []

filename = 'read.txt'
thr_read = Thread(target=read, args=[filename])
thr_read.start()
thr_read.join()

try:
    if len(mas) == 0:
        raise Exception('Empty file!')
except (Exception) as e:
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

res = str(ni) + ' ' + str(nj)

filename = 'out0.txt'
thr_write0 = Thread(target=write, args=[filename, 0])
filename = 'out1.txt'
thr_write1 = Thread(target=write, args=[filename, 1])
filename = 'out2.txt'
thr_write2 = Thread(target=write, args=[filename, 2])

thr_write0.start()
thr_write1.start()
thr_write2.start()
thr_write0.join()
thr_write1.join()
thr_write2.join()

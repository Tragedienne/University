"""
Задание 2. Изменить программу (ЛР6 з.2) используя модуль threading для мультипоточных программ.
-----------------------------------------------------------------------------------------------------------
4.Даны четыре файла целых чисел разного размера с именами SA, SB, SC, SD и строка SE.
Создать новый файл с именем SE, в котором чередовались бы элементы исходных файлов с одним и тем же номером.
«Лишние» элементы более длинных файлов в результирующий файл не записывать.
"""

import sys
import numpy as np
from threading import Thread

def read (file, i):
    print("Thread read", i, "start.")
    global s
    with open(file, 'r') as file:
        s[i] = file.read()
    print("Thread read", i, "close.")

def write (file):
    print("Thread write start.")
    global me
    with open(file, 'w') as file:
        file.write(' '.join(map(str, me)))
    print(me)
    print("Thread write close.")

def check(index):
    global s
    for i in range(len(s[index])):
        try:
            if s[index][i] != ' ' and s[index][i] != '-' and (s[index][i] < '0' or s[index][i] > '9'):
                raise Exception('Incorrect values in filename', index)
        except Exception as e:
            print(e)
            sys.exit()
    m = s[index].split()
    try:
        ma = [int(m[i]) for i in range(len(m))]
    except ValueError:
        print('Incorrect values in filename', index)
        sys.exit()
    global res
    res[index].extend(ma)

s = [str(), str(), str(), str()]

filename = '0read.txt'
thr_read0 = Thread(target=read, args=[filename, 0])
filename = '1read.txt'
thr_read1 = Thread(target=read, args=[filename, 1])
filename = '2read.txt'
thr_read2 = Thread(target=read, args=[filename, 2])
filename = '3read.txt'
thr_read3 = Thread(target=read, args=[filename, 3])

thr_read0.start()
thr_read1.start()
thr_read2.start()
thr_read3.start()
thr_read0.join()
thr_read1.join()
thr_read2.join()
thr_read3.join()

res = [[],[],[],[]]
check(0)
check(1)
check(2)
check(3)

mlen = min(len(res[0]), len(res[1]), len(res[2]), len(res[3]))
me = np.zeros(mlen * 4, dtype=np.int16)
for i in range(mlen):
    me[i * 4] = res[0][i]
    me[i * 4 + 1] = res[1][i]
    me[i * 4 + 2] = res[2][i]
    me[i * 4 + 3] = res[3][i]

thr_write = Thread(target=write, args=['output.txt'])

thr_write.start()
thr_write.join()
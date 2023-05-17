"""
Задание 1. Изменить программу (ЛР6 з.1): осуществить чтение данных из файла посредством одного потока и
запись данных в другом потоке. Названия файла должны отличаться.
-------------------------------------------------------------------------------------------------------
4.Дана строка, содержащая по крайней мере один символ пробела.
Вывести подстроку, расположенную между первым и последним пробелом исходной строки.
Если строка содержит только один пробел, то вывести пустую строку.
"""

import sys
from threading import Thread

def read (file):
    print("Thread read start.")
    global s
    with open(file, 'r') as file:
        s = file.read()
    print("Thread read close.")

def write (file):
    print("Thread write start.")
    global s
    with open(file, 'w') as file:
        file.write(s)
    print(s)
    print("Thread write close.")

filename = 'file.txt'
s = str()

thr_read = Thread(target=read, args=[filename])

thr_read.start()
thr_read.join()

start = -1
for i in range(len(s)):
    if s[i] == ' ':
        start = i
        break
try:
    if start == -1:
        raise Exception('Incorrect values.')
except Exception as e:
    print(e)
    sys.exit()
print(s)
finish = -1
for i in range(len(s) - 1, -1, -1):
    if s[i] == ' ':
        finish = i
        break
if start == finish:
    s = ''
else:
    s = s[start + 1: finish]

filename = 'file1.txt'

thr_write = Thread(target=write, args=[filename])

thr_write.start()
thr_write.join()
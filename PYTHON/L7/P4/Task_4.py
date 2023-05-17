"""
4. Вводится список целых чисел в строку через пробел. Количество чисел равно N**2 .
С помощью list comprehension сформировать из них двумерный (вложенный) список размером N x N (квадратную таблицу чисел).
"""

from sys import exit

s = '1 2 3 4 5 6 7 8 9 9'
#s = input('Enter string:\n')
try:
    if len(s) == 0:
        raise Exception("Empty string!")
    for i in range(len(s)):
        if s[i] != ' ' and (s[i] < '0' or s[i] > '9'):
            raise Exception('Incorrect values!')
except Exception as e:
    print(e)
    exit()
try:
# Массив строк
    s = s.split()
# list comprehension. Каждый элемент пошагово обращается в число
    s = [int(s[i]) for i in range(len(s))]
    if int(pow(len(s), 0.5)) != pow(len(s), 0.5):
        raise Exception('Incorrect size!')
    else:
        n = int(pow(len(s), 0.5))
except ValueError:
    print('Incorrect values.')
    exit()
except Exception as e:
    print(e)
    exit()
# list comprehension для двумерного массива
mas = [[s[j + n * i] for j in range(n)] for i in range(n)]
print(mas)
with open('task_4.txt', 'w') as file:
    for i in range(n):
        file.write(' '.join(map(str, mas[i])) + '\n')
for i in range(n):
    print(' '.join(map(str, mas[i])))

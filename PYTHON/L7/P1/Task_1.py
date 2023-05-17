"""
4. Дан целочисленный массив размера N. Увеличить все четные числа, содержащиеся в массиве,
на исходное значение первого четного числа. Если четные числа в массиве отсутствуют, то оставить массив без изменений.
"""

from sys import exit

mas = []
try:
    with open('task_1.txt', 'r') as file:
        for line in file:
            if line != '\n':
                mas.append(line)
    if len(mas) == 0:
        raise Exception('Empty file!')
except (FileNotFoundError, Exception) as e:
    print(e)
    exit()
for i in range(len(mas) - 1):
    mas[i] = mas[i][: len(mas[i]) - 1]
if mas[-1][-1] == '\n':
    mas[-1] = mas[-1][:len(mas[-1]) - 1]
array = []
for s in mas:
    for i in range(len(s)):
        try:
            if s[i] != ' ' and s[i] != '-' and (s[i] < '0' or s[i] > '9'):
                raise Exception('Incorrect values.')
        except Exception as e:
            print(e)
            exit()
    try:
        s = s.split()
        array.extend(int(s[j]) for j in range(len(s)))
    except ValueError:
        print('Incorrect values.')
        exit()
for i in range(len(array)):
    if array[i] % 2 == 0:
        value = array[i]
        break
if i + 1 < len(array):
    for j in range(i, len(array)):
        if array[j] % 2 == 0:
            array[j] += value
print(array)

"""
4. Вводятся имена студентов в одну строчку через пробел.На их основе формируется кортеж.
Отобразите на экране все имена из этого кортежа, которые содержат фрагмент "ва".
Имена выводятся в одну строку через пробел.
"""

from sys import exit

s = 'Бобр Громыко Грушунов Губанова Кокашинская Лукашевич Макаренко Новикова Обухов Пантелеев Пархутич Пляго Самусева' \
    ' Свиридков Свиридова Семенчик Сулим'
#s = input('Enter string:\n')
try:
    if len(s) == 0:
        raise Exception("Empty string!")
    for i in range(len(s)):
        if s[i] != ' ' and (s[i] < 'а' or s[i] > 'я') and (s[i] < 'А' or s[i] > 'Я') and s[i] != 'ё' and s[i] != 'Ё':
            raise Exception('Incorrect values!')
except Exception as e:
    print(e)
    exit()
# tuple создает кортеж из массива фамилий
s = tuple(s.split())
ns = []
for a in s:
    if a.find('ва') > -1:
        ns.append(a)
# Создание строки из списка с разделителем
ns = ' '.join(ns)
if len(ns) == 0:
    print('Not found!')
else:
    print(ns)




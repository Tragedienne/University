import sys

with open('file.txt', 'r') as file:
    s = file.read()
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
with open('file.txt', 'w') as file:
    file.write(s)
print(s)

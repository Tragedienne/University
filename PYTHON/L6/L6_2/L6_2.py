import sys
import numpy as np

with open('Sa.txt', 'r') as file:
    sa = file.read()
for i in range(len(sa)):
    try:
        if sa[i] != ' ' and sa[i] != '-' and (sa[i] < '0' or sa[i] > '9'):
            raise Exception('Incorrect values in 0read.txt')
    except Exception as e:
        print(e)
        sys.exit()
m = sa.split()
try:
    ma = [int(m[i]) for i in range(len(m))]
except ValueError:
    print('Incorrect values in 0read.txt')
    sys.exit()
with open('Sb.txt', 'r') as file:
    sb = file.read()
for i in range(len(sb)):
    try:
        if sb[i] != ' ' and sb[i] != '-' and (sb[i] < '0' or sb[i] > '9'):
            raise Exception('Incorrect values in 1read.txt')
    except Exception as e:
        print(e)
        sys.exit()
m = sb.split()
try:
    mb = [int(m[i]) for i in range(len(m))]
except ValueError:
    print('Incorrect values in 1read.txt')
    sys.exit()
with open('Sc.txt', 'r') as file:
    sc = file.read()
for i in range(len(sc)):
    try:
        if sc[i] != ' ' and sc[i] != '-' and (sc[i] < '0' or sc[i] > '9'):
            raise Exception('Incorrect values in 1read.txt')
    except Exception as e:
        print(e)
        sys.exit()
m = sc.split()
try:
    mc = [int(m[i]) for i in range(len(m))]
except ValueError:
    print('Incorrect values in 2read.txt')
    sys.exit()
with open('Sd.txt', 'r') as file:
    sd = file.read()
for i in range(len(sd)):
    try:
        if sd[i] != ' ' and sd[i] != '-' and (sd[i] < '0' or sd[i] > '9'):
            raise Exception('Incorrect values in 3read.txt')
    except Exception as e:
        print(e)
        sys.exit()
m = sd.split()
try:
    md = [int(m[i]) for i in range(len(m))]
except ValueError:
    print('Incorrect values in 3read.txt')
    sys.exit()
mlen = min(len(ma), len(mb), len(mc), len(md))
me = np.zeros(mlen * 4, dtype=np.int8)
for i in range(mlen):
    me[i * 4] = ma[i]
    me[i * 4 + 1] = mb[i]
    me[i * 4 + 2] = mc[i]
    me[i * 4 + 3] = md[i]
with open('Se.txt', 'w') as file:
    file.write(' '.join(map(str, me)))
print(me)

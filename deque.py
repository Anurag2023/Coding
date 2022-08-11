from collections import deque
a = ['anurag','raj','mohit']
b = deque(a)
print(b);
b.append('ramesh')
print(b)
b.pop()
print(b)
x = int(input())
y = list(map(int, input().split()))
z = []
y.reverse()
for i in y:
    if i not in z:
        z.append(i)
z.reverse()
print(len(z))
print(*z)
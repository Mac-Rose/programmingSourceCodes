x,y=map(int,input().split())
a=input()
l=list()
for i in range(y):
    l.append(a.count(chr(65+i)))
l.sort()
print(y*l[0])
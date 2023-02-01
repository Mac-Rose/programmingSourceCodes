import itertools

def check(a,instr):
    i=0
    j=0
    for j in instr:
        if(i==len(a)) :return True
        if(a[i]==j) :i+=1
    
    if(i==len(instr)) :return True
    else: return False




li = input().lower().split()
instr = input().lower()
instr+=instr

ans = []
for i in li:
    if check(i,instr) == True:
        ans.append(i)

if len(ans)==0:print(-1)
else:
    for i in ans:
        print(i)

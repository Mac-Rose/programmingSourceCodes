t = int(input())
j = 1
while j <= t :
    x = int(input())
    oper = 0
  
    s = str(input())
    temp = ""
    for i in s:
        temp +=i
        if len(temp)== 1:
            continue
        else:
            if temp[0]==temp[-1]:
                oper += 1
                temp = ""
            elif temp[0:2]== "()":
                oper += 1
                temp = ""


    print (oper , len(temp))
    
    j = j+ 1
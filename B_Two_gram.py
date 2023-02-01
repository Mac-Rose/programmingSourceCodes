def main():
    #write your code here
    x = int(input())
    y = input()
    dic={}
    for i in range(x-1):
        j=y[i:i+2]
        if(j in dic):
            dic[j]+=1
        else:
            dic.update({j:1})
    ans=int(0)
    print(dic)

    for key,value in dic.items():
        if value > ans:
            ans=value
            sto=key
    print(sto)
if __name__ == "__main__":
    main()
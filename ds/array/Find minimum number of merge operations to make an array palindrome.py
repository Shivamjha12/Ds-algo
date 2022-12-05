a=[15, 4, 15]
a1=[1, 4, 5, 1]
a3=[11, 14, 15, 99]
def mmo(a):
    i=0
    j=len(a)-1
    cnt=0
    lsum=a[i]
    rsum=a[j]
    while(i<j):
        if(lsum<rsum):
            i+=1
            cnt+=1
            lsum+=a[i]
        elif(rsum<lsum):
            j-=1
            cnt+=1
            rsum+=a[j]
        else:
            i+=1            
            j-=1
            lsum=a[i]
            rsum=a[j]
    return cnt
print(mmo(a))
print(mmo(a1))
print(mmo(a3))
        
    

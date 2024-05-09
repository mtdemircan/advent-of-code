import hashlib
str2hash="bgvyzdsv"
stra=str2hash
i=1
while(True):
    stra=str2hash+str(i)
    res=hashlib.md5(stra.encode()).hexdigest()[:6]
    print(res)
    if res=="000000":
        print(i)
        break
    i=i+1

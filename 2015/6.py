file1 = open('6.txt', 'r')
Lines = file1.readlines()
 
arr = [[0]*5]*5
for line in Lines:
    print(arr)
    x=line.split()
    if(x[0]=="toggle"):
        a=int(x[1][:x[1].index(",")])
        b=int(x[1][x[1].index(",")+1:])
        c=int(x[3][:x[3].index(",")])
        d=int(x[3][x[3].index(",")+1:])
        for i in range(a,c+1):
            for j in range(b,d+1):
                if arr[i][j]==1:
                    arr[i][j]=0
                else:
                    arr[i][j]=1 
                
    elif(x[1]=="on"):
        a=int(x[2][:x[2].index(",")])
        b=int(x[2][x[2].index(",")+1:])
        c=int(x[4][:x[4].index(",")])
        d=int(x[4][x[4].index(",")+1:])
        for i in range(a,c+1):
            for j in range(b,d+1):
                arr[i][j]=1
                print(arr[i][j])
    else:
        a=int(x[2][:x[2].index(",")])
        b=int(x[2][x[2].index(",")+1:])
        c=int(x[4][:x[4].index(",")])
        d=int(x[4][x[4].index(",")+1:])
        for i in range(a,c+1):
            for j in range(b,d+1):
                arr[i][j]=0

count=0
for i in range(0,5):
    for j in range(0,5):
        if(arr[i][j]==1):
            count=count+1
print(arr)
print(count)
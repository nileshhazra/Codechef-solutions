t= int (input())
f = 1
for i in range( t ) :
    n = int(input())
    for j in range ( 2, n+1 ):
        f*= j
    print(f)
    f = 1
    

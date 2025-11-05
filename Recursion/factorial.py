def fact(n):
    if(n == 0 or n == 1 ):
        return 1 
    else:
        return n* (n-1) 

print(fact(0))

def printn(n):
    if(n == 0 ):
        return 0 
    else:
        printn(n-1)
        print("pooja")
         

printn(3)
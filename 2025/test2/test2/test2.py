# def fune():
#     x=1
#     y=2
#     m=3
#     n=4
#     sum=lambda x,y:x+y
#     print(sum)
#     sub=lambda m,n:m-n
#     print(sub)
#     return sum(x,y)+sub(m,n)
# print(fune())


# def fab(max):
#    m,a,b=0,0,1
#    m=[]
#    while m < max:
#      L.apend(b)
#      a,b=b,a+b
#      m=m+1
#    return L
# fab(5)

def findRoot1(x,power,epsilon):
    low =0
    hight =x
    ans = (hight+low)/2.0
    while abs(ans**power-x)>epsilon:


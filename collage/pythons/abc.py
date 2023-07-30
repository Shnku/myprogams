def factorial(n):
    if n<=1 :
        print(1," ",end="")
        return 1
    else:
        k=n*factorial(n-1)
        print(k," ",end="")
        return k

def fibonacci(n):
    a=[];
    a.append(0)
    a.append(1)
    print(a," ",end="")
    for i in range(2,n):
        k=a[i-1]+a[i-2]
        a.append(k)
        print(k," ",end="")

def fibo(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        k=(fibo(n-1)+fibo(n-2))
        print(k)
        return k

def demo():
    pass

a=int(input("en the no: "))   
print(a)
x=factorial(5)
print(f"\nfinal result is: {x} unit")
fibonacci(5)
b=0o1234
print(f"\n\nb={b}")
y=fibo(a)
print(f'\n\nthr recursive fibo is {y}')
    
#output
'''
1  2  6  24  120  
final result is: 120 unit
[0, 1]  1  2  3 
'''

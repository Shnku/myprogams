def fibo(n, memorize=None):
    """
    Purpose: memorize Fibonacci numbers.
    """
    print(f"call with {n}, table: {memorize}")
    if memorize is None:
        memorize = {}

    try:
        return memorize[n]
    except KeyError:
        if n == 0 or n == 1:
            return n
        else:
            val = fibo(n - 1, memorize) + fibo(n - 2, memorize)
            memorize[n] = val
            return val


print(fibo(5))  # Output: 5
"""
                 fibo(5,none)
                /           \
               /             \
             fibo(4,{})  +  fibo(3, {2:1, 3:2, 4:3}) = 2
            /           \ 
           /             \
         fibo(3,{})  +   fibo(2, {2:1, 3:2}) = 1
        /          \
       /            \
      fibo(2,{})  +  fibo(1, {2:1})
    /          \ 
   /            \  
fibo(1,{})  +   fibo(0,{})

call with 5, table: None
call with 4, table: {}
call with 3, table: {}
call with 2, table: {}
call with 1, table: {}
call with 0, table: {}

call with 1, table: {2: 1}
call with 2, table: {2: 1, 3: 2}
call with 3, table: {2: 1, 3: 2, 4: 3}
5
"""


# end def
# now array method
def fib(n, arr=None):
    print(f"fibo( {n},{arr} )")
    if arr is None:
        arr = []
        arr = ["-1"] * (n + 1)
        # for i in range(n + 1):
        #     arr.append(None)
    if n <= 1:
        return n
    if arr[n] != "-1":
        return arr[n]
    else:
        arr[n] = fib(n - 1, arr) + fib(n - 2, arr)
        return arr[n]


print(fib(8))

"""
fibo( 8,None )
fibo( 7, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 6, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 5, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 4, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 3, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 2, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 1, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )
fibo( 0, arr[ ,  ,  ,  ,  ,  ,  ,  ,  ] )

fibo( 1, arr[ ,  , 1,  ,  ,  ,  ,  ,  ] )
fibo( 2, arr[ ,  , 1, 2,  ,  ,  ,  ,  ] )
fibo( 3, arr[ ,  , 1, 2, 3,  ,  ,  ,  ] )
fibo( 4, arr[ ,  , 1, 2, 3, 5,  ,  ,  ] )
fibo( 5, arr[ ,  , 1, 2, 3, 5, 8,  ,  ] )
fibo( 6, arr[ ,  , 1, 2, 3, 5, 8, 13,  ] )
21
"""

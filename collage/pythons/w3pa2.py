'''
Let us consider polynomials in a single variable x with integer coefficients. For instance:

3x4 - 17x2 - 3x + 5
Each term of the polynomial can be represented as a pair of integers (coefficient,exponent). The polynomial itself is then a list of such pairs.

We have the following constraints to guarantee that each polynomial has a unique representation:

Terms are sorted in descending order of exponent
No term has a zero cofficient
No two terms have the same exponent
Exponents are always nonnegative
For example, the polynomial introduced earlier is represented as:

[(3,4),(-17,2),(-3,1),(5,0)]
The zero polynomial, 0, is represented as the empty list [], since it has no terms with nonzero coefficients.

Write Python functions for the following operations:

addpoly(p1,p2)
multpoly(p1,p2)
that add and multiply two polynomials, respectively.

You may assume that the inputs to these functions follow the representation given above. Correspondingly, the outputs from these functions should also obey the same constraints.

You can write auxiliary functions to "clean up" polynomials – e.g., remove zero coefficient terms, combine like terms, sort by exponent etc. Build a library of functions that can be combined to achieve the desired format.

You may also want to convert the list representation to a dictionary representation and manipulate the dictionary representation, and then convert back.

Some examples:
   >>> addpoly([(4,3),(3,0)],[(-4,3),(2,1)])
   [(2, 1),(3, 0)]

   Explanation: (4x^3 + 3) + (-4x^3 + 2x) = 2x + 3

   >>> addpoly([(2,1)],[(-2,1)])
   []

   Explanation: 2x + (-2x) = 0

   >>> multpoly([(1,1),(-1,0)],[(1,2),(1,1),(1,0)])
   [(1, 3),(-1, 0)]

   Explanation: (x - 1) * (x^2 + x + 1) = x^3 - 1
'''

def addpoly(l1,l2):
    l3=[]
    i,j=0,0
    while (i<len(l1) and j<len(l2)):
        print(l1[i][0],l1[i][1],l1[i][0],l1[i][1])
        if l1[i][1]==l2[j][1]:
            s=l1[i][0]+l2[j][0]
            if s!=0:
                l3.append((s,l1[i][1])) 
            i+=1
            j+=1
        elif l1[i][1]>l2[j][1] :
            l3.append(l1[i])
            i+=1
        else:
            l3.append(l2[j])
            j+=1
    while i<len(l1):
        l3.append(l1[i])
        i+=1
    while(j<len(l2)):
        l3.append(l2[i])
        j+=1
    print(l3)
    return(l3)

def multpoly(l1,l2):
    for i in l1:
        for j in l2:
            

addpoly([(4,3),(3,0)],[(-4,3),(2,1)])
addpoly([(3,2),(4,1)],[(-2,1)])

# Write a program to calculate in how many days awork will be completed by three persons A, B andC together. A, B, C take x days, y days and z days respectively to do the job alone. 
# The formula to calculate the number of days if they work togetheris xyz/(xy + yz + xz) days where x, y, and z are givenas input to the program.

def calculation(x,y,z):
    ans=x*y*z*((x*y)+(y*z)+(z*x))
    return ans

x=int(input('working day for A: '))
y=int(input('working day for b: '))
z=int(input('working day for c: '))

print(f'the work will done by 3 people in { calculation(x,y,z)} days ')

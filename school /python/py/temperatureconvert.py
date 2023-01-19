# '''Write a Python program to convert temperature in
# degree Celsius to degree Fahrenheit. and farenhite to celsius.
# (Hint: T(°F) = T(°C) × 9/5 + 32) '''

temp = float(input('en the temp : '))
#choose if celsious or farenhite.. 
choice=input("what to convert..c tof or f toc: ")

if choice == 'c':
    print ('in farenhite',(9/5*temp)+32)
elif choice=='f':
    print('tn celsious', (temp-32)*5/9)
else:
    print('en properly')

#using match case statement:..........
match(choice):
    case 'c': 
        print ('in farenhite',(9/5*temp)+32)
    case 'f':
        print('in celsius: ', (temp-32)*5/9)
        
#end.. 
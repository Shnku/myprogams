# 1. Write a Python program to calculate the amount payable if money has been lent on simple interest.Principal or money lent = P, Rate of interest = R% per annum and Time = T years. Then Simple Interest (SI) = (P x R x T) / 100. Amount payable = Principal + SI. P, R and T are given as input to the program.

# def choice():
#     choice_list=[ si,ci,]
#     pass

def simple_interest(p, r, t):
    i = p*r*t/100
    return i

def compound_interest(p, r, t):
    istrue =input('if the time_period is not annual.."y"or"n": ')
    match(istrue):
        case 'n':
            p2 = p*((1+(r/100))**(t))
            i = p2-p
            print(f"comp_interest is {i} and the final amount is {p2}")

        case 'y':
            n = int(input('en the period: '))
            p3 = p*((1+(r/100*n))**(t*n))
            i=p3-p
            print(f"comp_interest is {i} and the final amount is {p3}")


p = float(input('enter the principle: '))
t = int(input('enter the time_year: '))
r = float(input('enter the rateofinterest: '))
choice = input("en 'si' or 'ci' ...")

match(choice):
    case 'si':
        print("the simple int... is:  ", simple_interest(p, r, t))
    case 'ci':
        print('.........calculation ci........')
        compound_interest(p,r,t)

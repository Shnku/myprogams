# Write a program to swap two numbers using a
# # third variable.
# # 15. Write a program to swap two numbers without
# # using a third variable.


def swap_wth3rd(ver, ver2):
    print(f"before swap: {ver},{ver2} ")
    temp = ver
    ver = ver2
    ver2 = temp
    print(f'afterswap: {ver},{ver2} ')


def swap_notwitn3rd(ver, ver2):
    print(f"before swap: {ver},{ver2} ")
    ver, ver2 = ver2, ver
    print(f'afterswap: {ver},{ver2} ')


def swp_txt_string(txt1, txt2):
    print(f"before swap: {txt1},{txt2} ")
    txt1, txt2 = txt2, txt1
    print(f'after swap: {txt1},{txt2} ')


check = input('what to swap?, "n3" or "n" or "t" ? :')
match(check):
    case 'n':
        # no1 = int(input('en the no1 to swap:'))
        # no2 = int(input('en the no2 to swap:'))
        no1, no2 = input("en the nos: ").split()  # int doesnot work
        swap_notwitn3rd(no1, no2)
    case 't':
        txt1, txt2 = input('en the txt to swap:').split()
        swp_txt_string(txt1, txt2)
    case 'n3':
        no1 = int(input('en the no1 to swap:'))
        no2 = int(input('en the no2 to swap:'))
        swap_notwitn3rd(no1, no2)
    case _:
        print(f'en prpper option ..')

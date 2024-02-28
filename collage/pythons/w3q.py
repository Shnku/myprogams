def mystery(l, v):
    if len(l) == 0:
        return v
    else:
        return mystery(l[:-1], l[-1] + v)


# What does mystery([22,14,19,65,82,55],1) return?
# print(mystery([22,14,19,65,82,55],1))


# What is the value of triples after the following assignment?
def find_triples():
    triples = [
        (x, y, z)
        for x in range(2, 4)
        for y in range(2, 5)
        for z in range(5, 7)
        if 2 * x * y > 3 * z
    ]
    print(triples)


# same as before...
def triple22():
    triple2 = []
    for x in range(2, 4):
        for y in range(2, 5):
            for z in range(5, 7):
                if 2 * x * y > 3 * z:
                    triple2.append((x, y, z))
                    print(triple2)


def runs():
    runs = {
        "Test": {
            "Rahul": [90, 14, 35],
            "Kohli": [3, 103, 73, 42],
            "Pujara": [53, 15, 133, 8],
        },
        "ODI": {"Sharma": [37, 99], "Kohli": [63, 47]},
    }
    print(runs)

    # runs["ODI"]["Rahul"].append([74]) error...
    # runs["ODI"]["Rahul"].extend([74]) error...
    # runs["ODI"]["Rahul"][0]=74 error...
    runs["ODI"]["Rahul"] = [74]  # it will be added after..
    print(runs)


"""
{
    'Test': {
        'Rahul': [90, 14, 35], 'Kohli': [3, 103, 73, 42], 'Pujara': [53, 15, 133, 8]},
    'ODI': {
        'Sharma': [37, 99], 'Kohli': [63, 47], 'Rahul': [74]}
    }
"""

runs()


def invent():
    inventory = {}

    # Which of the following generates an error?
    inventory["Amul"] = ["Mystic Mocha", 55]
    inventory["Amul, Mystic Mocha"] = 55
    # inventory[["Amul","Mystic Mocha"]] = 55 typeerror....
    inventory[("Amul", "Mystic Mocha")] = 55
    print(inventory)


"""
{
'Amul': ['Mystic Mocha', 55],
'Amul, Mystic Mocha': 55,
('Amul', 'Mystic Mocha'): 55
}
"""

invent()

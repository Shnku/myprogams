car = {
"brand": "Ford",
"model": "Mustang",
"year":{ "y1":1964,"y2":2004,"y3":1029}
}

x = car.keys()

print(x) #before the change

car["color"] = "white"

print(x) #after the change
print((car.get('year')))
print((car["year"]["y1"]))
print(car.get('year').get('y2'))
print(max(car))
print(max(car.get('year')))


'''
dict_keys(['brand', 'model', 'year'])
dict_keys(['brand', 'model', 'year', 'color'])
{'y1': 1964, 'y2': 2004, 'y3': 1029}
1964
2004
year
y3
'''
def orangecap(d):
    for match in d: # it returns strings.. so we cant access it like this
       print (match)
       for play in match:
           print(play)
           
orangecap({
    'match1':{'player1':57, 'player2':38}, 
    'match2':{'player3':9, 'player1':42}, 
    'match3':{'player2':41, 'player4':63, 'player3':91}
    })
'''
match1
m
a
t
c
h
1
match2
.
'''

for k,v in car.items():
    print(k,v)

'''
brand Ford
model Mustang
year {'y1': 1964, 'y2': 2004, 'y3': 1029}
color white
'''
# for k,v1 in car.items():
#     for j,v in k.items():
#         print(k,v) #error...


# this works...
myfamily = {
  "child1" : {
    "name" : "Emil",
    "year" : 2004
  },
  "child2" : {
    "name" : "Tobias",
    "year" : 2007
  },
  "child3" : {
    "name" : "Linus",
    "year" : 2011
  }
}
print()
for i in myfamily:
    print(i)
    print(myfamily[i]) #same
    print(myfamily.get(i)) #same
    for j in myfamily[i]:
        print(myfamily[i][j],"  ")
        print(myfamily[i].get(j))
    print()

'''
Emil   2004   
Tobias   2007   
Linus   2011   
'''
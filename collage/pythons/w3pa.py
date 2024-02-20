"""
We represent scores of batsmen across a sequence of matches in a two level dictionary as follows:

{'match1':{'player1':57, 'player2':38}, 'match2':{'player3':9, 'player1':42}, 'match3':{'player2':41, 'player4':63, 'player3':91}

Each match is identified by a string, as is each player. The scores are all integers. The names associated with the matches are not fixed (here they are 'match1', 'match2', 'match3'), nor are the names of the players. A player need not have a score recorded in all matches.

Define a Python function orangecap(d) that reads a dictionary d of this form and identifies the player with the highest total score. Your function should return a pair (playername,topscore) where playername is a string, the name of the player with the highest score, and topscore is an integer, the total score of playername.
The input will be such that there are never any ties for highest total score.

For instance:
>>> orangecap({
    'match1':{ i=0
        'player1':57, j=0
        'player2':38}, j=1
    'match2':{ i=1
        'player3':9, j=0
        'player1':42}, j=1
    'match3':{ i=2
        'player2':41, j=0
        'player4':63, j=1
        'player3':91} j=2
    })
('player3', 100)
>>> orangecap({'test1':{'Pant':84, 'Kohli':120}, 'test2':{'Pant':59, 'Gill':42}})
('Pant', 143)
"""

def orangecap(d):
    l=[]
    for i in d: # it returns strings.. so we cant access it like this
        print(i,"::",d[i].keys())
        if i not in l:
            l.append(i)
    print("list==",l)
    # for j in d:
    #     print(j,[j])
    #     for k in range(len(l)):
    #         if d[j]==l[k]:
    #             l[k]+=int(d[j].values())
            
            
    # return  (playername,topscore)

orangecap({
    'match1':{'player1':57, 'player2':38}, 
    'match2':{'player3':9, 'player1':42}, 
    'match3':{'player2':41, 'player4':63, 'player3':91}
    })
orangecap({'test1':{'Pant':84, 'Kohli':120}, 'test2':{'Pant':59, 'Gill':42}})

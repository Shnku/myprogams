from w5pa import spliter

w, l, s = spliter("p1:p2:2-6,6-7,7-6,6-3,6-1")
print(w)  # p1
print(l)  # p2
print(s, "\n")  # ['2-6', '6-7', '7-6', '6-3', '6-1']

from w5pa import get_gesult

full_game_stats = get_gesult(w, l, s)
print(full_game_stats)
# {'p1': {}, 'p2': {}}
full_game_stats["p1"]["match"] = 90
print(full_game_stats)
# {'p1': {'match': 90}, 'p2': {}}
full_game_stats["p1"] = {}
print(full_game_stats)  # it will remove match
# {'p1': {}, 'p2': {}}
full_game_stats["p1"]["match"] = 7
if w not in full_game_stats:
    full_game_stats[w] = {}
print(full_game_stats)
# {'p1': {'match': 7}, 'p2': {}}
full_game_stats[w]["match"] += 45
full_game_stats[w]["score"] = 8
print(full_game_stats)
# {'p1': {'match': 52, 'score': 8}, 'p2': {}}

"""
a,b=s.split('-')
---------------------------------------------------------------------------
AttributeError                            Traceback (most recent call last)
Cell In[13], line 1
----> 1 a,b=s.split('-')

AttributeError: 'list' object has no attribute 'split'

In [14]: a,b=s[0].split('-')

In [15]: a,b
Out[15]: ('2', '6')

In [16]: a,b=(int)s[0].split('-')
  Cell In[16], line 1
    a,b=(int)s[0].split('-')
             ^
SyntaxError: invalid syntax


In [17]: a,b=int(s[0].split('-'))
---------------------------------------------------------------------------
TypeError                                 Traceback (most recent call last)
Cell In[17], line 1
----> 1 a,b=int(s[0].split('-'))

TypeError: int() argument must be a string, a bytes-like object or a number, not 'list'

# this will worked..
In [18]: a,b=map(int,s[0].split('-'))

In [19]: a,b
Out[19]: (2, 6)

In [20]: 
"""

# IPython log file

full_game_stats
# get_ipython().run_line_magic('run', 'w5pa.py')
full_game_stats
full_game_stats["p1"]["match"] = 90
full_game_stats
full_game_stats[w] = {}
full_game_stats
full_game_stats["p1"]["match"] = 90
if w not in full_game_stats:
    full_game_stats[w] = {}
if w not in full_game_stats:
    full_game_stats[w] = {}
full_game_stats
s
a, b = s[0].split("-")
a, b
# a,b=(int)s[0].split('-')
# a,b=int(s[0].split('-'))
a, b = map(int, s[0].split("-"))
a, b
# get_ipython().run_line_magic('logstart', '')

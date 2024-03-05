"""
Here are some basic facts about tennis scoring: 
    A tennis match is made up of sets. A set is made up of games.

To win a set, a player has to win 6 games with a difference of 2 games. At 6-6, there is often a special tie-breaker. In some cases, players go on playing till one of them wins the set with a difference of two games.

Tennis matches can be either 3 sets or 5 sets. The player who wins a majority of sets wins the match (i.e., 2 out 3 sets or 3 out of 5 sets) The score of a match lists out the games in each set, with the overall winner's score reported first for each set. Thus, if the score is 6-3, 5-7, 7-6 it means that the first player won the first set by 6 games to 3, lost the second one 5 games to 7 and won the third one 7 games to 6 (and hence won the overall match as well by 2 sets to 1).

You will read input from the keyboard (standard input) containing the results of several tennis matches. Each match's score is recorded on a separate line with the following format:

Winner:Loser:Set-1-score,...,Set-k-score, where 2 ≤ k ≤ 5

For example, an input line of the form

>Jabeur:Swiatek:3-6,6-3,6-3
indicates that Jabeur beat Swiatek 3-6, 6-3, 6-3 in a best of 3 set match.

The input is terminated by a line consisting of the string "EOF".

You have to write a Python program that reads information about all the matches and compile the following statistics for each player:

Number of best-of-5 set matches won
Number of best-of-3 set matches won
Number of sets won
Number of games won
Number of sets lost
Number of games lost

You should print out to the screen (standard output) a summary in decreasing order of ranking, where the ranking is according to the criteria 1-6 in that order (compare item 1, if equal compare item 2, if equal compare item 3 etc, noting that for items 5 and 6 the comparison is reversed).

For instance, given the following data : example output..

"""


def spliter(args):
    winner, loser, scoreset = args.split(":")
    scoreset = scoreset.split(",")
    return winner, loser, scoreset


def get_gesult(player, win, lose, scoreset):
    if win not in player:
        player[win] = {
            "bo5": 0,
            "bo3": 0,
            "swin": 0,
            "gwin": 0,
            "slost": 0,
            "glost": 0,
        }
    if lose not in player:
        player[lose] = {
            "bo5": 0,
            "bo3": 0,
            "swin": 0,
            "gwin": 0,
            "slost": 0,
            "glost": 0,
        }
    set_len = len(scoreset)
    won_count, lose_count = 0, 0
    for l in scoreset:
        a, b = map(int, l.split("-"))
        player[win]["gwin"] += a
        player[win]["glost"] += b
        player[lose]["gwin"] += b
        player[lose]["glost"] += a
        if a < b:
            lose_count += 1
            player[win]["slost"] += 1
            player[lose]["swin"] += 1
        else:
            won_count += 1
            player[win]["swin"] += 1
            player[lose]["slost"] += 1
    if 2 <= set_len <= 3 and won_count > set_len / 2:
        player[win]["bo3"] += 1
    elif 3 < set_len <= 5 and won_count > set_len / 2:
        player[win]["bo5"] += 1
    return player


def sorting(player):
    for p in player:
        sorted(player[p])


def print_format(player):
    for p in player:
        print(p, end=" ")
        for j in player[p]:
            print(player[p][j], end=" ")
        print()


statistics = {}
while True:
    ip = input()
    lines = ip.strip()
    if lines == "EOF":
        break
    win, los, scor = spliter(lines)
    statistics = get_gesult(statistics, win, los, scor)

print(statistics, "\n")
print_format(statistics)
# Sort the dictionary based on 'swin' (sets won) and then 'gwin' (games won)
sorted_players_data = sorted(
    statistics.items(),
    key=lambda x: (
        x[1]["bo5"],  # Number of best-of-5 set matches won
        x[1]["bo3"],  # Number of best-of-3 set matches won
        x[1]["swin"],  # Number of sets won
        x[1]["gwin"],  # Number of games won
        -x[1]["slost"],  # Number of sets lost (reversed comparison)
        -x[1]["glost"],  # Number of games lost (reversed comparison)
    ),
    reverse=True,
)

# Create a new dictionary with the sorted data
print(sorted_players_data)  # as tuples.....
"""
[
    ('Zverev', {'bo5': 2, 'bo3': 1, 'swin': 10, 'gwin': 104, 'slost': 11, 'glost': 106}), 
    ('Alcaraz', {'bo5': 1, 'bo3': 2, 'swin': 11, 'gwin': 106, 'slost': 10, 'glost': 104}), 
    ('Jabeur', {'bo5': 0, 'bo3': 4, 'swin': 9, 'gwin': 76, 'slost': 8, 'glost': 74}), 
    ('Swiatek', {'bo5': 0, 'bo3': 2, 'swin': 8, 'gwin': 74, 'slost': 9, 'glost': 76})
]
"""
# Print the sorted dictionary
sorted_players_data_dict = dict(sorted_players_data)
print(sorted_players_data_dict)
print_format(sorted_players_data_dict)


# output...
"""
Zverev:Alcaraz:2-6,6-7,7-6,6-3,6-1
Swiatek:Jabeur:6-4,6-4
Alcaraz:Zverev:6-3,6-3
Jabeur:Swiatek:1-6,7-5,6-2
Zverev:Alcaraz:6-0,7-6,6-3
Jabeur:Swiatek:2-6,6-2,6-0
Alcaraz:Zverev:6-3,4-6,6-3,6-4
Swiatek:Jabeur:6-1,3-6,7-5
Zverev:Alcaraz:7-6,4-6,7-6,2-6,6-2
Jabeur:Swiatek:6-4,1-6,6-3
Alcaraz:Zverev:7-5,7-5
Jabeur:Swiatek:3-6,6-3,6-3
EOF

{
'Zverev': {'bo5': 2, 'bo3': 1, 'swin': 10, 'gwin': 104, 'slost': 11, 'glost': 106}, 
'Alcaraz': {'bo5': 1, 'bo3': 2, 'swin': 11, 'gwin': 106, 'slost': 10, 'glost': 104}, 
'Swiatek': {'bo5': 0, 'bo3': 2, 'swin': 8, 'gwin': 74, 'slost': 9, 'glost': 76}, 
'Jabeur': {'bo5': 0, 'bo3': 4, 'swin': 9, 'gwin': 76, 'slost': 8, 'glost': 74}
} 

Zverev 2 1 10 104 11 106 
Alcaraz 1 2 11 106 10 104 
Swiatek 0 2 8 74 9 76 
Jabeur 0 4 9 76 8 74 

{
'Zverev': {'bo5': 2, 'bo3': 1, 'swin': 10, 'gwin': 104, 'slost': 11, 'glost': 106}, 
'Alcaraz': {'bo5': 1, 'bo3': 2, 'swin': 11, 'gwin': 106, 'slost': 10, 'glost': 104}, 
'Jabeur': {'bo5': 0, 'bo3': 4, 'swin': 9, 'gwin': 76, 'slost': 8, 'glost': 74}, 
'Swiatek': {'bo5': 0, 'bo3': 2, 'swin': 8, 'gwin': 74, 'slost': 9, 'glost': 76}
}

Zverev 2 1 10 104 11 106 
Alcaraz 1 2 11 106 10 104 
Jabeur 0 4 9 76 8 74 
Swiatek 0 2 8 74 9 76 
"""

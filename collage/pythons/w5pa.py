def spliter(args):
    winner, loser, scoreset = args.split(":")
    scoreset = scoreset.split(",")
    return winner, loser, scoreset


def get_gesult(win, lose, scoreset):
    player = {}
    player[win] = {"bo5": 0, "bo3": 0, "swin": 0, "gwin": 0, "slost": 0, "glost": 0}
    player[lose] = {"bo5": 0, "bo3": 0, "swin": 0, "gwin": 0, "slost": 0, "glost": 0}
    for l in scoreset:
        won_count, lose_count = 0, 0
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
    if won_count >= 3:
        player[win]["bo5"] = won_count
    return player

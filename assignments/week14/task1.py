def both_sports(bb_arr, fb_arr):
    bb_names = {} # empty dictionary to be used for O(1) search
    for player in bb_arr:
        full_name = f"{player["first_name"]} {player["last_name"]}"
        bb_names[full_name] = True # True value is arbitrary, just need key

    both_sports_arr = []
    for player in fb_arr:
        full_name = f"{player["first_name"]} {player["last_name"]}"
        if full_name in bb_names: 
            both_sports_arr.append(full_name)
            
    return both_sports_arr

basketball_players = [
    {"first_name": "Jill", "last_name": "Huang", "team": "Gators"},
    {"first_name": "Janko", "last_name": "Barton", "team": "Sharks"},
    {"first_name": "Wanda", "last_name": "Vakulskas", "team": "Sharks"},
    {"first_name": "Jill", "last_name": "Moloney", "team": "Gators"},
    {"first_name": "Luuk", "last_name": "Watkins", "team": "Gators"}
]

football_players = [
    {"first_name": "Hanzla", "last_name": "Radosti", "team": "32ers"},
    {"first_name": "Tina", "last_name": "Watkins", "team": "Barleycorns"},
    {"first_name": "Alex", "last_name": "Patel", "team": "32ers"},
    {"first_name": "Jill", "last_name": "Huang", "team": "Barleycorns"},
    {"first_name": "Wanda", "last_name": "Vakulskas", "team": "Barleycorns"}
]

print(both_sports(basketball_players, football_players))

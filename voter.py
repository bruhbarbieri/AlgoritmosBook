from cs50 import get_string

voted = {}

def check_voter(name):
  if name in voted:
    print("kick them out!")
  else:
    voted[name] = True
    print("let them vote!")

print(check_voter(get_string("Name: ")))

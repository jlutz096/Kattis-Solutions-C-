# Justin Lutz
# Kattis Odd Echo Python Solution
# 11-29-2022
#


numInputs = int(input())

for i in range(numInputs):
    word = input()
    if i % 2 == 0:
        print(word)
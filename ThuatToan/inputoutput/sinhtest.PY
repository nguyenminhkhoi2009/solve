import random

with open("input.txt", "w") as f:
    for _ in range(10_000_000):
        f.write(f"{random.randint(1, 1000000)}\n")
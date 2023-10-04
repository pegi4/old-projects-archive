import sys
import random
import base64

def corrupt(data, probability=0.05):
    return bytes(b ^ (1 << random.randint(0, 7)) if random.random() < probability else b for b in data)

if __name__ == "__main__":
    N = int(input())
    encoded_base64 = input().strip().encode('utf-8')
    data = base64.b64decode(encoded_base64)
    corrupted = corrupt(data)
    corrupted_base64 = base64.b64encode(corrupted)
    print(len(corrupted))
    print(corrupted_base64.decode('utf-8'))

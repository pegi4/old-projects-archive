import base64

def encode_byte(byte):
    count_ones = sum(1 for i in range(8) if byte & (1 << i))
    
    if count_ones % 2 == 0:
        return byte
    else:
        return byte | (1 << 7)

def encode(data):
    return bytes(encode_byte(byte) for byte in data)

if __name__ == "__main__":
    data = input().strip().encode('utf-8')
    encoded = encode(data)
    encoded_base64 = base64.b64encode(encoded)
    print(len(encoded))
    print(encoded_base64.decode('utf-8'))

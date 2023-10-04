import base64

def decode_byte(byte):
    count_ones = sum(1 for i in range(8) if byte & (1 << i))
    
    if (count_ones % 2 == 0 and not byte & (1 << 7)) or (count_ones % 2 == 1 and byte & (1 << 7)):
        byte ^= 1
        
    return byte & 0x7F

def decode(data):
    return bytes(decode_byte(byte) for byte in data)

if __name__ == "__main__":
    encoded_base64 = input().strip().encode('utf-8')
    data = base64.b64decode(encoded_base64)
    decoded = decode(data)
    print(decoded.decode('utf-8'))

from Crypto.Cipher import AES

def myencrypt(s):
    key = s[:16]
    iv = s[:16]

    padding_bit = chr(16 - len(s) % 16)
    padded_in = s + padding_bit*(16 - len(s) % 16)

    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.encrypt(padded_in)

def main():
    inputfile = open('flag.png', 'r')
    outputfile = open('encrypted.png', 'w')

    plaintext = inputfile.read()
    ciphertext = myencrypt(plaintext)

    outputfile.write(ciphertext)

    inputfile.close()
    outputfile.close()
    print('encryption completed.\n')

if __name__ == '__main__':
    main()

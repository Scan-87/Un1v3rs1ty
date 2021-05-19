alphabeth = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' ,'k', 'l', 'm', 'n', 'o', 'p', 'q' ,'r' ,'s' ,'t' ,'u', 'v', 'w', 'x', 'y', 'z']
def encrypt(text, gamma):
    textLen = len(text)
    gammaLen = len(gamma)

    #Формируем ключевое слово(растягиваем гамму на длину текста)
    keyText = []
    for i in range(textLen // gammaLen):
        for symb in gamma:
            keyText.append(symb)
    for i in range(textLen % gammaLen):
        keyText.append(gamma[i])

    #Шифрование
    code = []
    for i in range(textLen):
        code.append(alphabeth[(alphabeth.index(text[i]) + alphabeth.index(keyText[i])) % 26])

    return code



def decrypt(code, gamma):
    codeLen = len(code)
    gammaLen = len(gamma)

    #Формируем ключевое слово(растягиваем гамму на длину текста)
    keyText = []
    for i in range(codeLen // gammaLen):
        for symb in gamma:
            keyText.append(symb)
    for i in range(codeLen % gammaLen):
        keyText.append(gamma[i])

    #Расшифровка
    text = []
    for i in range(codeLen):
        text.append(alphabeth[(alphabeth.index(code[i]) - alphabeth.index(keyText[i]) + 26) % 26])

    return text


exit = 'y'
while exit != 'n':
    mode = input("Do you want to encrypt or decrypt? <e/d>\n>>> ")
    if mode == 'e':
        te = input("Please enter your message\n>>> ")
        ga = input("Please enter your gamma\n>>> ")
        co = ''.join(encrypt(te, ga))
        print("Your encrypted message: ", co)
    elif mode == 'd':
        te = input("Please enter your crypto\n>>> ")
        ga = input("Please enter your gamma\n>>> ")
        de = ''.join(decrypt(te, ga))
        print("Your decrypted message: ", de)
    else:
        print("Stupid user!")
    exit = input("Do you want to continue? <y/n>\n>>> ")

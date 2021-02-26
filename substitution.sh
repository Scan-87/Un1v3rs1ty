#!/bin/bash

#LC_ALL=ru_RU.utf8 echo "SharkText To Encode!" | tr '[A-Za-zА-Я]' '[X-ZA-Wx-za-wН-ЯА-М]'

file="/tmp/cipher.txt"
touch $file



Encode(){
echo -e "\nPlease enter your text to encode:"
read -p ">>> " text
echo $text > $file

sed -i y/$(printf "%s" {a..z} {A..Z} абвгдеёжзийклмнопрстуфхцчшщъыьэюя АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ)/$(printf "%s" {m..z} {a..l} {M..Z} {A..L} мнопрстуфхцчшщъыьэюя абвгдеёжзийкл МНОПРСТУФХЦЧШЩЪЫЬЭЮЯ АБВГДЕЁЖЗИЙКЛ)/ $file

echo -e "\nYour encoded message is:"
cat $file
}



Decode(){
echo -e "\nPlease enter your text to decode:"
read -p ">>> " text
echo $text > $file

sed -i y/$(printf "%s" {m..z} {a..l} {M..Z} {A..L} мнопрстуфхцчшщъыьэюя абвгдеёжзийкл МНОПРСТУФХЦЧШЩЪЫЬЭЮЯ АБВГДЕЁЖЗИЙКЛ)/$(printf "%s" {a..z} {A..Z} абвгдеёжзийклмнопрстуфхцчшщъыьэюя АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ)/ $file

cat $file
}



Main_Menu(){
mode='e'

echo -e "\nDo you want to encode or decode? <e/d>"
read -p ">>> " mode
if [[ $mode == 'e' ]] 
then 
	Encode
elif [[ $mode == 'd' ]] 
then 
	Decode 
else 
	echo -e "\nPlease, don't act like a stupid user (^-^)"
fi
}



LiPu='\033[0;33m'
NC='\033[0m'
clear
echo -e "${LiPu}░█▀▀░█░█░█▀▄░█▀▀░▀█▀░▀█▀░▀█▀░█░█░▀█▀░▀█▀░█▀█░█▀█░"
echo -e "${LiPu}░▀▀█░█░█░█▀▄░▀▀█░░█░░░█░░░█░░█░█░░█░░░█░░█░█░█░█░"
echo -e "${LiPu}░▀▀▀░▀▀▀░▀▀░░▀▀▀░░▀░░▀▀▀░░▀░░▀▀▀░░▀░░▀▀▀░▀▀▀░▀░▀░"
echo -e "${LiPu}░░░░░░░░░░░░░█▀▀░▀█▀░█▀█░█░█░█▀▀░█▀▄░░░░░░░░░░░░░"
echo -e "${LiPu}░░░░░░░░░░░░░█░░░░█░░█▀▀░█▀█░█▀▀░█▀▄░░by scan-87░"
echo -e "${LiPu}░░░░░░░░░░░░░▀▀▀░▀▀▀░▀░░░▀░▀░▀▀▀░▀░▀░░░░░░░░░░░░░${NC}"

ex="g"
while [ $ex != 'n' ]
do
	Main_Menu
	echo -e "\nDo you want to continue? <y/n>"
	read -p ">>> " ex
done

clear



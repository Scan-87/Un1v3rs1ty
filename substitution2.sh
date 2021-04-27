#!/bin/bash

#LC_ALL=ru_RU.utf8 echo "SharkText To Encode!" | tr '[A-Za-zА-Я]' '[X-ZA-Wx-za-wН-ЯА-М]'

file="/tmp/cipher.txt"
file2="/tmp/cipher2.txt"
touch $file



Encode(){
echo -e "\nPlease enter your text to encode:"
read -p ">>> " text
echo $text > $file


alph0=$(printf "%s" {a..z} {A..Z})
alph1=$(printf "%s" {m..z} {a..l} {M..Z} {A..L})
alph2=$(printf "%s" {p..z} {a..o} {P..Z} {A..O})
alph3=$(printf "%s" {k..z} {a..j} {K..Z} {A..J})
alph4=$(printf "%s" {s..z} {a..r} {S..Z} {A..R})

alph=1
enc=""

while read -n1 c #command reads file char by char (don't forget '< $file' in the end)
do
	#you need this part to keep space charcters
	if [[ $c == '' ]]
	then
		c=' '
		enc=$enc$c
	else
		case $(($alph % 4)) in
			'1') enc=$enc$(echo $c | tr $alph0 $alph1 );;
			'2') enc=$enc$(echo $c | tr $alph0 $alph2 );;
			'3') enc=$enc$(echo $c | tr $alph0 $alph3 );;
			'0') enc=$enc$(echo $c | tr $alph0 $alph4 );;
		esac

		let alph++
	fi
done < $file

echo -e "\nYour encoded message is:"
echo $enc
}



Decode(){
echo -e "\nPlease enter your text to decode:"
read -p ">>> " text
echo $text > $file


alph0=$(printf "%s" {a..z} {A..Z})
alph1=$(printf "%s" {m..z} {a..l} {M..Z} {A..L})
alph2=$(printf "%s" {p..z} {a..o} {P..Z} {A..O})
alph3=$(printf "%s" {k..z} {a..j} {K..Z} {A..J})
alph4=$(printf "%s" {s..z} {a..r} {S..Z} {A..R})

alph=1
dec=""

while read -n1 c #command reads file char by char (don't forget '< $file' in the end)
do
	#you need this part to keep space charcters
	if [[ $c == '' ]]
	then
		c=' '
		dec=$dec$c
	else
		case $(($alph % 4)) in
			'1') dec=$dec$(echo $c | tr $alph1 $alph0 );;
			'2') dec=$dec$(echo $c | tr $alph2 $alph0 );;
			'3') dec=$dec$(echo $c | tr $alph3 $alph0 );;
			'0') dec=$dec$(echo $c | tr $alph4 $alph0 );;
		esac

		let alph++
	fi
done < $file

echo -e "\nYour decoded message is:"
echo $dec
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
echo -e "${LiPu}░░░░░░░░░░█▀▀░▀█▀░█▀█░█░█░█▀▀░█▀▄░▀▀▄░░░░░░░░░░░░"
echo -e "${LiPu}░░░░░░░░░░█░░░░█░░█▀▀░█▀█░█▀▀░█▀▄░▄▀░░by scan-87░"
echo -e "${LiPu}░░░░░░░░░░▀▀▀░▀▀▀░▀░░░▀░▀░▀▀▀░▀░▀░▀▀▀░░░░░░░░░░░░${NC}"

ex="g"
while [ $ex != 'n' ]
do
	Main_Menu
	echo -e "\nDo you want to continue? <y/n>"
	read -p ">>> " ex
done

clear



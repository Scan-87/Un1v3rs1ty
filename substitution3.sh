#!/bin/bash

#LC_ALL=ru_RU.utf8 echo "SharkText To Encode!" | tr '[A-Za-zА-Я]' '[X-ZA-Wx-za-wН-ЯА-М]'

file="/tmp/cipher.txt"
file2="/tmp/cipher2.txt"
touch $file



Encode(){

alph1=$(printf "%s" {a..z} {A..Z})
alph2=$(printf "%s" {b..z} {a} {B..Z} {A})
alph3=$(printf "%s" {c..z} {a..b} {C..Z} {A..B})
alph4=$(printf "%s" {d..z} {a..c} {D..Z} {A..C})
alph5=$(printf "%s" {e..z} {a..d} {E..Z} {A..D})
alph6=$(printf "%s" {f..z} {a..e} {F..Z} {A..E})
alph7=$(printf "%s" {g..z} {a..f} {G..Z} {A..F})
alph8=$(printf "%s" {h..z} {a..g} {H..Z} {A..G})
alph9=$(printf "%s" {i..z} {a..h} {I..Z} {A..H})
alph10=$(printf "%s" {j..z} {a..i} {J..Z} {A..I})
alph11=$(printf "%s" {k..z} {a..j} {K..Z} {A..J})
alph12=$(printf "%s" {l..z} {a..k} {L..Z} {A..K})
alph13=$(printf "%s" {m..z} {a..l} {M..Z} {A..L})
alph14=$(printf "%s" {n..z} {a..m} {N..Z} {A..M})
alph15=$(printf "%s" {o..z} {a..n} {O..Z} {A..N})
alph16=$(printf "%s" {p..z} {a..o} {P..Z} {A..O})
alph17=$(printf "%s" {q..z} {a..p} {Q..Z} {A..P})
alph18=$(printf "%s" {r..z} {a..q} {R..Z} {A..Q})
alph19=$(printf "%s" {s..z} {a..r} {S..Z} {A..R})
alph20=$(printf "%s" {t..z} {a..s} {T..Z} {A..S})
alph21=$(printf "%s" {u..z} {a..t} {U..Z} {A..T})
alph22=$(printf "%s" {v..z} {a..u} {V..Z} {A..U})
alph23=$(printf "%s" {w..z} {a..v} {W..Z} {A..V})
alph24=$(printf "%s" {x..z} {a..w} {X..Z} {A..W})
alph25=$(printf "%s" {y..z} {a..x} {Y..Z} {A..X})
alph26=$(printf "%s" {z} {a..y} {Z} {A..Y})


echo -e "\nPlease enter your text to encode:"
read -p ">>> " text
echo $text > $file
echo -e "\nPlease enter your key phrase:"
read -p ">>> " key
keylen=${#key}	 #get length of 'key'

alph=1
ind=0
enc=""

while read -n1 c #command reads file char by char (don't forget '< $file' in the end)
do
	if [ $ind = $keylen ] #loop the key
	then
		ind=0
	fi


	#you need this part to keep space charcters
	if [[ $c == '' ]]
	then
		c=' '
		enc=$enc$c
	else
		case ${key:$ind:1} in
			'a') enc=$enc$(echo $c | tr $alph1 $alph1 );;
			'b') enc=$enc$(echo $c | tr $alph1 $alph2 );;
			'c') enc=$enc$(echo $c | tr $alph1 $alph3 );;
			'd') enc=$enc$(echo $c | tr $alph1 $alph4 );;
			'e') enc=$enc$(echo $c | tr $alph1 $alph5 );;
			'f') enc=$enc$(echo $c | tr $alph1 $alph6 );;
			'g') enc=$enc$(echo $c | tr $alph1 $alph7 );;
			'h') enc=$enc$(echo $c | tr $alph1 $alph8 );;
			'i') enc=$enc$(echo $c | tr $alph1 $alph9 );;
			'j') enc=$enc$(echo $c | tr $alph1 $alph10 );;
			'k') enc=$enc$(echo $c | tr $alph1 $alph11 );;
			'l') enc=$enc$(echo $c | tr $alph1 $alph12 );;
			'm') enc=$enc$(echo $c | tr $alph1 $alph13 );;
			'n') enc=$enc$(echo $c | tr $alph1 $alph14 );;
			'o') enc=$enc$(echo $c | tr $alph1 $alph15 );;
			'p') enc=$enc$(echo $c | tr $alph1 $alph16 );;
			'q') enc=$enc$(echo $c | tr $alph1 $alph17 );;
			'r') enc=$enc$(echo $c | tr $alph1 $alph18 );;
			's') enc=$enc$(echo $c | tr $alph1 $alph19 );;
			't') enc=$enc$(echo $c | tr $alph1 $alph20 );;
			'u') enc=$enc$(echo $c | tr $alph1 $alph21 );;
			'v') enc=$enc$(echo $c | tr $alph1 $alph22 );;
			'w') enc=$enc$(echo $c | tr $alph1 $alph23 );;
			'x') enc=$enc$(echo $c | tr $alph1 $alph24 );;
			'y') enc=$enc$(echo $c | tr $alph1 $alph25 );;
			'z') enc=$enc$(echo $c | tr $alph1 $alph26 );;
		esac

		let ind++
	fi
done < $file

echo -e "\nYour encoded message is:"
echo $enc
}



Decode(){

alph1=$(printf "%s" {a..z} {A..Z})
alph2=$(printf "%s" {b..z} {a} {B..Z} {A})
alph3=$(printf "%s" {c..z} {a..b} {C..Z} {A..B})
alph4=$(printf "%s" {d..z} {a..c} {D..Z} {A..C})
alph5=$(printf "%s" {e..z} {a..d} {E..Z} {A..D})
alph6=$(printf "%s" {f..z} {a..e} {F..Z} {A..E})
alph7=$(printf "%s" {g..z} {a..f} {G..Z} {A..F})
alph8=$(printf "%s" {h..z} {a..g} {H..Z} {A..G})
alph9=$(printf "%s" {i..z} {a..h} {I..Z} {A..H})
alph10=$(printf "%s" {j..z} {a..i} {J..Z} {A..I})
alph11=$(printf "%s" {k..z} {a..j} {K..Z} {A..J})
alph12=$(printf "%s" {l..z} {a..k} {L..Z} {A..K})
alph13=$(printf "%s" {m..z} {a..l} {M..Z} {A..L})
alph14=$(printf "%s" {n..z} {a..m} {N..Z} {A..M})
alph15=$(printf "%s" {o..z} {a..n} {O..Z} {A..N})
alph16=$(printf "%s" {p..z} {a..o} {P..Z} {A..O})
alph17=$(printf "%s" {q..z} {a..p} {Q..Z} {A..P})
alph18=$(printf "%s" {r..z} {a..q} {R..Z} {A..Q})
alph19=$(printf "%s" {s..z} {a..r} {S..Z} {A..R})
alph20=$(printf "%s" {t..z} {a..s} {T..Z} {A..S})
alph21=$(printf "%s" {u..z} {a..t} {U..Z} {A..T})
alph22=$(printf "%s" {v..z} {a..u} {V..Z} {A..U})
alph23=$(printf "%s" {w..z} {a..v} {W..Z} {A..V})
alph24=$(printf "%s" {x..z} {a..w} {X..Z} {A..W})
alph25=$(printf "%s" {y..z} {a..x} {Y..Z} {A..X})
alph26=$(printf "%s" {z} {a..y} {Z} {A..Y})


echo -e "\nPlease enter your text to decode:"
read -p ">>> " text
echo $text > $file
echo -e "\nPlease enter your key phrase:"
read -p ">>> " key
keylen=${#key}	 #get length of 'key'

alph=1
ind=0
enc=""

while read -n1 c #command reads file char by char (don't forget '< $file' in the end)
do
	if [ $ind = $keylen ] #loop the key
	then
		ind=0
	fi


	#you need this part to keep space charcters
	if [[ $c == '' ]]
	then
		c=' '
		enc=$enc$c
	else
		case ${key:$ind:1} in
			'a') enc=$enc$(echo $c | tr $alph1 $alph1 );;
			'b') enc=$enc$(echo $c | tr $alph2 $alph1 );;
			'c') enc=$enc$(echo $c | tr $alph3 $alph1 );;
			'd') enc=$enc$(echo $c | tr $alph4 $alph1 );;
			'e') enc=$enc$(echo $c | tr $alph5 $alph1 );;
			'f') enc=$enc$(echo $c | tr $alph6 $alph1 );;
			'g') enc=$enc$(echo $c | tr $alph7 $alph1 );;
			'h') enc=$enc$(echo $c | tr $alph8 $alph1 );;
			'i') enc=$enc$(echo $c | tr $alph9 $alph1 );;
			'j') enc=$enc$(echo $c | tr $alph10 $alph1 );;
			'k') enc=$enc$(echo $c | tr $alph11 $alph1 );;
			'l') enc=$enc$(echo $c | tr $alph12 $alph1 );;
			'm') enc=$enc$(echo $c | tr $alph13 $alph1 );;
			'n') enc=$enc$(echo $c | tr $alph14 $alph1 );;
			'o') enc=$enc$(echo $c | tr $alph15 $alph1 );;
			'p') enc=$enc$(echo $c | tr $alph16 $alph1 );;
			'q') enc=$enc$(echo $c | tr $alph17 $alph1 );;
			'r') enc=$enc$(echo $c | tr $alph18 $alph1 );;
			's') enc=$enc$(echo $c | tr $alph19 $alph1 );;
			't') enc=$enc$(echo $c | tr $alph20 $alph1 );;
			'u') enc=$enc$(echo $c | tr $alph21 $alph1 );;
			'v') enc=$enc$(echo $c | tr $alph22 $alph1 );;
			'w') enc=$enc$(echo $c | tr $alph23 $alph1 );;
			'x') enc=$enc$(echo $c | tr $alph24 $alph1 );;
			'y') enc=$enc$(echo $c | tr $alph25 $alph1 );;
			'z') enc=$enc$(echo $c | tr $alph26 $alph1 );;
		esac

		let ind++
	fi
done < $file

echo -e "\nYour decoded message is:"
echo $enc
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
echo -e "${LiPu}░░░░░░░░░░█▀▀░▀█▀░█▀█░█░█░█▀▀░█▀▄░▀▀█░░░░░░░░░░░░"
echo -e "${LiPu}░░░░░░░░░░█░░░░█░░█▀▀░█▀█░█▀▀░█▀▄░░▀▄░by scan-87░"
echo -e "${LiPu}░░░░░░░░░░▀▀▀░▀▀▀░▀░░░▀░▀░▀▀▀░▀░▀░▀▀░░░░░░░░░░░░░${NC}"

ex="g"
while [ $ex != 'n' ]
do
	Main_Menu
	echo -e "\nDo you want to continue? <y/n>"
	read -p ">>> " ex
done

clear



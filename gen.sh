#!/bin/zsh

for file in src/ch*.tex
do
	filename=$(basename $file .tex)
	sed -i '' -e "\$s/ch[0-9]*/$filename/g" main.tex
	make
	mv main.pdf slide/$filename.pdf
done

sed -i '' -e "\$s/ch[0-9]*/ch00/g" main.tex

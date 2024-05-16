target = main

all: compile clean

compile: main.tex src/*.tex
	latexmk --xelatex $(target)

clean:
	-@latexmk -c $(target)
	-@rm -rf \
		*.nav \
		*.snm \
		*.vrb \
		*.xdv
	-@find . -name *.aux -exec rm {} \;

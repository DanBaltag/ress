OB=main.o readfile.o management.o
MO=g++ -c 
EXE=./exe

all: $(EXE)
	./exe

$(EXE): $(OB)
	g++ -o exe $(OB)

main.o: main.cpp
	$(MO) main.cpp

readfile.o: readfile.cpp
	$(MO) readfile.cpp

management.o: management.cpp
	$(MO) management.cpp

clear: $(OB)
	rm $(OB)

clear_all: $(EXE)
	rm $(OB) $(EXE)

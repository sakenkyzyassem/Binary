Flags = -Wreturn-type -pedantic -pedantic-errors -Wundef -std=c++17 -O5
CPP = g++


main : Makefile   binary.o main.o 
	$(CPP) $(Flags) -o main   binary.o main.o 

binary.o : Makefile     binary.h 
	$(CPP) -c $(Flags) binary.h -o  binary.o

main.o : Makefile   main.cpp   binary.h 
	$(CPP) -c $(Flags) main.cpp -o  main.o
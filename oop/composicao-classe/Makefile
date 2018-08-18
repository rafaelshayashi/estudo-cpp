all: byte.banco

conta.corrente.lib: 
	g++ -Wall -c include/conta-corrente.cpp -o conta-corrente.o

cliente.lib:
	g++ -Wall -c include/cliente.cpp -o cliente.o

byte.banco: conta.corrente.lib cliente.lib
	g++ -Wall byte-banco.cpp conta-corrente.o cliente.o -o byte-banco

clean:
	rm -f *.o

all: byte.banco

conta.corrente.lib: 
	g++ -Wall -c include/conta-corrente.cpp -o target/conta-corrente.o

cliente.lib:
	g++ -Wall -c include/cliente.cpp -o target/cliente.o

byte.banco: conta.corrente.lib cliente.lib
	g++ -Wall byte-banco.cpp target/conta-corrente.o target/cliente.o -o target/byte-banco

clean:
	rm -f target/*.o

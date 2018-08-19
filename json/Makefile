all: read.json.file

json.reader.lib: 
	g++ -Wall -c include/json-reader/json-reader.cpp -o json-reader.o

read.json.file: json.reader.lib
	g++ -Wall read-json-file.cpp json-reader.o -o read-json-file

clean:
	rm -f *.o
	rm read-json-file
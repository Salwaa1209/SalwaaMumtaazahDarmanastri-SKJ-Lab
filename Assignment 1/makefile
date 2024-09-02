all: add_numbers
add_numbers: Task1.cpp
	g++ -o add_numbers Task1.cpp
dump: add_numbers
	objdump -d add_numbers > add_numbers.asm
clean:
	rm -f add_numbers add_numbers.asm
run: add_numbers
	./add_numbers


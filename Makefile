#comments in a Makefile start with sharp
gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g
objects = lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o

all: lab3 lab3.zip

lab3.zip: *.c *.h Makefile LAB3README
	zip $@ $^

%.o: %.c *.h
	gcc -c $< -o $@ $(gcc_opt)

lab3: $(objects)
	gcc $^ -o $@ $(gcc_opt)

clean:
	rm -rf *.o lab3 lab3.zip 

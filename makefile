output: array.o func.o
	gcc -o output arr_func.c func.c 

clean:
	rm output 		 				

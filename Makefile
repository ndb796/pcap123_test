pcaptest: pcaptest.o
	gcc -o pcaptest pcaptest.o -lpcap

pcaptest.o: pcaptest.c
	gcc -c -o pcaptest.o pcaptest.c

clean:
	rm *.o pcaptest

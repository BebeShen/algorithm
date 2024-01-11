s.exe: bubblesort.o com.o
	g++ bubblesort.o com.o -o s.exe
bubblesort.o: bubblesort.cpp com.h
	g++ -c bubblesort.cpp
com.o: com.cpp com.h
	g++ -c com.cpp
clean:
	rm *.o
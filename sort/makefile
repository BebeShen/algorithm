s.exe: selectionsort.o com.o
	g++ selectionsort.o com.o -o s.exe
selectionsort.o: selectionsort.cpp com.h
	g++ -c selectionsort.cpp
i.exe: insertionsort.o com.o
	g++ insertionsort.o com.o -o i.exe
insertionsort.o: insertionsort.cpp com.h
	g++ -c insertionsort.cpp
b.exe: bubblesort.o com.o
	g++ bubblesort.o com.o -o s.exe
bubblesort.o: bubblesort.cpp com.h
	g++ -c bubblesort.cpp
com.o: com.cpp com.h
	g++ -c com.cpp


clean:
	rm *.o
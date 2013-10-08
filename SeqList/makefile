all:2-1.exe 3-10.exe
3-10.exe:3-10.cpp LinkedStack.h
	g++ -std=c++11 $^ -o $@
2-1.exe:2-1.o SSeqList.o
	g++  $^ -o $@
2-1.o:2-1.cpp
	g++  -c $^
SSeqList.o:SSeqList.cpp SeqList.cpp
	g++  -c $^
clean:
	del *.o

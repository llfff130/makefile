# 1
#hello:main.cpp factor.cpp  printhello.cpp
#	g++ -o  hello main.cpp factor.cpp  printhello.cpp


#2
#CXX=g++
#TARGET=hello
#OBJ=main.o printhello.o factor.o
#$(TARGET):$(OBJ)
#	$(CXX) -o $(TARGET) $(OBJ)
#main.o:main.cpp
#printhello.o:printhello.cpp
#	$(CXX) -c printhello.cpp
#factor.o:factor.cpp
#	$(CXX) -c factor.cpp


#3
#CXX=g++
#TARGET=hello
#OBJ=main.o printhello.o factor.o
#CXXFLAGS= -c -Wall
#$(TARGET):$(OBJ)
#	$(CXX) -o $@ $^
#%.o:%.cpp
#	$(CXX) ${CXXFLAGS} $< -o $@
#.PHONY:clean
#clean:
#	rm -f *.o $(TARGET)

#4
CXX=g++
TARGET=hello
SRC=$(wildcard *.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))
CXXFLAGS= -c -Wall
$(TARGET):$(OBJ)
	$(CXX) -o $@ $^
%.o:%.cpp
	$(CXX) ${CXXFLAGS} $< -o $@
.PHONY:clean
clean:
	rm -f *.o $(TARGET)
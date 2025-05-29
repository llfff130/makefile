# makefile #
## 代码 ##
main.cpp
```c
#include <iostream>
#include"fuctions.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "fator(5):"<<factor(5) << std::endl;
    printhello();
    return 0;
}
```
fuctions.h
```c
#ifndef FUNCTION_H_
#define FUNCTION_H_
void printhello();
int factor(int n);
#endif
```
factor.cpp
``` c
#include"fuctions.h"
int factor(int n){
    if(n==1) return 1;
    else return n*factor(n-1);
}
```
printhello.cpp
```c
#include<iostream>
#include"fuctions.h"
using namespace std;
void printhello(){
    int i;
    cout<<"Hello,world"<<endl;
}
```
![test]()  
![test]()  
## 基本语法 ##
```bash
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
```
- 规则（Rule）
    - target：生成的目标文件（如 main.o）或伪目标（如 clean）。

    - dependencies：依赖文件（如 main.c），多个依赖用空格隔开。

    - command：构建命令（必须以 Tab 开头，不能用空格）。
- 变量
```bash
CC = gcc
CFLAGS = -Wall -O2
hello: hello.c utils.c
    $(CC) $(CFLAGS) $^ -o $@
```
|变量	|含义|
|-----|------|
|$@	|当前目标名（如 hello）|
|$<	|第一个依赖（如 hello.c）|
|$^	|所有依赖（如 hello.c utils.c）|
- 伪目标（Phony Target）
**make clean**
```bash
.PHONY: clean
clean:
    rm -f *.o hello
```
- 模式规则`%`
```bash
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@
```
- 函数
    - wildcard（通配符匹配文件）
    - patsubst（模式替换）

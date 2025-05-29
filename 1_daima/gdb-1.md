# GDB #
## 作用 ##
- 可以看程序运行的时候检查里面发生了什么
- 语言
    - Ada ，Assembly(汇编) ，c ，java....
## 搭建gdb ##
- 安装
```bash
sudo apt install gdb
```
- 检查
```bash
gdv --version
```
## QuickStart ##
### 1.写代码 ###
```c
#include<stdio.h>
## 
int main(){
        int arr[4]={1,2,3,4};
        int i=0;
        for(i=0;i<4;i++){
                printf("%d\n",arr[i]);
        }
        return 0;

}
```
gcc -g ./a.out
### 2.gdb的基本命令 ###
- rum r 运行程序
- quit  离开
- list 查看源代码
- break b 打断点(`函数的地方，名字，第几行打断点`)
- info b 查看断点的情况
- next n 
- print p 打印变量
    - p arr[0]
    - p &arr[0]
- step s 进去某一个具体的函数调试

### gdb的小技巧 ###
1. shell 调我们终端的命令
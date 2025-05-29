#include"fuctions.h"
int factor(int n){
    if(n==1) return 1;
    else return n*factor(n-1);
}

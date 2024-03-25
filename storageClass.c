#include <stdio.h>
#include"temp.c"
// int myfunc(int a,int b){
//     auto int sum = a+b;
//     extern int sum;
//     return sum;
// }
int myVariable(){
    static int myVar;
    myVar++;
    printf("value is %d\n",myVar);
    return myVar;
    
}
// int sum = 345;
int main(){
    // int sum = myfunc(3,5);
    // printf(" The sum is %d",sum);
    register int myVar = myVariable();
    myVar = myVariable();
    myVar = myVariable();
    myVar = myVariable();
    myVar = myVariable();
    
    return 0;
}
#include<stdio.h>
int sum(int a, int b);
void printTable(int n);
void main(){
    int n;
    scanf("%d", &n);
    printTable(n); //arguement
    
}
int sum(int a,int b){
    return a+b;
}
   void printTable(int n){ //parameter
    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
   }
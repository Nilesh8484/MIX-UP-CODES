#include<bits\stdc++.h>
using namespace std;



void printname(int i,int n){
    // int i=1;
    if (i > n){
        return;
    }
    cout<< "Nilesh"<< endl;
    //  i++;
    printname(i+1,n);
   
}
int main(){
    int i =1;
int n  =5;
printname(i,n);
    return 0;
}

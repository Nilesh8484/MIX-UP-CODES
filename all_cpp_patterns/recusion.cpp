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

void printnumber(int n)
{
    if (n == 0)
        return;

    printnumber(n - 1);
    cout << n << " ";
}

void printrevnumber(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    printrevnumber(n-1);
}

void printnto1(int n){
    // int i = 5;
    if (n<1){
        return ;
    }   
     cout << n << endl;
    printnto1(n-1);
   
}
int main(){
    // int i =1;
int n =5;
printnto1(n);
    return 0;
}

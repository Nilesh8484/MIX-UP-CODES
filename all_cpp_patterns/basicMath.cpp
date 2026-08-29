#include<iostream>
using namespace std;

void digitcount(int n){
    while(n > 0){
        int lastdigit = n%10;
        cout << lastdigit;
        n/=10;
    }
}

void reversenumber(int n){
    int reverse=0;
    while(n > 0){
        int lastdigit = n%10;
        reverse = (reverse *10)+lastdigit;
        n/=10;
    }
    cout << reverse;
}

void palidrome(int n){
    int dup = n;
    int reverse = 0;
    while(n>0){
        int lastdig = n%10;
        reverse = (reverse*10)+lastdig;
        n/=10;
    }
    if (reverse == dup){
        cout << "true";
    }else{
        cout << "false";
    }
}

int main(){

    int n;
    cin >> n;
    palidrome(n);
}

#include<bits/stdc++.h>
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

void armstromNum(int n){
    int dup =n;
    int exp = 3;
    int sum = 0;
    while(n>0){

        int lastdig = n%10;
         sum = sum + (int)pow(n,exp);
        n/=10;
    }
    if (sum == dup){
        cout << "true";
    }else {
        cout << "false";
    }
}

void printdevisior(int n){
    vector<int> ls;
    for (int i=1; i<=sqrt(n); i++){

        if (n %i == 0){
           ls.push_back(i); 
           if (n/i != i){
            ls.push_back(n/i);
           }
        }
    }
    sort(ls.begin(),ls.end());
    for (auto it : ls) {
        cout << it << " ";
    }
        
}

void gcd(int n1,int n2){
   while(n1>0 && n2>0){
    if ( n1 > n2){
        n1 = n1 % n2;
    } else {
        n2 = n2 % n1;
    }
   }
   if ( n1==0) cout << n2;
   else n1;
}

int main(){

    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    
    gcd(n1,n2);
}

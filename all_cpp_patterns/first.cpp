#include<bits/stdc++.h>
using namespace std;

//pattern codes functions-----------------------------------------------------------------------------------------

void print1(int n){
    for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout<<"*";
    }
    cout<<endl;
 }
}
void print2(int n){
    for (int i=0; i<n; i++){
    for (int j=0; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
 }
void print3(int n){
        for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        cout<<j;
    }
    cout<<endl;
}
 }
void print4(int n){
    
for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        cout<<i;
    }
    cout<<endl;
}
 }
void print5(int n){
    
for (int i=1; i<=n; i++)  {
    for (int j=0; j<n-i+1; j++){
        cout<<"*";
    }
    cout<<endl;
}
 }
void print6(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print7(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for (int j=1; j<=(2*i)-1; j++){
            cout<<"*";
        }
         for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print7_1(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for (int j=0; j<(2*i)+1; j++){
            cout<<"*";
        }
        for (int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
   for (int i=0; i<n; i++ ){
    for (int j=0; j<i; j++){
        cout<<" ";
    }
    for (int j=0; j<(2*n-(2*i+1)); j++){
        cout<<"*";
    }
    for (int j=0; j<i; j++){
        cout<<" ";
    }
    
    cout<<endl;
   }
}
void print9(int n){
      for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for (int j=1; j<=(2*i)-1; j++){
            cout<<"*";
        }
         for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++ ){
    for (int j=0; j<i; j++){
        cout<<" ";
    }
    for (int j=0; j<(2*n-(2*i+1)); j++){
        cout<<"*";
    }
    for (int j=0; j<i; j++){
        cout<<" ";
    }
    
    cout<<endl;
   }

}
void print10(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    //     for (int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    }
}
void print11(int n){
    for (int i=1; i<=(2*n-1); i++){
        int star = i;
        if (i > n){
            star = 2*n-i;
        }
        for (int j=1; j<=star; j++){
            cout << "*";
        }
        cout << endl;   
    }
            
}
void print11_1(int n){
    for (int i=1; i<=(2*n-1); i++){
        int star = i;
        if (i > n){
            for (int j=1; j<=2*n-i; j++){
            cout << "*";
        }
        cout << endl; 
        }else {
            for (int j=1; j<=i; j++){
            cout << "*";
        }
        cout<< endl;
        }
        
          
    }
}
void print12(int n){
    int start;
    for (int i=0; i<n; i++){
        if (i % 2 == 0){
            start = 1;
        }else {
            start = 0;
        }
        for (int j=0; j<=i; j++){
            cout << start ;
            start = 1- start;
        }
        cout <<endl;
    }
}
void print13(int n){ 
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j ;
        }
         for (int j=1; j<=2*(n-i); j++){
            cout << " ";
        }
         for (int j=i; j>=1; j--){
            cout << j ;
        }
        cout << endl;
    }
}
void print13_1(int n){
    int space = 2* (n-1);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j ;
        }
         for (int j=1; j<=space; j++){
            cout << " ";
        }
         for (int j=i; j>=1; j--){
            cout << j ;
        }
        cout << endl;
        space -=2;
    }
}
void print14(int n){
    int count = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << count<< " " ;
            count++;
        }
        cout<<endl; 
        
    }
}
void print15(int n){
    int alpha = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << (char)alpha ;
            alpha;
        
        }
        cout<<endl; 
        alpha = 'A';
        
    }
}
void print15_1(int n){  
  
    for (int i=0; i<n; i++){
        for (char ch='A'; ch<='A'+ i; ch++){
            cout << ch << " ";
            
        
        }
        cout<<endl; 
       
        
    }
}
void print16(int n){
    int alpha = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<=n-i-1; j++){
            cout << (char)alpha ;
            alpha++;
        
        }
        cout<<endl; 
        alpha = 'A';
        
    }
}
void print17(int n){
    int alpha = 'A';
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << (char)alpha ;
            
        
        }
        cout<<endl; 
        alpha++;
        
    }
}
void print18(int n){
   
  
for (int i=1; i<=n; i++){

    for (int j=0; j<n-i; j++){
        cout << " ";
    }
     char alpha = 'A' ;
    int breakpoint = (2*i-1)/2;
    for (int j=0; j<2*i-1; j++){
        cout << alpha;
        if (j < breakpoint){
        alpha++;
        }else{
            alpha--;
        }
    }
     for (int j=0; j<n-i; j++){
        cout << " ";
    }
    cout<<endl;
   }
    
}
void print19(int n){
    char alpha = 'E';
    for (int i=0; i<n; i++){
        for (char ch = alpha-i; ch<=alpha; ch++){
           
          cout << ch;
        }
        
        cout << endl;
        
    }
}
void print20(int n){
    
    for (int i=0; i<n; i++){
        for (int j=0; j<=n-i-1; j++){
        cout << "*";
        }
        for (int j=0; j<2*i; j++){
         cout << " ";
        }
        for (int j=0; j<=n-i-1; j++){
            cout << "*";
        }
        cout << endl;
        }
        for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<< "*";
        }
        for (int j=1; j<=2*(n-i); j++){
            cout<< " ";
        }
         for (int j=1; j<=i; j++){
            cout<< "*";
        }
        cout << endl;
    }



}



int main(){
    
// test cases ----------------------------------------------------------------------------------------------
// for (int i=3; i<=7; i+=2){
     
        print20(5);
        // cout<<endl;
       
// }
        

return 0;
}

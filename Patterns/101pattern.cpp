<<<<<<< HEAD

#include <iostream>
using namespace std;

void patternPrint(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0 ;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start ;
        }
        cout<<endl;
    }
}

int main() {
    
    int n;
    cin>>n;
    patternPrint(n);

    return 0;
}


// 1
// 01
// 101
// 0101
// 10101
// 010101
=======

#include <iostream>
using namespace std;

void patternPrint(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0 ;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start ;
        }
        cout<<endl;
    }
}

int main() {
    
    int n;
    cin>>n;
    patternPrint(n);

    return 0;
}


// 1
// 01
// 101
// 0101
// 10101
// 010101
>>>>>>> 4dc8c7edf9d91f1b14959e33876307a1ae5ceb20

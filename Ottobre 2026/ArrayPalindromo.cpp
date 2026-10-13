#include <iostream>

using namespace std;

bool carattere_palindromo(char a[], int len){
    char b [len];
    for (int i = 0; i<len; i++){
        b[i] = a[i];
    }
    for (int i = len - 1; i>=0; i--){
        if (b[i] != a[len - i - 1]){
            return false;
        } 
    }

    return true;

}

#define len 4

int main(){
    char a [len];
    char n = 0;

    for (int i = 0; i<len; i++){
        cin>>n;
        a[i] = n;
    }

    cout<<carattere_palindromo(a, len);



    return 0;
}
#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

bool cerca_ghch(char a[], int len){
    for (int i = 0; i < len; i++){
        if ((a[i] == 'c') || (a[i] == 'g')){
            if (a[i + 1] == 'h') return true;
        }
    }
    return false;
}

#define len 40

int main(){
    char a[len];

    cin.getline(a, len);

    if (cerca_ghch(a, len)) cout<<"true";
    else cout<<"false";

    return 0;
}
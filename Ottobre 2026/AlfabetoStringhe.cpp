#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

void alphabetic_name(char a[], char b[], int len){
    int res = strcmp(a, b);

    if (res < 0){
        cout<<a;
    }
    else if (res > 0){
        cout<<b;
    }
    else{
        cout<<"a = b";
    }
}

#define len 40

int main(){
    char a[len];
    char b[len];

    cin.getline(a, len);
    cin.getline(b, len);

    alphabetic_name(a, b, len);

    return 0;
}
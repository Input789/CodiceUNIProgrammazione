#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

void print_string(char a[], char b[], int len){
    int x = 0;
    int y = 0;

    x = strlen(a);
    y = strlen(b);

    if (x > y){
        cout<<a;
    }
    else if (x < y){
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

    print_string(a, b, len);


    return 0;
}
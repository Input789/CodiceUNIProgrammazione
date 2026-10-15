#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initialize_string(char a[], int len){
    srand(time(0));
    for (int i = 0; i<len; i++){
        a[i] = 'a' + rand()%26;
        cout<<a[i]<<endl;
    }

}

#define len 40

int main(){
    char a[len];

    initialize_string(a, len);

    return 0;
}
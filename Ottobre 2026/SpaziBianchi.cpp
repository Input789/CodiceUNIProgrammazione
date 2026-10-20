#include <iostream>

using namespace std;

void zip_whitespaces(char a[],int len){
    int spazi = 0;
    int cont = 0;
    int j = 0;
    while (a[cont] != '\0'){
        spazi = 0;

        if (a[cont] == ' '){
            while (a[cont + spazi] == ' '){
                spazi++;
            }
            j = cont + 1;
            while (a[j + spazi - 1] != '\0'){
                a[j] = a[j + spazi - 1];
                j++;
            }
            a[j] = '\0';
        }

        cont ++;
    }
}

#define len 40

int main(){
    char a[len];

    cin.getline(a, len);

    zip_whitespaces(a, len);

    cout<<a;


    return 0;
}
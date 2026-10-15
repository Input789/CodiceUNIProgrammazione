#include <iostream>

using namespace std;

void count_words(char a[], int &parole){
    bool spazi = true;
    for (int i = 0; a[i] != '\0'; i++){
        if (a[i] != ' ') spazi = false;
        if ((a[i] == ' ') && ((a[i + 1] != ' ') && (a[i + 1] != '\0'))) parole ++;
    }
    if (!spazi) parole++;
}

/*
int count_words(char a[]){
    int parole = 1;
    for (int i = 0; a[i] != '\0'; i++){
        if ((a[i] == ' ') && (a[i + 1] != ' ')) parole ++;
    }
    return parole;
}*/

#define len 40

int main(){
    char a[len];
    int parole = 0;

    cin.getline(a, 40);

    count_words(a, parole);

    //parole = count_words(a);

    cout<<parole;

    return 0;
}
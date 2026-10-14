#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Selection Sort
void scambia (int &x, int &y){ //Serve per scambiare il minimo per ogni i con il valore in a[i]
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void selection_sort(int a[], int len){ //scambia per ogni a[i] il valore con il minimo dell'array
    int min = 0;
    for (int i = 0; i<len; i++){
        min = i;
        for (int j = i + 1; j<len; j++){
            if (a[min] > a[j]) min = j;
        }
        scambia(a[i], a[min]);
    }
}

//Bubble Sort
void bubble_sort(int a[], int len){ //scambia per ogni a[i] il massimo con il valore in ultima posizione switchando tutti
    for (int i = 0; i<len; i++){
        for (int j = 0; j<len; j++){
            if (a[j] > a[j + 1]) scambia (a[j], a[j + 1]);
        }
    }
}

#define len 40

int main(){

    int a[len];

    srand(time(0));

    for (int i = 0; i<len; i++){
        a[i] = rand() % 101;
        cout<<a[i]<<endl;
    }

    cout<<"Selection Sort:"<<endl;

    selection_sort(a, len);
    for(int y = 0; y<len; y++){
        cout<<a[y]<<endl;
    }

    cout<<"Bubble Sort:"<<endl;

    bubble_sort(a, len);
    for(int z = 0; z<len; z++){
        cout<<a[z]<<endl;
    }

    return 0;

}
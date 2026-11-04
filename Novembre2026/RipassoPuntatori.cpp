#include <iostream>

using namespace std;

void print(student s[], int len){
    for (int i = 0; i<len; i++){
        cout<<s[i].avg<<" "<<s[i].name<<endl;
    }
}

void swap(student s1[], student s2[]){
    
}

void oder(student s[], int len){
    bool ordered = false;
    int n = 0;
    while (!ordered){
        ordered = true;
        for (int i = 0; i<len - 1-n; i++){
            if ((s[i].avg>s[i + 1].avg) || (s[i].avg==s[i+1].avg) && (strcmp(s[i].name, s[i+1].name) > 0)){
                swap(s[i], s[i+1]);

            }
        }
        n++;
    }
}

#define len 40

struct student{
    double avg;
    char name[len];
};

int main(){


    return 0;
}
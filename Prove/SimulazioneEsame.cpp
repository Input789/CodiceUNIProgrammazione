#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int get_maxdup(int A[], int length){
	int cont1 = 0;
	int cont2 = 0;
	
	for (int i = 0; i < length; i++){
		for (int j = i; j < length; j++){
			if (A[i] == A[j]) cont1++;
		}
		if (cont1 >= cont2) cont2 = cont1;
		cont1 = 0;
	}
	return cont2;
}

int get_maxdup_ric(int A[], int length, int res){
    int cont = 1;
    if (length == 0) return 1;
    else{
        for (int i = i; i<length; i++){
            if (A[0] == A[i]) cont++;
        }
    }
    return get_maxdup_ric(A + 1, length - 1, max(cont, res));
}

int array_sum(int a[], int len, int res){
    if (len == 0) return res;
    return array_sum(a, len - 1, a[len - 1] + res);
}

int sum_array_tail(int a[], int len, int state){
    if (len <= 0) return state;
    else return sum_array_tail(a, len - 1, state + a[len - 1]);
}

int sum_array_tail_it(int a[], int len, int state){
    for (int i = 0; i < len; i++) state += a[i];
    return state;
}

int square_radiz(int n, int i){
    if ((i * i) > n) return i - 1;
    else return square_radiz(n, i + 1);

    
}

int research(int v, const int a[], int min_index, int max_index){
    if (min_index > max_index) return -1;
    else{
        int mid = (max_index + min_index)/2;
        if (a[mid] == v) return mid;
        else if (a[mid] == v) return research(v, a, min_index, mid - 1);
        else return research(v, a, mid + 1, max_index);
    }
}

struct attivita {
	char nome[50];
	int durata;
	char intensita;
	attivita* next;
}; 
typedef attivita* plist;

plist insert_attivita(plist A, char nome[], int durata, char intensita){
	plist head = A;
	plist Aold = NULL;
	if (A == NULL){
		plist tmp = new attivita;
		strcpy(tmp -> nome, nome);
		tmp -> durata = durata;
		tmp -> intensita = intensita;
		tmp -> next = NULL;
		return tmp;
	}
	while ((A != NULL) && (A -> durata <= durata)){
		Aold = A;
		A = A -> next;
	}
	plist tmp = A;
	strcpy(tmp -> nome, nome);
	tmp -> durata = durata;
	tmp -> intensita = intensita;
	if (Aold == NULL) return tmp;
	tmp -> next = Aold;

	return head;




}

plist rimuovi_attivita(plist A, char nome[]){
	string s1;
	string s2;
	plist Aold = NULL;
	plist p = A;
	//strcpy(s2, nome);
	while (p != NULL){
		//strcpy(s1, p -> nome);
		//if (//s1.strcmp(s2)){
			plist tmp = p -> next;
			delete p;
			Aold -> next = tmp;
		}
		A = A -> next;    


	}
	return A;
}

#define len 4

int main(){

    int a[len] = {1, 2, 3, 4};

    int sum1 = get_maxdup(a, len);
    int sum2 = get_maxdup_ric(a, len, 0);

    int sum3 = array_sum(a, len, 0);

    cout<<sum1<<endl;
    cout<<sum2<<endl;

    cout<<sum3<<endl;



    return 0;
}
#include <iostream>

using namespace std;

struct list {
    int val;
    list *next;
};
typedef list *plist;


void write_vertical(int n) {
    if (n <= 9)
        cout << n << endl;
    else {
        cout << n % 10 << endl;
        write_vertical(n / 10);
    }
}

int values_sum(int n){
    int sum = 0;
    if (n <= 9){
        return n;
    }
    else{
        return (n % 10) + values_sum(n / 10);
    }

}

plist create_list(int n) {
    if (n == 0)
        return NULL;

    plist head = create_list(n - 1);

    plist p = new list;
    p->val = n;
    p->next = NULL;

    if (head == NULL)
        return p;

    plist q = head;
    while (q->next != NULL)
        q = q->next;

    q->next = p;

    return head;
}


int main() {

    plist head;

    int n = 1234;

    head = create_list(5);

    write_vertical(1234);

    n = values_sum(n);

    cout<<n<<endl;

    return 0;
}
#include <iostream>
using namespace std;

struct stack{
    char inf;
    stack *next;
};

void push(stack *&h, char x){
    stack *r = new stack;
    r->inf = x;
    r->next = h;
    h = r;
}

char pop(stack *&h){
    char i = h->inf;
    stack *r = h;
    h = h->next;
    delete r;
    return i;
}

void revorse(stack *h){
    stack *head1 = NULL;
    while (h) {
        push(head1, pop(h));
    }
    h = head1;
}

void proverka(stack *h){
    bool proverka = true;
    while(h){
        char pv = pop(h);
        if (pv == '(') {
            proverka = false;
            break;
        }
        else if (pv == ')'){
            if (pop(h) != '('){ 
                proverka = false;
                break;
            }
        }
    }

    if (proverka == true) cout << "everything is very good\n";
    else cout << "the balance is broken\n";
}

int main() {
    stack *h = NULL;
    int n; char x;
    cout << "line length = "; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        push(h, x);
    }

    proverka(h);

    return 0;
}
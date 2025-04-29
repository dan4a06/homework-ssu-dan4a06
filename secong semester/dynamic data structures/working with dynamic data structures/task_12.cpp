#include <iostream>
using namespace std;

struct queue {
    int inf;
    queue *next;
};

void push(queue *&h, queue *&t, int x ) {
    queue *r = new queue;
    r->inf = x;
    r->next = NULL;
    if (!h && !t)
        h = t = r;
    else
        t->next = r;
        t = r;
}

int pop(queue *&h, queue *&t){
    int i = h->inf;
    queue *r = h; 
    h = h->next;
    if (!h) 
        t = NULL;
    delete r;
    return i;
}

void result(queue *&h, queue *&t) {
    queue *new_h = NULL, *new_t = NULL;
    int x = pop(h, t);
    push(new_h, new_t, x);
    while (h && t){
        int k = pop(h, t);
        if (k != x) push(new_h, new_t, k);
        x = k;
    }
    while (new_h && new_t)
        cout << pop(new_h, new_t) << " "; 

}

int main() {

    queue *h = NULL, *t = NULL;
    int n, x;
    cout << "line length "; cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> x;
        push(h, t, x);
    } 

    //for (int i = 0; i < n; i++)
    //   cout << pop(h, t); 

    result(h, t);


    return 0;
}
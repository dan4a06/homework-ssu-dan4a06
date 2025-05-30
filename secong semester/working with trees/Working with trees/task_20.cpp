#include <iostream>
#include <string>
using namespace std;

struct tree{
    int inf;
    tree *left;
    tree *right;
//    tree *parent;
};

tree *node(int inf){
    tree *n = new tree;
    n->inf=inf;
    n->left=n->right=NULL;
    //n->parent=NULL;
    return n;
}

void preorder(tree *tr){
    if (tr) {
    cout << tr->inf << " ";
        preorder(tr->left);
        preorder(tr->right);
    }
}

tree *find(tree *tr, int x){
    if(!tr || x == tr -> inf) return tr;
    if (x < tr->inf) return find(tr->left, x);
    else return find(tr->right, x);
}

int height(tree* tr) {
    if (!tr) return -1;
    int leftHeight = height(tr->left);
    int rightHeight = height(tr->right);
    return 1 + max(leftHeight, rightHeight);
}

//Для ДБП(дерево бинарного поиска)

void createBST(const int *arr, const int size, tree *&tr){
    for (int i = 0; i < size; i++){
        tree *n = node(arr[i]);
        if (!tr) tr = n;
        else{
            tree *y = tr;
            while(y){ 
                if (n->inf > y->inf) 
                    if (y->right)
                        y = y->right;
                    else{
                    //    n->parent = y; 
                        y->right = n;
                        break;
                    }
                else if (n->inf < y->inf)
                    if (y->left)
                        y = y->left;
                    else{
                    //    n->parent = y;
                        y->left = n;
                        break;
                        }
                    }
                }
            }
    }

    //Для ИСБ(идеально сбалансированное дерево)

    int n;
    int *arr = new int[n];

    void createPBT(tree *&tr, int n){
        if(n>0){
            tr = node(*arr);
            ++arr;
            int nl = n/2;
            int nr = n - nl - 1;
            createPBT(tr->left,nl);
            createPBT(tr->right, nr);
        }
    }

int main(){
    //7 5 9 2 6 8 10 
    int x, n;
    cout << "n = "; cin >> n;
    cout << "Введите элементы" << endl;
    for(int i = 0; i < n; i++){
        cin>>x;
        arr[i]=x;
    }


    tree *trBST = NULL;
    tree *trPBT = NULL;

    createBST(arr, n, trBST);
    createPBT(trPBT, n);
    
    
    preorder(trBST);
    cout << endl;
    preorder(trPBT);

    return 0;
}

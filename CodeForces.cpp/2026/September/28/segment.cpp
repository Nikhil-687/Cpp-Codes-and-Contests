#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; 
 
// Types
#define int long long
 
// Containers
#define vi vector<int>
#define vvi vector<vector<int>>

#define mid(a, b) a + (b-a)/2
struct Node {
    int val;
    int l = -1, r = -1;
    Node* left = NULL;
    Node* right = NULL;
    Node() {
        val = -1;
        left = right = NULL;
    }
}* head = NULL;

int gcd(int a, int b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}

Node* buildSegmentTree(vi& v, int l, int r, Node* x) {
    if (l == r){x->val = v[l];return x;}
    int mid = mid(l, r);
    Node *y = new Node(), *z = new Node();
    x->l = l;
    x->r = r;
    x->left = buildSegmentTree(v, l, mid, y);
    x->right = buildSegmentTree(v, mid+1, r, z);
    x->val = gcd(x->left->val, x->right->val);
    return x;
}

void display(Node* x) {
    if (!x) return;
    display(x->left);
    cout<<x->val<<" ";
    display(x->right);
}

int gcd(Node* x, int l, int r) {
    //                 [05]
    //          [02]          [35]
    //       [01]   [22]  [34]    [55]
    //    [00][11]      [33][44]

    int mid = mid(x->l, x->r);
    if (x->l == x->r)return x -> val;
    if (mid >= r) {
        return gcd(x->left, l, r);
    }
    else if (mid < l) {
        return gcd(x->right, l, r);
    }
    return gcd(gcd(x->left, l, mid), gcd(x->right, mid+1, r));
}

void update(Node* x, int index, int val) {
    if (!x) return;
    if (x->l == x->r) {x->val = val; return;}
    int mid = mid(x->l, x->r);
    if (index <= mid) {
        update(x->left, index, val);
    }
    else {
        update(x->right, index, val);
    }
    x->val = gcd(x->left->val, x->right->val);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    Node * x = new Node();
    buildSegmentTree(v, 0, n-1, x);

    // display(x);

    // cout << gcd(x, 1, 4) << "\n";

    vector<int> ans;
    int q;
    cin >> q;
    while (q--) {
        int o, l, r;
        cin >> o >> l >> r;
        if (o == 0) {
            ans.push_back(gcd(x, l, r));
        }
        else {
            update(x, l, r);
        }
    }

    return 0;
}
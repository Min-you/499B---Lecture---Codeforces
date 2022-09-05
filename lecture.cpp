#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    map <string, string> t;
    //make a pair with two words that are similiar to each other
    for (int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        t[a] = b;
    }
    for (int i = 0; i < n; i++){
        string x;
        //recieve the word in the lecture
        cin>>x;
        string y;
        //compare it the list of the words and see which is shorter
        y=t[x];
        if(y.size()<x.size()){
            cout<<y<<" ";
            }
        else{
            cout<<x<<" ";
            }
    }
}

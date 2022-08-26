#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>

bool cmp(pair<int, int>& a, pair<int, int>& b){
 
  if(a.ss != b.ss){
    return a.ss < b.ss;
  }else {
    return a.ff < b.ff;
  }
}

void output(vector<pair<int, int>> list, int n){
    // Output 
    cout << "Key Value pairs are\n";
    for(int i=0; i<n; i++){
        cout << list[i].first << " " << list[i].second << "\n";
    }
}

void solve(){

    // Initializing list
    vector<pair<int, int>> list;

    // Taking Input
    int n;

    // Number of elements in list = n;
    cout << "Enter the value of \n";

    cin >> n;

    // Taking input in list
    int key, value;

    cout << "Input " << n << " values of key and pairs\n";
    for(int i=0; i<n; i++){
        cin >> key >> value;

        list.push_back(make_pair(key, value));
    }

    // outputing list once
    output(list, n);

    cout << "-----------------\n";
    cout << "After Sorting \n";
    cout << "-----------------\n";

    sort(list.begin(), list.end(), cmp);
    // Answer 
    output(list, n);
}


int main(){
    
    // Exception Handling 

    try{
        solve();
    } catch(exception x) {
        cout << "Header file must not be found";
    }

    return 0;
}
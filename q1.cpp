
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

void solve(){

    // Declaring arrays
    vector<string> names;
    vector<ll> grades;

    cout << "Enter the number of name and grade pair\n";
    int n;// n - no. of name and grade pairs
    cin >> n;

    cout << "Enter " << n << " values of names and grades\n";

    // Input arrays

    string name;
    ll grade;
    for(int i=0; i<n; i++){
        cin >> name;
        cin >> grade;

        names.pb(name);
        grades.pb(grade);
    }

    // finding mean;
    ll mean, sum = 0;

    for(int i=0; i<n; i++){
        sum += grades[i];
    }

    mean = sum / n;

    cout << "Mean of grades is\n";
    cout << mean;

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

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
    cout << mean << "\n";

    cout << "Median of the grades\n";
    // Finding median

    vector<ll> temp = grades;

    sort(temp.begin(), temp.end());

    int size = temp.size();

    
    if(size % 2){
        cout << temp[size/2] << "\n";
    }else{

        int ele = size/2;
        int ele2 = ele + 1;

        cout << (temp[ele] + temp[ele2]) / 2 << "\n";
    }

    cout << "Mode of the array is\n";

    // Finding Mode

    map<ll, ll> mp1;
    ll maxVal = INT_MIN, maxNum = -1;
    for(int i=0; i<n; i++){
        mp1[grades[i]]++;

        if(mp1[grades[i]] > maxNum){
            maxVal = grades[i];
            name = names[i];
        }
    }

    cout << maxVal << " " << "Name of the person is " << name << "\n"; 

    cout << "Name of people with same mode\n";

    vector<string> sameMod;

    for(int i=0; i<n; i++){
        if(grades[i] == maxVal){
            sameMod.push_back(names[i]);
        }
    }

    for(auto name: sameMod){
        cout << name << "\n";
    }

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
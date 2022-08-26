# Question 1
 
### Approach 

Nothing special just took care of the original arrays and did operations given on their dummy
```c++
// finding mean;
ll mean, sum = 0;

for(int i=0; i<n; i++){
    sum += grades[i];
}

mean = sum / n;
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

```

# Question 2
 
### Approach 

made a vector like
```c++
vector<pair<int, int>> list;
```

then sorted it according to values then if the values are same then compaired the keys in the order of shortest first.

This is done by 
```c++
bool cmp(pair<int, int>& a, pair<int, int>& b){
 
  if(a.ss != b.ss){
    return a.ss < b.ss;
  }else {
    return a.ff < b.ff;
  }
}

sort(list.begin(), list.end(), cmp);

```
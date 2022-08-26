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
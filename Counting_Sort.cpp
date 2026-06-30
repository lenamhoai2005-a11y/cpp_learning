#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void CountingSort(vector<int>&a, int n){
    int k = INT_MIN;
    for(int i = 0; i < n; i++){
        k = max(k, a[i]);
    }
    vector <int> cnt(k+1,0);
    for(int i = 0; i<n; i++){
        ++cnt[a[i]];
    }
    for(int i = 0; i <= k; i++){
        for(int j = 0; j < cnt[i]; j++){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    CountingSort(a, n);
}
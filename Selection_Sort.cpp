#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a, int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
    int temp = a[i];
    a[i] = a[min_pos];
    a[min_pos] = temp;
    }
}
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    selectionSort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

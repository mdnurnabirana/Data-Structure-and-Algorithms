#include <bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    vector<int> vec{1, 2, 3, 9, 10, 15, 18};
    int target = 1;

    cin >> target;
    
    int index = linearSearch(vec, target);
    
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << "\n";
    } else {
        cout << "Element " << target << " not found in the array" << "\n";
    }
    
    return 0;
}
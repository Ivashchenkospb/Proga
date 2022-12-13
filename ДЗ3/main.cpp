#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> s2;
    int n, m = 2, l = 1;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        s2.push_back(x);
    }
    
    sort(s2.begin(), s2.end());
    
    for (int i = 1; i < n; i++) {
            if (s2[i-1] != s2[i]) l++;
    }
    
    vector<vector<int>> s1(m, vector<int> (l, 0));
    
    s1[0][0] = s2[0];
    s1[1][0] = 1;
    int j = 0;
    
    for (int i = 1; i < n; i++){
        if (s2[i-1] == s2[i]) {
            s1[1][j]++;
        }
        else {
            ++j;
            s1[0][j] = s2[i];
            s1[1][j] = 1;
        }
    }
    

   for (int i = 0; i < m; i++){
        for (int j = 0; j < l; j++){
            cout << s1[i][j] << " ";
        } cout << endl;
    }
    
    
    return 0;;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=1; i<=n; i++)a.push_back(i);
    do{
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << '\n';
	}while(next_permutation(a.begin(),a.end()));
}
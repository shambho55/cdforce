#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int count = 0;
	while(n--){
		string s;
		cin >> s;
		if(s == "X++" || s == "++X") count++;
		else if(s == "X--" || s == "--X") count--;
	}
	cout << count << "\n";
}
#include<iostream>
#include<vector>
#include<string>

using namespace std;

typedef pair<int, int>pii;
typedef vector<pii>vii;

int main(){
	int N;
	string name;
	vii input;
	int x, y;
	do{
		scanf("%d", &N);
		cin >> name;
		scanf("%d %d", &x, &y);
		input.push_back(make_pair(x, y));
	} while (N != 0);
	return 0;
}
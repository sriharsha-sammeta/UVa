#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
	int T;
	string ip;
	map<string, map<string, string>>store;
	store["+x"]["+y"] = "+y";
	store["+x"]["-y"] = "-y";
	store["+x"]["+z"] = "+z";
	store["+x"]["-z"] = "-z";

	store["-x"]["+y"] = "-y";
	store["-x"]["-y"] = "+y";
	store["-x"]["+z"] = "-z";
	store["-x"]["-z"] = "+z";

	store["+y"]["+y"] = "-x";//++
	store["+y"]["-y"] = "+x";//+-
	store["+y"]["+z"] = "+y";
	store["+y"]["-z"] = "+y";

	store["-y"]["+y"] = "+x";//+-
	store["-y"]["-y"] = "-x";//--
	store["-y"]["+z"] = "-y";
	store["-y"]["-z"] = "-y";

	store["+z"]["+y"] = "+z";
	store["+z"]["-y"] = "+z";
	store["+z"]["+z"] = "-x";//++
	store["+z"]["-z"] = "+x";//+-

	store["-z"]["+y"] = "-z";
	store["-z"]["-y"] = "-z";
	store["-z"]["+z"] = "+x";//+-
	store["-z"]["-z"] = "-x";//--
	

	while (scanf("%d", &T), T){
		string current = "+x";
		for (int i = 1; i < T; i++){
			cin>>ip;
			if (ip == "No"){

			}
			else{
				current = store[current][ip];
			}						
		}
		cout << current << endl;
	}
	return 0;
}
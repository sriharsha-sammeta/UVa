#include<iostream>
#include<string>

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	int noOfRequirements,noOfProposols;
	string res_proposol;
	int res_noOfRequirements;
	double res_price;
	string u_req;
	int count = 1;
	while (scanf("%d %d\n",&noOfRequirements,&noOfProposols),(noOfRequirements!=0 || noOfProposols!=0)){			
		if (count > 1)
			cout << endl;		
		for (int i = 0; i < noOfRequirements; i++){
			getline(cin, u_req);
		}	
		res_proposol = "";
		res_noOfRequirements=0;
		res_price = 0;

		string temp_proposol="";
		int temp_noOfRequirements=0;
		double temp_price=0;

		for (int i = 0; i < noOfProposols; i++){
			
			getline(cin, temp_proposol);		
			scanf("%lf %d\n", &temp_price, &temp_noOfRequirements);			
			if ((temp_noOfRequirements > res_noOfRequirements) || (temp_noOfRequirements == res_noOfRequirements && temp_price<res_price)){
				res_noOfRequirements = temp_noOfRequirements;
				res_price = temp_price;
				res_proposol = temp_proposol;
			}
			for (int j = 0; j < temp_noOfRequirements; j++){
				getline(cin, u_req);
			}
		}
		cout << "RFP #" << count << endl;
		cout << res_proposol << endl;
		count++;
	}

	return 0;
}
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main(){
	int noOfCompliants, noOfProposols;
	char useless[81];
	vector<pair<string, pair<double, int > > > proposols;
	while (scanf("%d %d", &noOfCompliants, &noOfProposols),(noOfCompliants || noOfProposols)){
		string res = "";
		int minCost = 0;
		int mincompliance = 0;

		for (int i = 0; i < noOfCompliants;i++){
			scanf("%[^\n]s", useless);
		}
		char companyName[80];
		scanf("%s", companyName);
		
		double costOfProposol, compliants;
		for (int i = 0; i < noOfProposols; i++){
			scanf("%lf %lf", &costOfProposol, &compliants);
			for (int t = 0; t < compliants; t++){
				scanf("%[^\n]s", useless);
			}
			if (compliants > mincompliance){
				mincompliance = compliants;
				minCost = costOfProposol;
				res = companyName;
			}
		}
		
	}
	return 0;
}
#include<cstdio>

int main(){
	int months,records;
	double downPayment, amountPayable;
	int monthNo;
	
	while (scanf("%d %lf %lf %d", &months, &downPayment, &amountPayable, &records), months > 0){
		int count = 0;
		double carValue = amountPayable + downPayment;
		double nextPercent, currentPercent;
		double perMonthCost = amountPayable / months;
		amountPayable += perMonthCost;
		bool stopFlag = false;
		while (records--){
			scanf("%d %lf", &monthNo, &nextPercent);
			
			if (stopFlag)
				continue;

			while (count <= monthNo || records==0){
				if (count == monthNo)
					currentPercent = nextPercent;
				amountPayable -= perMonthCost;
				carValue -= (carValue*currentPercent);
							
				if (carValue > amountPayable){
					stopFlag = true;
					break;
				}

				count++;
			}
		}
		
		printf("%d month", count);
		if (count != 1){
			printf("s");
		}
		printf("\n");
	}
	return 0;
}
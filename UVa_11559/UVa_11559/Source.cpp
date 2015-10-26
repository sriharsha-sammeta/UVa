#include<cstdio>
#include<vector>


#define MAX_COST 500001
using namespace std;

int main(){

	int noOfParticipants, budget, noOfHotels, noOfWeeks;
	while (scanf("%d %d %d %d", &noOfParticipants, &budget, &noOfHotels, &noOfWeeks) != EOF){
		int minCost = budget + 1;
		for (int currentHotel = 0; currentHotel < noOfHotels;currentHotel++)
		{
			int currentHotelCost;
			scanf("%d", &currentHotelCost);
			for (int currentWeek = 0; currentWeek < noOfWeeks; currentWeek++){
				int beds;
				scanf("%d", &beds);
				if (noOfParticipants <= beds && (currentHotelCost*noOfParticipants) < minCost ){
					minCost = currentHotelCost*noOfParticipants;
				}
			}
		}
		
		if (minCost > budget){
			printf("stay home\n");
		}
		else{
			printf("%d\n", minCost);
		}
	}
	return 0;
}
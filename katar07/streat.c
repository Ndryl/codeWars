#include <stdio.h>

int front(int yourHouse, int numberOfHouse){
	int firstHouse = 1;
	int lastHouse = numberOfHouse * 2;
	for(int i = 1; i <= numberOfHouse; i++){
		if(firstHouse == yourHouse){
			return lastHouse;
		}
		if(lastHouse == yourHouse){
			return firstHouse;
		}
		firstHouse += 2;
		lastHouse -= 2;
	}
}



int main(void){
	int teste = front(1,3);
	printf("%d\n", teste);

	return 0;
}

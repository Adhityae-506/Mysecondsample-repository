#include <iostream>
using namespace std;


int main(){
	
	int cal = 0;
	int mom_calls_up = 10;
	
	while(cal < 50){
		
		cout << "Running and burning: "<<cal << endl;
		if(cal == mom_calls_up){
			break;
		}
		cal++;
	}
	
	cout << "Workout complete: break: " << cal <<endl;
	
	return 0;
}
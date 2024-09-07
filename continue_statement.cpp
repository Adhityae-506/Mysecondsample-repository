#include <iostream>
using namespace std;

int main(){
	
	int i = 0;
	while(i<=100){
		
		if(i%7==0){
			cout << i << "Multiple of 7" <<endl;
			i++;
		}
		
		cout << i <<endl;
		i++;
	}
	
	return 0;
}
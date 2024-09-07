#include <iostream>
using namespace std;

int main(){
	
	int N;
	std::cin >> N;
	
	int i;
	for(i = 2 ; i<N ; i++){
		
		if(N%i == 0){
			break;
		}
	}
	if(i == N){
		
		cout << "prime" <<endl;
	}
	
	else{
		
		cout << "Not a prime" <<endl;
	}
	
	return 0;
	
}

#include<iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	cout << num <<' ';
	while(num!=1){
		if(num%2){
			num = num*3 + 1;
		}
		else num = num/2;
		cout << num <<' ';
	}	
	

	return 0;
}

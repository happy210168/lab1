#include<iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	if(num<1){
		cout << "please type positive integer" <<'\n';
		return 0;
	}
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

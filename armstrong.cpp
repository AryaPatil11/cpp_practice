//pallindrome
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number:";
	cin>>num;
	
	int sum =0;
	int temp = num;
	while(num>0){
		int rem = num %10;
		sum = sum + rem*rem*rem ;
		num = num /10;
	}
	if(temp == sum){
		cout<<sum<<" "<<"is pallindrome"<<endl;
	}
	else{
		cout<<"Not";
	}
	return 0;
}

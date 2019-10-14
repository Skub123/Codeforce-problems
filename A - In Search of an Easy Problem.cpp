#include<iostream>
using namespace std;
int main(){
    long long int k;
    int check=1;
    cin>>k;
    while(k--){
    	int temp;
    	cin>>temp;
    	if(temp)
    		check=0;

    }
    if(check)
        cout<<"EASY"<<endl;

    else
    	cout<<"HARD"<<endl;


	return 0;
}

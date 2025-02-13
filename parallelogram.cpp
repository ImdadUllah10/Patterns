#include<iostream>
using namespace std;
int main(){
cout<<"Perfect number b/w (0-100):"<<endl;
for(int n=1;n<=100;n++){
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<<n<<" ";
	}
}
cout<<endl;
return 0;
}
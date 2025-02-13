#include<iostream>
  using namespace std;
int main(){
	int n;
cout<<"Enter you desired numbers to achieve:";
	cin>>n;
for(int i=1;i<=n;i++){
//inner looop
for(int j=1;j<=n-i;j++){
cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
	cout<<"*";
	if(j==1||j==2*i-1){
		cout<<"*";
	}else{
		cout<<" ";
			}
		}
	cout<<endl;
}
	return 0;
}
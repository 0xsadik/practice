#include<bits/stdc++.h>
using namespace std;
int main()
{

	string x,y;
	cin>>x>>y;
	int size1 = x.size();
	int size2 = y.size();
	int size = min(size1,size2);

	int flag = 0;
	for(int i=0;i<size;i++){
		if(x[i] < y[i]){
			cout<<x<<endl;
			flag = 0;
			break;
		} else if (y[i] < x[i]){
			cout<<y<<endl;
			flag = 0;
			break;
		} else {
			flag = -1;
		}
	}
	if(flag == -1){
		if(size1 > size2){
			cout<<y<<endl;
		} else {
			cout<<x<<endl;
		}
	}
    return 0;
}
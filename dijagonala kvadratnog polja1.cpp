#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"unesi cijeli broj: ";
	cin>>n;
	int p[n][n];
	int brojac=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
		brojac++;
		p[i][j]=brojac;

	}
}
int zbroj=0;
for(int i=0;i<n;i++){
	zbroj=p[i][j]+zbroj;
}
	
	system("pause");
	return 0;
}

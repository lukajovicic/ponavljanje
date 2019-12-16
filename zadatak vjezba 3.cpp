#include <iostream>

using namespace std;

int main()
{
cout<<"[";
int p[10],brojac=4;
for(int i=0;i<9;i++){
        p[i]=brojac;
        brojac=brojac+2;
        if(i!=10){
                 cout<<p[i]<<", ";
                 }
         }
         cout<<"22";
         cout<<"]"<<endl;
       
 
 system("pause");
 return 0;   
}

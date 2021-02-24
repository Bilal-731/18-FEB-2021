#include <iostream>

using namespace std;

int main()
{

int num[4];
int i=0;
while(i<5)
{
cin>>num[i];
i++;

}
int sum[4];
sum[0]=num[0];
sum[1]=num[0]+num[1];
sum[2]=num[0]+num[1]+num[2];
sum[3]=num[0]+num[1]+num[2]+num[3];
sum[4]=num[0]+num[1]+num[2]+num[3]+num[4];
cout<<"-------------------"<<endl;
cout<<"num             sum"<<endl;
cout<<"-------------------"<<endl;
i=0;
while(i<5)
{
cout<<num[i]<<"               "<<sum[i]<<endl;
i++;

}
cout<<"-------------------" ;
}

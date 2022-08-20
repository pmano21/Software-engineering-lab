#include<bits/stdc++.h>
using namespace std;
int main(){

   

int a, b, c, d, e, f, g, h;

cout<<"\nEnter no. of "<<"input data parameters"<<" => ";
cin>>a;
cout<<"\nEnter no. of "<<"input control parameters"<<" => ";
cin>>b;
cout<<"\nEnter no. of "<<"output data parameters"<<" => ";
cin>>c;
cout<<"\nEnter no. of "<<"output control parameters"<<" => ";
cin>>d;
cout<<"\nEnter no. of "<<"global variable used as data"<<" => ";
cin>>e;
cout<<"\nEnter no. of "<<"global variable used as control"<<" => ";
cin>>f;
cout<<"\nEnter no. of "<<"fan-out"<<" => ";
cin>>g;
cout<<"\nEnter no. of "<<"fan-in"<<" => ";
cin>>h;


double x = a;
x += 2*b;
x += c;
x += 2*d;
x += e;
x += f;
x += g;
x += h;

double ans = 1.0 - 1.0/x;
cout << "\nIntensity of Coupling (C) => " << ans << endl;

}
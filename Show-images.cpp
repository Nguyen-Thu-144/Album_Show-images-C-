#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"Helu helu"<<endl;
	string line;
	getline(cin,line);
	 cout<<line<<endl;
	 ifstream file("F:\\anh.txt");
	 
	 while(!file.eof())
	 {
	 	getline(file,line);
	 	cout<<line<<endl;
		 Sleep(100); 
	  } 
 } 

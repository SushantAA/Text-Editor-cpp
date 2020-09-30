#include <bits/stdc++.h>
using namespace std;

// 0 - end text
// 1 - end line 
// 7 - back

class text
{
public:
	vector<string>v;
	bool input(){
		string str;
		while(1){
			// navigate == up down left right
			// deletion
			string s;
			getline(cin,s);
			if(str.length()!=0)		str+=" ";
			str += s;
			if(s[s.length()-1]=='1'){
				str[str.length()-1]=' ';
				break;}
			if(s[s.length()-1]=='2'){
				str[str.length()-1]=' ';	
				v.push_back(str);
				return false;}
		}
		v.push_back(str);		
		return true;
	}
	bool print(){
		// cout<<"------------------------------------\n";
		system("cls");
		int n;	n = v.size();
		for (int i = 0; i < n; ++i)
		{
			cout<<v[i]<<endl;
		}
		return true;
	}
	void fill(){
		bool a=true,b=true;
		while(a and b){
			a = input();
			b = print();
		}
	}
	
};

class file_name
{
public:
	text t;
	string name;
	
	// void file_name_fill(string name){
	// 	this->name = name ;
	// 	t.fill();
	// }	

};

class files
{
public:
	file_name arr[100];
	int size =0;
	void add(){
		cout<<"file name : ";	cin>>arr[size].name;
		arr[size].t.fill();
		size++;
	}
	void display(){
		for(int i=0;i<size;i++){
			cout<<i+1<<". "<<arr[i].name<<endl;
		}
	}
};

int main()
{
	files f;
	f.display();
	f.add();

	
	return 0;
}
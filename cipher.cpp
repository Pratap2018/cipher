#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s;
	char a;
	int set,c=0;
	cin>>s;
	int num;
	cin>>num;
	for(int i=0;i<s.size();i++){

 		if((s[i]>=65&&s[i]<=90) ||(s[i]>=48&&s[i]<=57)||(s[i]>=97&&s[i]<=122)){


 			//cout<<a;
 			if(s[i]>=65&&s[i]<=90){
 				a=(int)s[i]+num%26;
				 if(a>90){
 				set=((int)a-91);
				 a=65+set;
			 }
			 }
		 	if(s[i]>=48&&s[i]<=57){
		 		a=(int)s[i]+num%10;
			 if(a>57){
 				set=((int)a-58);
				 a=48+set;
			 }
		}
		if(s[i]>=97&&s[i]<=122){
		c=(int)s[i];
		a=(int)s[i]+num%26;

		 if(a>122){
                //cout<<"jhgfjhg";
                set=((int)a-123);
 				a=97+set;

			 }
			 if(a<=-1&&a>=-128){
                   c=c+num%26;
                   c=c-123;
                   a=97+c;
			 }



		}

		 s[i]=(char)a;
		 }
	}
cout<<s;
}

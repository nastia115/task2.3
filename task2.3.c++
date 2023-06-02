Задача 21
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
int x,y;
	cout<<"x:";
	cin>>x;
	cout<<"y:";
	cin>>y;
	if (x==0 && y==0){
		cout<<"0"<<endl;
	}
	else if (x==0 && y!=0){
		cout<<"1"<<endl;
	}
	else if (x!=0 && y==0){
		cout<<"2"<<endl;
	}
	else{
		cout<<"3"<<endl;
	}																											                                        
}
_____________________________________________________________
Задача 22
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
int x,y;
	cout<<"Input x: ";
	cin>>x;
	cout<<"Input y:";
	cin>>y;
	if (x>0 && y>0){
		cout<<"first quarter";
	}	
	else if (x<0 && y>0){
		cout<<"second quarter";
	}	
	else if (x<0 && y<0){
		cout<<"third quarter";
	}
	else if (x>0 && y<0){
		cout<<"fourth quarter";
	}
}
_________________________________________________________----
Задача 30
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	int a;
	1<a<999;
	cout<<"a:";
	cin>>a;
	if (a<100 && a%2==0) {
		cout<<"ever number of two is significant"<<endl;
	}  
	else if (99<a<999 && a%2==0){
		cout<<"ever number of three is significant";
	} 
	else if (a<100 && a%2!=0){
		cout<<"odd number of two is significant ";
	}                           
	else if (99<a<999 && a%2!=0){
		cout<<"odd number of three is significant";
	}																											                                        
}

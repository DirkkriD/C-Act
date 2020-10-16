#include <iostream>
using namespace std;

      int main(){
      	  
      	  int a, b, c;
      	  
      	  cout<<"Enter three numbers: \n";
      	  cin>>a>>b>>c;
      	  
      	  if(a>b && a>c){
      	  	cout<<"\nThe Largest number is " <<a;
			
			} else if (b>a && b>c){
				cout<<"\nThe Largest number is " << b;
			
			} else{
				cout<<"\nThe Largest number is " << c;
			}
      	
      	cout<<"\n\n\n\n:Programmed by Dirk Vashel Faelmoca:";
      	return 0;
	  }

#include<iostream>

using namespace std;

class Arithmetic{
	
	public:
		
		int x = 100 ;
		int y = 50 ;
		
		
	
};

class Operation : public Arithmetic{
	
	public:
		
		void calculate (int a , int b){
			
			cout<<x-y<<endl;
			
		}
		
		void calculate (int a , int b , int c){
			
			cout<<x/y<<endl;
			
		}
		
		void calculate (int a , int b , int c , int d){
			
			cout<<x*y<<endl;
			
		}
		
		void calculate (int a , int b , int c , int d , int e){
			
			cout<<x+y<<endl;
			
		}	
	
	
};


int main (){
	
	Operation obj;
	
	obj.calculate(1,2);
	obj.calculate(1,2,3);
	obj.calculate(1,2,3,4);
	obj.calculate(1,2,3,4,5);
	
	return 0 ;
}

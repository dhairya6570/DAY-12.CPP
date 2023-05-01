#include<iostream>

using namespace std;

class Cricket{
	
	public:
		
		void Match(){
			
			cout<<"how much over Cricket Matches have in  T20Match & TestMatch"<<endl;
			
		}
		
	
};

class T20Match : public Cricket{
	
	public:
		
		void getTotalOvers(){
			
			cout<<"in T20Match total over is 40 and each team play 20 overs"<<endl;
			
		}
	
	
};

class TestMatch : public Cricket{
	
	public:
		
		void getTotalOvers(){
			
			cout<<"in TestMatch total over is 90 in one day"<<endl;
			
		}
	
};



int main (){
	
	T20Match obj;
	TestMatch obj1;
	
	obj.Match();
	obj.getTotalOvers();
	
	obj1.Match();
	obj1.getTotalOvers();
	
	
	
	return 0 ;
}

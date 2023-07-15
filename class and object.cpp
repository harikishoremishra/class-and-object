#include<iostream>
using namespace std;

//we achieve using something called class:
//A class can be user defined datatype which can be customized however we want
class student
{
	public:
		
		string name;
		int mids;
		float ends;
		bool pre_abs;
		
		//i aslo want to find the makrs of the students
		
		void display_calculate_marks()
		{
			float total_marks;
			total_marks=mids*0.5+ends*0.75;
			cout<<"the marks of"<<name<<"is"<<total_marks;
		}
};

class vehicle
{
	public:
		string car_name;
		string tyres_name;
		int number_of_tyres;
		int number_of_seats;
};
int main()
{
    //student a,b,c; //here a,b,c are type of student
   // int d,e,f; //here d,e,f are type student
    
   // vehicle hyundai, suzuki,ferrari
    
    //a,b,c over here are objects of the particular class
    student a;
    
    a.name="hari";
    a.mids=50;
    a.ends=99.5;
    a.pre_abs=1;
    
    a.display_calculate_marks();    
    vehicle b;
    
    b.car_name="verna";
    b.number_of_seats=2;
    b.number_of_tyres=4;
    b.tyres_name="michellen";
    
	
}

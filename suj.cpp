/*
Lab cycle 9: Overriding functions: Design a class called Ship with member variables name and year with appropriate constructors, accessors and mutators.
Illustrate virtual print function that displays the ship’s name and the year it was built.
Design a CruiseShip class that is derived from the Ship class. The CruiseShip class has the member variable that holds maximum number of passengers and appropriate accessors, mutators and constructor. Create an overriding print function. The CruiseShip class’s print function should display only the ship’s name and the maximum number of passengers.
Design a CargoShip class that is derived from the Ship class. The CargoShip class should have the following members: a member variable for the cargo capacity, constructor, accessors and mutators. Define a print function that overrides the print function in the base class. The CargoShip class’s print function should display only the ship’s name and the ship’s cargo capacity. Demonstrate the classes in a program that has an array of Ship pointers. The array elements should be initialized with the addresses of dynamically allocated Ship. The program should then step through the array, calling each object’s print function.

*/

#include<iostream>
#include<string>
using namespace std;

class ship{
	string name;
	int date;
    public:
        static int count;
    	ship(){
    		count++;
    		cout<<"number of ship created"<<count;
    	}
    	void putname(string s){
    		name=s;
    	}
    	void putdate(int d){
    		date=d;
    	}
    	string getname(){
    		return name;
    	}
    	int getdate(){
    		return date;
    	}
    	virtual void display(){
    		cout<<endl<<"enter the ship name"<<name;
    		cout<<endl<<"date of manufactured"<<date;
    		cout<<endl;}
	
};
int ship::count=0;
class cruiseShip:public ship{
	int max;
    public:
    	static int count1;
    	cruiseShip(){
    		count1++;
    		cout<<"number of cruiseship created"<<count1;
    	}
    	void putmax(int d){
    		max=d;
    	}
    	int getmax(){
    		return max;
    	}
        void display(){
    		cout<<endl<<"max n of passengers"<<max;
    		cout<<endl;}
};
int cruiseShip::count1=0;

int main(){
 	ship titanic;
 	ship *ptr=&titanic;
 	string a;
 	int b;
 	cout<<endl<<"enter the ship name";
 	cin>>a;
    	cout<<endl<<"date of manufactured";
    	cin>>b;
 	ptr->putname(a);
 	ptr->putdate(b);
 	string c;
 	int d;
 	c=ptr->getname();
 	cout<<c;
 	d=ptr->getdate();
 	cout<<d;
 	ptr->display();
 	
 	
 	cruiseShip vikram;
 	ptr=&vikram;
 	int f;
 	cout<<endl<<"enter the ship maximum nuber of passengers";
 	cin>>f;
 	vikram.putmax(a);
 	cout<<vikram.getmax();
 	ptr->display;
 	
 
 }

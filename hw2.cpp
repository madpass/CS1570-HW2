// Programmer: Madison Passolano       date: 02/04/2020     
// File: hw2.cpp                       class: cs1570
// Purpose: To compute the length of the pitchfork handle that willie needs to use to 
//          pick up the possums 


#include <iostream>
using namespace std; 

int main(){
/*------------------Declare Variables------------------------------*/ 
	float weight;                 //weight of possum
	float barometric_pressure;	  //barometric pressure 
	float length_tail;            //length of tail 
	float result;                 //result of the given equation and 
	                              //   length of the handle 
	
	short stink_factor;           //the stink factor of possum
	short fork_num;               //which number fork to use
	const short IDIOTS = 8;       //the constant set by IDIOTS

/*-------------------Welcome--------------------------------------*/ 
	cout<<endl;
	cout<<"Hey Willie, welcome to the Pitchfork Length Calculator."<<endl; 
	
/*-------------------Input Variables-------------------------------*/ 
	cout<<"Please provide the following inputs: "<<endl; 

	cout<<"      The stink factor is: "; 
	cin>>stink_factor;

	cout<<"      The barometric pressure is: "; 
	cin>>barometric_pressure;  

	cout<<"      The length of the 'possum's tail is: "; 
	cin>>length_tail; 

	cout<<"      The weight of the 'possum is: "; 
	cin>>weight; 


/*--------------------------Formula---------------------------------------*/
	result = ((static_cast<float>(stink_factor)/IDIOTS) * ((3*length_tail) + weight)) + (30 * (stink_factor/barometric_pressure)); 
	//        short        short          float         float                  short       float 

	//which fork to use 
	if((result<0) && (result<9.999999))
		//use fork 0
		fork_num = 0; 

	if((result>10) && (result<19.999999))
		//use fork 1
		fork_num = 1;

	if((result>20) && (result<29.999999))
		//use fork 2
		fork_num = 2; 

	if((result>30) && (result<39.999999))
		//fork 3
		fork_num = 3; 

	if((result>40) && (result<49.999999))
		//fork 4
		fork_num = 4; 

	if((result>50) && (result<59.999999))
		//fork 5
		fork_num = 5; 

	if((result>60) && (result<69.999999))
		//fork 6
		fork_num = 6; 

	if((result>70) && (result<79.999999))
		//fork 7
		fork_num = 7; 

	if((result>80) && (result<89.999999))
		//fork 8
		fork_num = 8; 

	if((result>90) && (result<99.999999))
		//fork 9
		fork_num = 9; 

	if((result>100) && (result<109.999999))
		//fork 10
		fork_num = 10; 

	if((result>110) && (result<119.999999))
		//fork 11
		fork_num = 11; 

	if((result>120) && (result<129.999999))
		//fork 12
		fork_num = 12; 

/*------------------Output----------------------------*/ 
	cout<<endl; 
	cout<<"Calculating pitchfork length...."<<endl; 
	cout<<endl; 
	cout<<"For the following inputs: "<<endl; 
	cout<<"      Stink Factor:           "<<stink_factor<<endl; 
	cout<<"      Barometric Pressure:    "<<barometric_pressure<<endl; 
	cout<<"      Tail Length:            "<<length_tail<<endl;
	cout<<"      Weight:                 "<<weight<<endl; 
	cout<<endl; 
	cout<<"      Handle Length is:       "<<result<<" and "<<endl; 
	cout<<"      Fork Number is:         "<<fork_num<<endl; 
	cout<<endl; 
	cout<<"Good luck with those stinky 'possums, Willie."<<endl<<endl;

	return 0; 
} 
/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course theacher: Mr. Farshid Shirafkan                  ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 25/12/2020                                        ***/
/****************************************************************/


// Course title: pointer to pointer

#include <iostream>
using namespace std;


int main()
{
	cout << "number of students = " <<end;
	cin >> nStudent;
	for(int i=0; i < nStudent; i++){
		cout << "number of exam for student = " <<end;
		cin >> exam;
		avrage(exam);
		}
  return 0;
}


float avrage(int n){
	float nomre;
	float sum=0;
	for(int i=0;i<n;i++)
		cout<< "nomre = "<<end;
		cin>>nomre;
		sum += nomre;
	return sum/n;
}

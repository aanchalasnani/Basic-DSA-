#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


class student_info {
	
	private : 
	
	string name;
	string f_name;
	string college_name;
	float sub1 , sub2 , sub3 , sub4 , sub5;
	public : 
	
	void getdata() {
		
		cout<<"\nEnter student name : ";
		cin>>name;
		fflush(stdin);
		cout<<"\nEnter student's father name : ";
		cin>>f_name;
		fflush(stdin);
		cout<<"\nEnter student's College name :";
		cin>>college_name;
		fflush(stdin);
		cout<<"\nEnter marks of sub1  : ";
	    cin>>sub1;
	    fflush(stdin);
	    cout<<"\nEnter marks of sub2  : ";
	    cin>>sub2;
	    fflush(stdin);
	    cout<<"\nEnter marks of sub3  : ";
	    cin>>sub3;
	    fflush(stdin);
	    cout<<"\nEnter marks of sub4  : ";
	    cin>>sub4;
	    fflush(stdin);
	    cout<<"\nEnter marks of sub5  : ";
	    cin>>sub5;
	    fflush(stdin);
		
		
	}
	
	void grade() {
		
		
		float avg = percentage();
		if(avg>80)
        {
                cout<<"grade : [ A ]\n";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"grade : [ B ]\n";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"grade : [ C ]\n";
        }
        else
        {
                cout<<"grade : [ D ]\n";
        }
		
	}
	
	float percentage() {
		float max = 5;
		
		int perc = (sub1 + sub2 + sub3 + sub4 + sub5)/ max;
		cout<<"\nPercentage : \n"<<perc;
		return perc;
	}
};


int main () {
	
	student_info obj;
	obj.getdata();
	int sub1 , sub2 , sub3 , sub4 , sub5;

	
	obj.percentage();
	obj.grade();
	
	
	
}



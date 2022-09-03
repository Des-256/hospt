#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class patient{
private:
	string name;
	int age;
	string sex;
    int weight;	
	string kin;
	int num;
public:
	void doctor();
	void visit();
	void dispensary();
};
void patient::doctor(){
	cout<<"ENTER YOUR NAME"<<endl;
	cin.ignore();
	getline(cin,name);
	 cout<<"ENTER YOUR AGE\n";
   cin>>age;
     cout<<"ENTER YOUR SEX\n";
	     cin>>sex;
   cout<<"ENTER YOUR WEIGHT\n";
    cin>>weight;
    cout<<"ENTER YOUR NEXT OF KIN\n";
    cin.ignore();
    getline(cin,kin);
    cout<<"ENTER YOUR Tel.NUMBER\n";
    cin>>num;
    char illness[100];
    cout<<"PLEASE STATE YOUR ILLNESS\n";
 cin>>illness;
     int t;
     cout<<"HOW LONG HAVE YOU BEEN FEELING ILL\n";
    cin>>t;
    	cout<<"PLEASE CONFIRM YOUR DETAILS\n";
		cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Weight: "<<weight<<endl;
			cout<<"Sex: "<<sex<<endl;
		cout<<"Next of Kin: "<<kin<<endl;
			cout<<"Mobile Number:+256"<<num<<endl;
			cout<<"Ilness:"<<illness<<endl;
			cout<<"IF DETAILS ARE CORRECT PLEASE PROCEED TO PRINT THE FORM\n";
			cout<<"......................WISH YOU A QUICK RECOVERY.................";}
     
void patient::dispensary(){
	string drugs;
     	cout<<"DESTINY HOSPITAL OPD DISPENSARY\n";
     	 	cout<<"TO BUY DRUGS\n"<<"TO PAY HOSPITAL BILL\n"<<"PLEASE ENTER DRUGS RECOMMEDEND BY THE DOCTOR FOR BILLING\n";
     	cin>>drugs;
     	 	cout<<"PLEASE HEAD OVER TO THE DISPENSARY IN THE EASTERN WING THE BILL HAS BEEN MADE\n";
	   	int amount;
	   	cout<<"PLEASE ENTER AMOUNT TO PAY\n";
	   	cin.ignore();
	   	cin>>amount;
	   	cout<<"THANK YOU! ALL PAYMENTS ARE TO BE MADE IN ROOM 2"<<endl;
		   cout<<"..................................................";}	
     void patient::visit(){
     		string num2;
	   		int room;
	   		cout<<"PLEASE ADHERE TO THE VISITING HOURS AS SHOWN ON THE NOTICE BOARD\n";
	   		cout<<"PLEASE ENTER PATIENTS NAME\n";
	   		cin.ignore();
	   		getline(cin,num2);
	   		cout<<"ENTER PATIENTS ROOM NUMBER\n";
	   		cin>>room;
	   		cout<<"PROCEED TO NURSE DESK TO GET VISITORS CARD\n";
	   		cout<<"PRINT THE FORM AND PRESENT IT TO THE COUNTER\n";
	   		cout<<"...................................................";
     }
     
int main(){
	int q;
	patient p1;
	cout<<"Hello!"<<"WELCOME TO DESTINY HOSPITAL"<<endl<<endl;
	cout<<"Please follow the prompt below to be easily helped\n"<<">>>>>>>>>>>>...........>>>>>>\n\n";
	cout<<"Press 1:To see the Doctor\n"<<"Press 2:To dispensary\n"<<"Press 3: To see a patient\n";
	cin>>q;
	switch(q){
		case 1:
			cout<<"1:To see the Doctor\n";
			p1.doctor();
			break;
		case 2:
		cout<<"2:To dispensary\n";
		p1.dispensary();
		break;
		case 3:
		cout<<"3: To see a patient";
		p1.visit();
		break;
		default:
			cout<<"You didnot enter any option. Please ask for assistance or try again.THANK YOU!";	}
			return 0;
}

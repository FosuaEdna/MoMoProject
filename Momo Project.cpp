#include <iostream>
using namespace std;

int main() {
	int option,proof,testing ,pin,fresh,phone,amount,select;
	cout<< "select an option"<<endl;
	cout<<"1. Authentication"<<endl;
	cout<<"2. Resetting or change pin"<<endl;
	cout<<"3. checking balance"<<endl;
	cout<<"4. sending money"<<endl;
	cin>>option;
	if(option==1){
		cout<<"press 1 to verify if you are a human"<<endl;
		cin>>proof;
	
	if(proof==1)
		cout<<"your accout is authenticated"<<endl;

	else if(proof!=1)
	
		cout<<"invalid verify agian"<<endl;
	}
	else if(option==2){
		cout<<"are yousure to change your pin"<<endl;
		cout<<"press 1 if yes"<<endl;
		cout<<"press 2 if NO"<<endl;
		cin>> testing;
		if (testing==1)
		cout<<"your pin has reset successfully"<<endl;

  
  else if(testing==2)

cout<<"your process has been cancelled"<<endl;
if (testing==1)
cout<<"type new pin"<<endl;
cin >>fresh ;
}


	else if((testing!=1)||(testing!=2)){
	
	
		cout<<"invalid selection"<<endl;
	}
		else if(option==3){
		
			cout<<"enter your mobile money pin"<<endl;
		cin>>pin;
		if (pin==0000)
		cout<<"your balance is GH1000"<<endl;
}

	 if(pin!=0000){
	 
	 
	
			cout<<"invalid pin"<<endl;
			cout<<"enter your mobile money pin"<<endl;
			cin>>pin;
			if(pin!=0000)
				cout<<"invalid pin"<<endl;
				cout<<"enter your mobile money pin"<<endl;
					cin>>pin;
					cout <<"process exit"<<endl;
		}
		else if(option==4){
			cout <<"Enter reciver's phone number"<<endl;
			cin>>phone ;
			cout <<"Re-enter phone number"<<endl;
			cin>>phone ;
			cout <<"Enter amount"<<endl;
			cin >>amount ;
			cout <<"Are you sure you want to send"<<amount<<"to"<<phone<<endl;
			cout<<"select 1 if Yes"<<endl;
			cout<<"select 2 if No"<<endl;
			cin>>select ;
}
 if(select==1){
	
			cout<<"You have made "<<amount<<"to "<<phone<<endl;
		 if(select==2)
			cout <<"Transaction is cancelled"<<endl;
		}
	return 0;
}


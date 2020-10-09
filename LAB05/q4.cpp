#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int saldo = 500, choice, n_deposit,n_withdraw ;
	char status;
	//showing the atm main menu
	menu :
	cout<<endl;
	cout << "welcom to the ATM" <<endl;
	cout << "what would you like to do?" <<endl;
	cout << "1. Check balance" <<endl;
	cout << "2. Deposit" <<endl;
	cout << "3. Withdraw" <<endl;
	cout << "4. cabut" <<endl;
	cout << "====== move the crusor up and down ======" <<endl;
	cin>>choice;
	system("cls");
	
  // switch statement for atm begins, balance checking
	switch ( choice ){
		case 1 :
			do{
			cout <<"I hope you are okay, but here's your balance = "<<saldo<<endl;
			cout << " Y : check your balance again" << endl;
      cout << "N : Back to main menu" << endl;
			cin>>status;} while ( status == 'Y' || status == 'y');
			system("cls");
			goto menu;
		
		break;

		//depositing
		case 2 :
			do{
				cout<<"how much money would you put in?" << endl;
				cin>>n_deposit;
				
				saldo = saldo + n_deposit;
				
				cout<<"your balance is : "<<saldo<<endl;
				cout<<"Would you like to do more transaction? :"<<endl; 
				cout<<"( Y = yes / N = no ) : ";
				cin>>status; } while ( status == 'Y' || status == 'y');
				system("cls");
				goto menu;
		
    //withdraw
		case 3 :
			do{
				cout<<"your ballance currently: "<<saldo<<endl;
				cout<<"how much money would you take : ";
				cin>>n_withdraw;
				
				saldo = saldo - n_withdraw;
				
				cout<<"would you like to do more transaction ? "<<endl;
				cout<<"( Y = yes / N = no ) : ";
				cin>>status; system; } while ( status == 'Y' || status == 'y');
				system("cls");
				goto menu;
	
				
		case 4 :
			cout<<"Thanks for using our ATM"<<endl;
			system("cls");
			return 0;
		
	}
}

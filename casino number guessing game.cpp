#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
void rules();
int main(){
	string Player_Name;
	int Balance;
	int Betting_Amount;
	int Guess;
	int Dice;
	char Choice;
	srand(time(0));
	cout<<"\n\t\t\t==========WELCOME TO CASINO WORLD==========\n\n";
	cout<<"\n\nEnter Your Name :";
	getline(cin,Player_Name);
	cout<<"\n\nEnter the starting balance to play the game   : $ ";
	cin>>Balance;
	do{
		system("cls");
		rules();
		cout<<"\n\nYour current balance is $ "<<Balance<<"\n";
		do{
			cout<<"Hey, "<<Player_Name<<", enter the amount to bet : $";
			cin>>Betting_Amount;
			if(Betting_Amount>Balance)
			    cout<<"Betting balance can't be more than current balance!!\n"<<"\nPlease, Re-enter the balance\n";
		}
		while(Betting_Amount>Balance);
		do{
			cout<<"Guess any number between 1 to 10 : ";
			cin>>Guess;
			if(Guess<=0||Guess>10)
			    cout<<"\nNumber should be between 1 to 10\n"<<"Re-enter number :\n";
			    
		}
		while(Guess<=0||Guess>10);
		Dice=rand()%10+1;
		if(Dice==Guess){
			cout<<"\n\n!!Hurrah!! Congratulations!! You have won $"<<Betting_Amount*10;
			Balance=Balance+Betting_Amount*10;
		}
		else{
			cout<<"Oops!!, better luck next time !! You lost $"<<Betting_Amount<<"\n";
			Balance=Balance-Betting_Amount;
		}
		cout<<"\nThe winning number was : "<<Dice<<"\n";
		cout<<"\n"<<Player_Name<<",You have balance of $ "<<Balance<<"\n";
		if(Balance==0){
			cout<<" \nYou have no money to play , please add balance to continue the game";
			break;
		}
		cout<<"\n\n-->Do you want to play again (y/n)?";
		cin>>Choice;
   }while(Choice=='Y'||Choice=='y');
   cout<<"\n\n\n";
   cout<<"\n\nThanks for playing the game, your ending balance is $ "<<Balance<<"\n\n";
   return 0;
}
void rules(){
	system("cls");
	cout<<"\n\n\t\t\t\t**********CASINO NUMBER GUESSING RULES**********\n\n";
	cout<<"\t1. Choose a number between 1 to 10\n";
	cout<<"\t2. Winner gets 10 times of the money bet\n";
	cout<<"\t3. Wrong bet, results in loosing the amount you bet\n";
	
}

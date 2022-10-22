#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int score=5;

int play_again()
{
    char answer;
    cout<<"-------------------------------------"<<endl;
    cout<<"Do you want to play again? (y/n):"<<endl;
    cout<<"-------------------------------------"<<endl;
    cin>>answer;
    switch (answer){
	    case 'y':
		{
	        cout<<"Great! Let's play again!"<<endl<<endl;
	        return 1;
	    }
	    case 'n':
		{
	        cout <<"Thanks for playing! Press any key to close."<<endl;
	        cin.get();
	        return 0;
	    }
	    default:
		{
	        cout<<"Invalid input! Please try again."<<endl;
	        play_again();
	    }
    }
}

int guess(int lucky_no){
	int gs;
	cout<<"Guess the lucky number:";
	cin>>gs;
	
	if(gs>10 && gs<1){
		cout<<"INVALID - Please enter a number between 1-10 only"<<endl;
		guess(lucky_no);
	}
	else{
		cout<<"So! Your guess is:"<<gs<<endl;
		cout<<endl;
		
		if(gs==lucky_no){
			cout<<"YOU'RE LUCKY ! YOU GUESSED IT RIGHT! "<<endl<<endl;
			cout<<"Your score on lucky number is:"<<score<<endl<<endl;
			
			int answer=play_again();
			return answer;
		}
		else{
			cout<<"YOU ARE UNLUCKY! YOU GUESSED IT WRONG!"<<endl;
			cout<<"TRY AGAIN!"<<endl;
			cout<<endl;
			score=score-1;
			cout<<"Chances left:"<<score<<endl;
			
			if(score<=0){
				cout<<"YOU LOST !!"<<endl;
				
				int answer=play_again();
				return answer;
			}
			else{
				guess(lucky_no);
			}
		}
	}
}

int main()
{
	srand(time(0));
	int lucky_no=rand()%10+1;
	cout<<lucky_no<<endl;
	cout<<"--------------------"<<endl;
	cout<<"WELCOME TO THE GAME"<<endl;
	cout<<"--------------------"<<endl;
	cout<<endl;
	cout<<"You have 5 chances to guess the lucky number!"<<endl;
	cout<<"Number will be between 1 and 10"<<endl;
	cout<<"Good Luck!"<<endl;
	cout<<endl;
	cout<<"--------------------------------------------"<<endl;
	int u_choice = guess(lucky_no);

    if (u_choice==1)
    {
        main();
    }
    else
    {
        cin.get();
        return 0;
    }
	return 0;
}


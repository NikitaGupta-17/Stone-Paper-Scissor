// #include<bits/stdc++.h> important files are added to this 
#include<iostream>
#include<stdlib.h>  //has rand(random) function
#include<time.h>
#include<conio.h>
using namespace std;

int main()
{
	int playerChoice=0,computerChoice=0;
	int playerscore=0,computerscore=0;
	string choice[3]={"Rock","Paper","Scissor"};
	do{
		cout<<"\n0:Rock 1:Paper 2:Scissor";
	    cout<<"\nMake A Choice :";
	    cin>>playerChoice;
    }while(playerChoice>2 || playerChoice<0);
    
    srand(time(0)); //seed random
    computerChoice = rand() % 3;
    
    if(playerChoice == computerChoice);
    else if(playerChoice == 0 && computerChoice == 2)
      playerscore++;
    else if(computerChoice==0 && playerChoice==2)
      computerscore++;
    else if(playerChoice>computerChoice)
      playerscore++;
    else
     computerscore++;
     
     cout<<"\nPlayer vs Computer\n";
     cout<<choice[playerChoice]<<" vs "<<choice[computerChoice];
    
	if(playerscore == computerscore)
	  cout<<"\n\n~~~~~Tie~~~~";
	else if(playerscore > computerscore)
	  cout<<"\n\n~~~~~Player Wins~~~~";
	else
	  cout<<"\n\n~~~~~Computer Wins~~~~";
	  
    getch();
	return 0;
}

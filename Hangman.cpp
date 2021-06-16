#include<iostream>
using namespace std;
string fixingcharacter(int i)
{
	string s[10]={"INDIA","TAMILNADU","WELCOME","COIMBATORE","NAMAKKAL","CHEIF","MINISTER","COLLEGE","LIFESTYLE","TREND"};
	return s[i];
}
void fixinghidden(string s)
{
	int n=s.size();
	cout<<"The word with hidden characters----->:"<<endl<<endl;
	cout<<"  ";
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n-1||i==n/2)
		{
			cout<<"_";
		}
		else
		{
			cout<<s[i];
		}
	}
	cout<<endl<<endl;
}
int guessinghidden(string s)
{
	int n=s.size();
	int count=0,flag=1;
	cout<<"It's time to start your guess:) --- before that all that please ensure all the character you have enter should be in uppercase:"<<endl;
	for(int i=0;i<n;i++)
	{
		x:
		if(count>=3)
		{
			flag=0;
			cout<<endl<<"Sorry!! you have reached the maximum attempt to find that character, sorry you lost that point(:"<<endl<<endl;
			break;
		}
		if(i==0||i==n-1||i==n/2 && count<3)
		{
		cout<<"It's you "<<i+1<<" element ";
		char k;
		cin>>k;
		if(s[i]==k)
		{
			cout<<"Wow!! your guess is right, we can move to the next character."<<endl;
		}
		else
		{
			cout<<"Ohoo!! you guess is slightly wrong choose another character:"<<endl;
			count++;
			goto x;
		}
		}
	}
	cout<<endl<<"Move to the next word:)"<<endl;
	return flag;
}
int main()
{
	cout<<"Welcome to the game:)";
	cout<<"\n"<<"\n";
	cout<<"This game is word related game, we have provided you a set of word and in that word you will give some hidden character, you have to find the character if you find the character correctly,"<<endl<<"find all the hidden character in that particular word if all are true, you will get one point for that word ,  if you choose wrong character you will get chance of 3 and with that chance you have to find that character if you cann't find that within 3 you will loose one point for that....";
	cout<<endl<<endl<<endl;
	cout<<"Are you ready for this word puzzle game:)";
	cout<<"\n"<<"\n";
	cout<<"Let's start the game :)";
	cout<<endl<<endl;
	cout<<"All the best:)"<<endl<<endl;
	int n;
	cout<<"Enter how many words you want to find   [Maximum limit----10]:";
	cin>>n;
	int res=0;
	for(int i=0;i<n;i++)
	{
		string s=fixingcharacter(i);
		fixinghidden(s);
		int k=guessinghidden(s);
		res=res+k;
	}
	cout<<endl<<endl<<endl;
	cout<<"Your Final score is:"<<res<<endl;
}

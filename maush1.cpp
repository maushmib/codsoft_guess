#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
    int secretnumber=1+(rand()%100),level;
    int choice,turnsleft;
    
    cout<<"enter the level of game you want"<<endl<<"1.easy(8 chances)"<<endl<<"2.medium(6 chances)"<<endl<<"3.difficult(5 chances)"<<endl;
    
    cin>>level;
    
    if(level==1)
{
    cout<<"you have 8 chances"<<endl;
    turnsleft=8;}
    
    else {if(level==2)
{
    cout<<"you have 6 chances"<<endl;
    turnsleft=6;}
    
    else
{
    cout<<"you have 3 chances"<<endl;
    turnsleft=3;}}
    
    while(turnsleft>0)
    {
        cout<<"guess the secret number: ";
        cin>>choice;
        
        if(choice==secretnumber)
        {
            cout<<"congratulations you won the game"<<endl<<endl;
        break;
        
        }
        else if(choice>secretnumber)
        {
            cout<<"Sorry!This is a wrong choice"<<endl;
        cout<<"Your choice is greater than the secret number"<<endl<<endl;}
        
        else
        {
            cout<<"sorry this is a wrong choice"<<endl;
        cout<<"your choice is smaller than the secret number"<<endl<<endl;}
        
        turnsleft--;
        
        cout<<"you have "<<turnsleft<<" turns left"<<endl;}
        
     return 0;
}
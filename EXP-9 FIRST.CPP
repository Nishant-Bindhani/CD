//3.Write a Program to Compute FIRST of Non-Terminals.

#include<bits/stdc++.h>
using namespace std;
int n;
char productionSet[10][10];
 
void FIRST(set<char> &result,char c)
{
    if(!(isupper(c)))
    {
        result.insert(c);
        return;
    }
    for(int i=0;i<n;i++)
    {   
        if(productionSet[i][0]==c)
        {
          FIRST(result,productionSet[i][2]);
        }
    }
}
int main()
{   cout<<"Nishant Bindhani IT-B-102";
    cout<<"\nEnter No of Productions: ";
    cin>>n;
    //char result[20];
    set<char> s;
    for(int i=0;i<n;i++)
    {
        cin>>productionSet[i];
        s.insert(productionSet[i][0]);
    }
    for(auto c : s)
    {
        set<char> result;
        FIRST(result,c);
        cout<<"First ("<<c<<") : {  ";
        for(auto x : result)
        {
            cout<<x<<"  ";
        }
        cout<<" } \n";
    }
}
 /* 
 Nishant Bindhani IT-B-102
Enter No of Productions: 8
S=AB
B=aAB
B=b
A=CD
D=cCD
D=b
C=(E)
C=d
S=AB

B=aAB

B=b

A=CD

D=cCD

D=b

C=(E)

C=d
First (A) : {  (  d   } 
First (B) : {  a  b   } 
First (C) : {  (  d   } 
First (D) : {  b  c   } 
First (S) : {  (  d   } 
 */
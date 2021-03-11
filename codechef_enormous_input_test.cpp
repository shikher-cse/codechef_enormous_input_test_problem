// enormous  input  problem
#include<bits/stdc++.h>
using  namespace std ;

int  main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int  input  ,  check;
	int  count  =  0;
	cin>>input  >>  check;
	int  val;

	{	
	for(int i =0;i< input;i++)
	{
		
		
		cin>>  val;
		if(val %check == 0)
		{
			count = count   + 1 ;
		}
	}
}
	cout <<  count ;

	return 0;
}

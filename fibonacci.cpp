// fibonacci series till the term less than 1000

// next term in the series is the sum of previous two numbers.
// 0 1 1 2 3 5 8 13 .....
#include<bits/stdc++.h>
using namespace std;

void fibonacci(x,y){
	
	
}
int main(){
	int x=0,y=1, temp=0;
	cout<<x<<" "<<y<<" ";

	while(y<1000){
		temp = y;
		y = y + x;
		x = temp;
		if(y<= 1000){
		cout<<y<<" ";
		fibonacci(0,1);
	}
	}
	return 0;
}

// we can also calculate fibonacci using recursion.








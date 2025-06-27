#include<iostream>
using namespace std;

int seclargest(int n,int *A){

	int la = A[0];
	int secla = A[1];
	if(la < secla){
		int t = la;
		la = secla;
		secla = t;
	}	
	for(int i = 0;i < n;i++)
	{
		if(A[i] > la)
		{
			secla = la;
			la = A[i];
		}
		else if((A[i] > secla && i > 0) || (A[i] == la && i == 0))
		{
			secla = A[i];
		}

	}
	return secla;
}

int main ()
{


	//Second largest Number
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int A[n];
		int *p = &A[0];
		for(int i = 0;i < n;i++)
		{

			cin >> A[i];
			
		
		}


		int seclar = seclargest(n, p);
		cout << seclar << endl;
		
	}

}

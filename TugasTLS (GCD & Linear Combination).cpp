#include <iostream>
using namespace std;

int main()
{
	int bil_1, bil_2, temp, gcd, awal_1, awal_2, gcdrem, x=0, y=0, r1=-1, r2=-1;
	
	cout<<"Bilangan 1 : " ;
	cin>>bil_1;
	cout<<"Bilangan 2 : " ;
	cin>>bil_2;
	
	if (bil_1<bil_2)
	{
		temp = bil_2;
		bil_2 = bil_1;
		bil_1 = temp;
	}
	
	awal_1 = bil_1;
	awal_2 = bil_2;
	
	while (bil_2 != 0) 
	{
		temp = bil_2;
		bil_2 = bil_1%bil_2;
		bil_1 = temp;
	}
	
	gcd = bil_1;
	cout << "GCD = " << gcd;
	
	if (gcd == 1)
	cout << " (Relative Prime)";
	
	cout << "\n"<< "\nSmallest Linear Combination : ";
	
	
	if (awal_2 == gcd)
		gcdrem = 0;
	else gcdrem = gcd;
		
	while (r1!=gcdrem){
		x++;
		temp = awal_1*x;
		r1 = temp%awal_2;
	}
	
	y = (x*awal_1 - gcd)/awal_2;
	
	cout<< "\n" << gcd<< " = "<< x << " x "<< awal_1<< " - "<< y << " x "<< awal_2;
	
	if (awal_2!= gcd){
		x=0;
		while (r2!=gcdrem){
		x++;
		temp = awal_2*x;
		r2 = temp%awal_1;
		}
	
		y = (x*awal_2 - gcd)/awal_1;
		cout<< "\n" << gcd<< " = "<< x << " x "<< awal_2<< " - "<< y << " x "<< awal_1;
	}	
}


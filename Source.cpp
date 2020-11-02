#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	float xa, xb, ya, yb, distance;

	cout << "entrez les coordonées de A et B \n";
	cin >> xa;
	cin >> ya;
	cin >> xb;
	cin >> yb;
	cout << "les coordonnées de A( " << xa << " , " << ya << " ) et de B (" << xb << ", " << yb << " ) \n";

	distance = sqrt(pow((xa - xb), 2) + pow(ya - yb, 2));
	cout << "la distance euclidienne entre A et B  est de : " << distance << " \n";


}
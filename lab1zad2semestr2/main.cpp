#include<iostream>
using namespace std;

void dnx(int n, int x)
{
	if (n == 0 || x == 0)
	{
		cout << "all\n";
		return;
	}
    if (n%x == 0)
		{
			cout << x << " ";
			dnx(n, x - 1);
		}
	else { dnx(n, x - 1); };
}

void dn(int n)
{
	dnx(n, n);
}

void main()
{
	int b, x, a;
	setlocale(LC_CTYPE, "rus");
	cout << "Введите число:" << endl;
	cin >> a;
	cout << "Найти все полож. делители(1) или не больше введённого?(2):" << endl;
    cin >> b;
	switch (b)
	{
	    case(1):
		{
			dn(a); break;
		}
		case(2):
		{ 
		  cout << "Введите ограничительное число: ";
		  cin >> x;
          dnx(a, x); 
		  break;
		}
	};
	cout << "coci";

}


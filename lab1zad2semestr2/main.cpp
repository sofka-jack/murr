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
	cout << "������� �����:" << endl;
	cin >> a;
	cout << "����� ��� �����. ��������(1) ��� �� ������ ���������?(2):" << endl;
    cin >> b;
	switch (b)
	{
	    case(1):
		{
			dn(a); break;
		}
		case(2):
		{ 
		  cout << "������� ��������������� �����: ";
		  cin >> x;
          dnx(a, x); 
		  break;
		}
	};
	cout << "coci";

}


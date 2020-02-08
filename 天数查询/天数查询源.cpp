#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main(void){
	int year;
	int month;
	int days;
	bool falg;
	cout << "请输入年份\n";
	cin >> year;
	cout << "请输入月份\n";
	cin >> month;
	if (year % 4 == 0 && year % 100 != 0){
		falg = true;
	}
	else if (year % 400 == 0){
		falg = true;
	}
	else{
		falg = false;
	}
	switch (month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
			break;
	case 2:days = falg ? 28 : 29;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		cout << "无效月份" << endl;
		break;
	}
	cout << year << "年" << month << "月一共有:" << days << endl;
	system("pause");
	return 0;
}
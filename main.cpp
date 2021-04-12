#include <iostream>
#include <stdio.h>
#include <string.h>

#include <cstdlib>
using namespace std;	//–¼‘O‹óŠÔ

#include "Student.h"
#include "StudentEx.h"

//overload
void SetScore(Student*   x);
void SetScore(StudentEx* x);

void SetScore(Student* x){
	cout << "name ?";
	cin >> x->name;
	cout << "kadai1 ?";
	cin >> x->kadai1;
	cout << "kadai2 ?";
	cin >> x->kadai2;

	x->CalcAve();
}
void SetScore(StudentEx* x){
	cout << "name ?";
	cin >> x->name;
	cout << "kadai1 ?";
	cin >> x->kadai1;
	cout << "kadai2 ?";
	cin >> x->kadai2;
	cout << "kadai3 ?";
	cin >> x->kadai3;

	x->CalcAve();
}
int main()
{
	Student   Taro;
	StudentEx Jiro;

	cout << "student1:";
	SetScore(&Taro);
	cout << "name  :" << Taro.name << "\n";
	cout << "kadai1:" << Taro.kadai1 << "\n";
	cout << "kadai2:" << Taro.kadai2 << "\n";
	cout << "ave   :" << Taro.Average() << "\n";
	cout << "sum   :" << Taro.GetSum() << "\n";

	cout << "student2:";
	SetScore(&Jiro);
	cout << "name  :" << Jiro.name << "\n";
	cout << "kadai1:" << Jiro.kadai1 << "\n";
	cout << "kadai2:" << Jiro.kadai2 << "\n";
	cout << "kadai3:" << Jiro.kadai3 << "\n";
	cout << "ave   :" << Jiro.Average() << "\n";
	cout << "sum   :" << Jiro.GetSum() << endl;

	return 0;
}

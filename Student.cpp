#include <iostream>
#include <stdio.h>
#include <string.h>

#include "Student.h"

#include <cstdlib>
using namespace std;	//–¼‘O‹óŠÔ


void  Student::SetName(const char *n){
	strcpy(name, n);
}
void  Student::SetKadai1(int k1){
	kadai1 = k1;
};
void  Student::SetKadai2(int k2){
	kadai2 = k2;
};
void  Student::CalcAve(){
	ave = (kadai1+kadai2)/2;
};
char* Student::Name(){
	return name;
};
int   Student::GetKadai1(){
	return kadai1;
};
int   Student::GetKadai2(){
	return kadai2;
};
int   Student::Average(){
	return ave;
};
int   Student::GetSum(){
	return (kadai1+kadai2);
};

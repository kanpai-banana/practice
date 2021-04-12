#include <iostream>
#include <stdio.h>
#include <string.h>

#include "Student.h"
#include "StudentEx.h"

void  StudentEx::SetKadai3(int k3){
	kadai3 = k3;
};
void  StudentEx::CalcAve(){	//override
	ave = (kadai1+kadai2+kadai3)/3;
};
int   StudentEx::GetKadai3(){
	return kadai3;
};
int   StudentEx::GetSum(){		//override
	int sum;
	sum = Student::GetSum() + kadai3;
//	return (kadai1+kadai2+kadai3); 
};


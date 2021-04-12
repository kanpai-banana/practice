#ifndef __STUDENT_EX__
#define __STUDENT_EX__

class StudentEx : public Student{
public:
	int kadai3;

	void  SetKadai3(int k3);
	void  CalcAve();	//override
	int   GetKadai3();

	int   GetSum();
};
#endif

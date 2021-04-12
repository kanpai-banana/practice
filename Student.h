#ifndef __STUDENT__
#define __STUDENT__

class Student{
public:
	char name[20];
	int kadai1;	//score1
	int kadai2;	//score2
	int ave;	//average

	void  SetName(const char *n);
	void  SetKadai1(int k1);
	void  SetKadai2(int k2);
	void  CalcAve();
	char* Name();
	int   GetKadai1();
	int   GetKadai2();
	int   Average();

	int   GetSum();
};
#endif

// S______T_____A___________R       A_________G_______________E__S
// Syntax Texts Analysis of Russian Automated Generator of rulEs Systems

#ifndef STAR_AGES_EXCEPT_H
#define STAR_AGES_EXCEPT_H

#include <stdio.h>

const char * const msg[] = {
	"��� �c�������� Exception ��������� ��� WithChar!\n",
	"��� �c�������� Exception ��������� ��� WithShort!\n",
	"��� �c�������� Exception ��������� ��� WithStr!\n",
	"������������� ���������� ����������� �� � ������\n\
��������� ������, ���������������� ���������, � � %i-�!\n",
	"��� �c�������� Exception ��������� ��� With3Str!\n",
	"��� �c�������� WithChar ��������� ��� WithShort!\n",
	"��� �c�������� WithChar ��������� ��� WithStr!\n",
	"��� �c�������� WithChar ��������� ��� With2Str!\n",
	"��� �c�������� WithChar ��������� ��� With3Str!\n",
	"��������� � ������� � �������� %i, ������� ��� ��� ������!\n",
	"��� �c�������� WithShort ��������� ��� WithChar!\n",
	"�� ������ ������� ���� \"%s\"!\n",
	"��� �c�������� WithShort ��������� ��� WithStr!\n",
	"��� �c�������� WithShort ��������� ��� With2Str!\n",
	"��� �c�������� WithShort ��������� ��� With3Str!\n",
	"������ � ������� ����� ��� ���������� ��������!\n\
������������� ��������� �������.\n",
	"��� ��������� �� ������ �� ������ ���� ���� ������!\n\
�������� � ���������� ������\"%s\", �� ���������� �������.\n",
	"���������������� ������ � ����� ������: \"%s\". �� ������� \"%s\".\n",
	"������������ ����� ���� � ������: \"%s\".\n",
	"������������ ��� ������ � ������: \"%s\".\n",
	"������ �� ������� �����! �� ������� \"%s\".\n",
	"��������� \"%s\" �� ������������� ���������� ����������� � ������� %i!\n",
	"����������� ������ '%c' � ������ \"%s\".\n",
	"����������� ������� \"%s\". ���������� \"help\".\n",
	"\"exit\" - ����� �� ���������.\n\
\"help\" - ������� ��� ���������.\n\
\"stat {-csv} <filename>\" - ������� ���������� � ����;\n\
	���� ������� -csv, �������� � ������� csv.\n\
\"top {-x} n <filename>\" - ������ ������ n ��������� ��� ������� �������;\n\
	���� ������� -x, ������� �������������� ���������� �� ������ ���������.\n\
\"tree <filename>?<filename>\" - ������� �������� ������ � ����;\n\
\"frml {-x n} p1 p2 <filename>\" - ������� ������ ������� ��� ���� ������ � ����;\
	���� ������� -x, �������� n �������� ���������� ������;\n\
	p1 = -no, ����� ��������� �������� �������, ���\n\
		���������, �������������� ������� �������;\n\
	p2 = -no, ����� ��������� �������� ��������, ���\n\
		���������, �������������� �������� �������.\n\
\"text <filename>\" - ������� ����� � ����.\n\
\"cat <filename>\" - ������� ����������� ���������� � ����.\n\
\"entry {-csv} <filename>\" - ������� � ���� ��� ���� ����, �������� � �����;\n\
	���� ������� -csv, �������� � ������� csv.\n\
\"ngtv {-csv} <filename>\" - ������� � ���� ���� ����, �� �������� � �����;\n\
	���� ������� -csv, �������� � ������� csv.\n\
\"load <filename>\" - ��������� ����.\n\
\"data <filename>{?<filename>}\" - ��������� ��������� ���������� �� �����;\n\
	���� ������ �������������� ����, ��������� �� ���� ��������� ������.\n\
\"reset\" - �������� ������.\n",
	"������������ �������� ����� � ������ \"%s\".\n",
	"����� ���������: ����� ��������� ��������� � ��� ����� ������.\n",
	"���� ��������: ���������������� ������ \'%c\'.\n",
	"���� ��������: �� ������� \"%s\".\n",
	"���� ��������: �� ������� ��������� ���������.\n",
	"���� ��������: �� ������� ����������� �������.\n",
	"������ ������ ������ Entry � ����������� �������� ������� � �������� %i!\n",
	"������� ������� ������� �� ������� �������!\n",
	"��� �c�������� WithStr ��������� ��� WithChar!\n",
	"��� �c�������� WithStr ��������� ��� WithShort!\n",
	"��� �c�������� WithStr ��������� ��� With2Str!\n",
	"��� �c�������� WithStr ��������� ��� With3Str!\n",
	"��� �c�������� With2Str ��������� ��� WithChar!\n",
	"��� �c�������� With2Str ��������� ��� WithShort!\n",
	"��� �c�������� With2Str ��������� ��� With3Str!\n",
	"��� �c�������� With3Str ��������� ��� WithChar!\n",
	"��� �c�������� With3Str ��������� ��� WithShort!\n",
	"��� ��������� �� ������ �� ������ ���� ���� ������!\n\
�������� � ���������� ��������� �� ������ �������� �����.\n",
	"��� �c�������� Exception ��������� ��� With2Str!\n",
	"��� ��������� �� ������ �� ������ ���� ���� ������!\n\
�������� � ���������� ��������� �� ������ �������������� �������.\n",
	"�������� �������� ������� �%i � ����� ������!\n",
	"�������������� ���������� � ������ %s!\n",
	"������������ ����� ���� ������� � ������: \"%s\".\n",
	"������������ ����� ���� �������� � ������: \"%s\".\n",
	"������������ ��������� ������ ���� � ������: \"%s\".\n",
	"������������ �������� ��������� \"%s\" ������� � ������ \"%s\".\n",
	"������������ �������� ��������� \"%s\" �������� � ������ \"%s\".\n",
	"������������ ��������� ��������� \"%s\" ���� � ������ \"%s\".\n",
	"������������ ����� � ���������� \"%s\" � ������ \"%s\".\n",
	"������� ������� ������ \"%s\" � ����� ������!\n",
	"������������ ���������� ���������� %i.\n",
	"����������� ����� ����� �� ������ \"%s\"!\n",
	"���������� ������� ���� ������ data.txt ��� ������!\n",
	"���� ���������� ������ ����� %s!\n",
	"����� ������ ����� ���������� � ����������� %s!\n",
	"����� ����� ������� � ������� ������� %i � ����������� %s!\n",
	"����� ������ �������� ������� ��� ����� %i � ����������� %s!\n",
	"��������� %i ���� � ����������� %s!\n",
	"������������ ����� ����� %i!\n",
	"� ��������� ������ \"%s\" �� ������� ������� ��������� - ����� ����� ������!",
	"�������� � ��������� ������ \"%s\" � ��������� Windows-1251.\n",
	"�������� � ��������� ������ \"%s\" �� ��������� Windows-1251.\n"
};

class Exception {
protected:
	int id;
public:
	Exception(int s) : id(s) {}
	virtual ~Exception() {}
	virtual int Print(FILE * out);
	const int ID() const {	return id;	}
	virtual const char Char1() const {	throw new Exception(0);	}
	virtual const int Num1() const {	throw new Exception(1);	}
	virtual const char * const Data() const {	throw new Exception(2);	}
	virtual const char * const Data2() const {	throw new Exception(43);	}
	virtual const char * const Data3() const {	throw new Exception(4);	}
};

class WithChar : public virtual Exception {
protected:
	char char1;
public:
	WithChar(int s, char c1) : Exception(s), char1(c1) {}
	~WithChar() {}
	int Print(FILE * out);
	const char Char1() const {	return char1;	}
	const int Num1() const {	throw new Exception(5);	}
	const char * const Data() const {	throw new Exception(6);	}
	const char * const Data2() const {	throw new Exception(7);	}
	const char * const Data3() const {	throw new Exception(8);	}
};

class WithShort : public virtual Exception {
protected:
	int num1;
public:
	WithShort(int s, int n1) : Exception(s), num1(n1) {}
	~WithShort() {}
	int Print(FILE * out);
	const char Char1() const {	throw new Exception(10);	}
	const int Num1() const {	return num1;	}
	const char * const Data() const {	throw new Exception(12);	}
	const char * const Data2() const {	throw new Exception(13);	}
	const char * const Data3() const {	throw new Exception(14);	}
};

class WithStr : public virtual Exception {
	int OTT1;
protected:
	const char * data1;
public:
	WithStr(int s, const char * s1, int o1 = 1)
		: Exception(s), OTT1(o1), data1(s1) {}
	~WithStr();
	int Print(FILE * out);
	const char Char1() const {	throw new Exception(33);	}
	const int Num1() const {	throw new Exception(34);	}
	const char * const Data() const {	return data1;	}
	const char * const Data2() const {	throw new Exception(35);	}
	const char * const Data3() const {	throw new Exception(36);	}
};

class WithCharStr : public WithChar, WithStr {
public:
	WithCharStr(int s, char c1, const char * s1, int o1 = 1)
		: Exception(s), WithChar(s, c1), WithStr(s, s1, o1) {}
	~WithCharStr() {}
	int Print(FILE * out);
	const char Char1() const {	return ((WithChar *)this)->Char1();	}
	const int Num1() const {	throw new Exception(5);	}
	const char * const Data() const {	return ((WithStr *)this)->Data();	}
	const char * const Data2() const {	throw new Exception(7);	}
	const char * const Data3() const {	throw new Exception(8);	}
};

class WithStrShort : public WithStr, WithShort {
public:
	WithStrShort(int s, int n1, const char * s1, int o1 = 1)
		: Exception(s), WithStr(s, s1, o1), WithShort(s, n1) {}
	~WithStrShort() {}
	int Print(FILE * out);
	const char Char1() const {	throw new Exception(10);	}
	const int Num1() const {	return ((WithShort *)this)->Num1();	}
	const char * const Data() const {	return ((WithStr *)this)->Data();	}
	const char * const Data2() const {	throw new Exception(13);	}
	const char * const Data3() const {	throw new Exception(14);	}
};

class With2Str : public WithStr {
	int OTT2;
protected:
	const char * data2;
public:
	With2Str(int s, const char * s1, const char * s2,
		int o1 = 1, int o2 = 1) : Exception(s),
		WithStr(s, s1, o1), OTT2(o2), data2(s2) {}
	~With2Str();
	int Print(FILE * out);
	const char Char1() const {	throw new Exception(37);	}
	const int Num1() const {	throw new Exception(38);	}
	const char * const Data2() const {	return data2;	}
	const char * const Data3() const {	throw new Exception(39);	}
};

class With3Str : public With2Str {
	int OTT3;
protected:
	const char * data3;
public:
	With3Str(int s, const char * s1, const char * s2, const char * s3,
		int o1 = 1, int o2 = 1, int o3 = 1) : Exception(s),
		With2Str(s, s1, s2, o1, o2), OTT3(o3), data3(s3) {}
	~With3Str();
	int Print(FILE * out);
	const char Char1() const {	throw new Exception(40);	}
	const int Num1() const {	throw new Exception(41);	}
	const char * const Data3() const {	return data3;	}
};

#endif

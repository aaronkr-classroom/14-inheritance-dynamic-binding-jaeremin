// Grad.h
# ifndef GUARD_GRAD_H
# define GUARD_GRAD_H

#include <iostream>
#include <string>
#include <vector>
#include "Core.h"

using namespace std;

class Grad : public Core { // Core�� �ִ°� ��ӹ���
public:
	// �� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	// ��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Grad() : thesis(0) {};
	Grad(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
private:
	double thesis;
};

#endif

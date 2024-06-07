// Grad.h
# ifndef GUARD_GRAD_H
# define GUARD_GRAD_H

#include <iostream>
#include <string>
#include <vector>
#include "Core.h"

using namespace std;

class Grad : public Core { // Core에 있는걸 상속받음
public:
	// 두 생성자 모두 암묵적으로 Core::Core()를 사용하여
	// 객체가 기본 클래스에서 상속한 부분을 초기화
	Grad() : thesis(0) {};
	Grad(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
private:
	double thesis;
};

#endif

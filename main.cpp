#include <iostream>
namespace topit {
	struct p_t {
		int x;
		int y;
	};
	bool operator==(p_t, p_t);
	bool operator!=(p_t, p_t);
	struct IDrow { // next должен когда то вернуть begin (условие программы)
		virtual p_t begin () const=0; // означает, что я не обязан давать реализацию для этого метода
		virtual p_t next (p_t) const=0;
		virtual ~IDrow ();
	};
	struct f_t {
		p_t aa, bb;
	};
}
bool topit::operator==(p_t a, p_t b) {
	return a.x == b.x && a.y == b.y;
}
bool topit::operator!=(p_t a, p_t b) {
	return !(a == b);
}


int main(){
	using topit::p_t;
	p_t a{1, 0}, b{1, 0};
	std::cout << (a==b) << std::endl;
}



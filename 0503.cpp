#include "Functor.h"

template<class V>
std::ostream& operator<<(std::ostream& out, const std::vector<V>& vect)
{
	for (const auto& val : vect) out << val << " ";
	return out;
}

int main() {
	setlocale(LC_ALL, "rus");

	std::vector<int> v{ 4, 1, 3, 6, 25, 54 };
	Functor f;
	f(v);
	std::cout << "[IN]: " << v << std::endl;
	std::cout << "[OUT]: get_sum() = " << f.getSum() << std::endl;
	std::cout << "[OUT]: get_count() = " << f.getCount() << std::endl;

	return 0;

}


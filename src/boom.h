#include <cstdlib>

namespace boom {

void seg_fault() {
	int b = (*(int *) nullptr);
}

void double_free() {
	void* b = std::malloc(sizeof(b));

	std::free(b);
	std::free(b);
}

};
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

void invalid_pointer() {
	int* b = new int[2];

	delete b;
	delete[] &b[1];
}

void double_free_out() {
	class PleaseDont {
	public:

		int whatever;

		PleaseDont() {
			delete this;

			whatever = 0;
		}

		~PleaseDont() {}
		
	};

	PleaseDont pd;
}

};
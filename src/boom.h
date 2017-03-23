namespace boom {

void seg_fault() {
	int b = (*(int *) nullptr);
}

};
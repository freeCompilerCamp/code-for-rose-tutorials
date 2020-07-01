#include "rose.h"

class visitorTraversal : public AstSimpleProcessing {
	public:
		void visit(SgNode* n);
};

void visitorTraversal::visit(SgNode* n) {

	// Open a file for writing the output of your tool
	FILE *f = fopen("const_output.txt", "w");
	if (f == NULL) {
		printf("Unable to open file. Exiting.\n");
		exit(1);
	}

	// To write a variable to the opened file, see below as an example.
	// x and y represent the strings to be inserted into each %s, respectively.
	// fprintf(f, "Found a const type-quanfitied variable: %s (%s)\n", x, y);

	// Insert your tool code here!

	// Close the file
	fclose(f);
}

int main(int argc, char* argv[]) {
	ROSE_INITIALIZE;

	SgProject *project = frontend(argc, argv);

	visitorTraversal myvisitor;
	myvisitor.traverseInputFiles(project, preorder);

	return backend(project);
}

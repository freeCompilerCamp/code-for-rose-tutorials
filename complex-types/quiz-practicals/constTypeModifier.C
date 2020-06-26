#include "rose.h"

class visitorTraversal : public AstSimpleProcessing {
	public:
		void visit(SgNode* n);
};

void visitorTraversal::visit(SgNode* n) {
	// Insert your code here!
}

int main(int argc, char* argv[]) {
	ROSE_INITIALIZE;

	SgProject *project = frontend(argc, argv);

	visitorTraversal myvisitor;
	myvisitor.traverseInputFiles(project, preorder);

	return backend(project);
}

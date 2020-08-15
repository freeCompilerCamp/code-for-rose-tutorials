#include "rose.h"

class visitorTraversal : public AstSimpleProcessing {
	public:
    visitorTraversal();

		void visit(SgNode* n);

    int constCount;
};

visitorTraversal::visitorTraversal() {
  constCount = 0;
}

void visitorTraversal::visit(SgNode* n) {

	// Insert your tool code here!


}

int main(int argc, char* argv[]) {
	ROSE_INITIALIZE;

	SgProject *project = frontend(argc, argv);

	visitorTraversal* myvisitor = new visitorTraversal();
	myvisitor->traverseInputFiles(project, preorder);

	// Output the number of consts found
	std::cout << myvisitor->constCount << std::endl;
  delete myvisitor;

  // Do not feed to backend since we are not modifying the AST
	return 0;
}

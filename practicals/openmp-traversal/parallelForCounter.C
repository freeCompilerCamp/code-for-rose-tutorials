#include <fstream>

#include "rose.h"

class visitorTraversal : public AstSimpleProcessing {
	public:

		void visit(SgNode* n);
};

void visitorTraversal::visit(SgNode* n) {

	// Insert your tool code here!


}

int main(int argc, char* argv[]) {
	ROSE_INITIALIZE;

	SgProject *project = frontend(argc, argv);

	visitorTraversal* myvisitor = new visitorTraversal();
	myvisitor->traverseInputFiles(project, preorder);

  // Do not feed to backend since we are not modifying the AST
	return 0;
}

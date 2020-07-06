#include <fstream>

#include "rose.h"

class visitorTraversal : public AstSimpleProcessing {
	public:
    visitorTraversal();
    ~visitorTraversal();
		
		void visit(SgNode* n);

  private:
    std::ofstream outputFile;
};

visitorTraversal::visitorTraversal() {
  // Open a file for writing the output of your tool
  outputFile.open("const_output.txt");
}

visitorTraversal::~visitorTraversal() {
  outputFile.close();
}

void visitorTraversal::visit(SgNode* n) {

	// To write a variable x to the opened file, see below as an example
	// outputFile << "Found a const type-quantified variable: " << x << ".\n";

	// Insert your tool code here!


}

int main(int argc, char* argv[]) {
	ROSE_INITIALIZE;

	SgProject *project = frontend(argc, argv);

	visitorTraversal* myvisitor = new visitorTraversal();
	myvisitor->traverseInputFiles(project, preorder);
	std::cout << "Done traversing input files and output written to file."
		<< std::endl;
  delete myvisitor;

  // Do not feed to backend since we are not modifying the AST
	return 0;
}

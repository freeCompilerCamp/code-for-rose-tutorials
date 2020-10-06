#include "rose.h"

class visitorTraversal : public AstSimpleProcessing
   {
     public:
          visitorTraversal();
          virtual void visit(SgNode* n);
          virtual void atTraversalEnd();
     private:
          int map_variable_count;
   };

visitorTraversal::visitorTraversal()
   {
     map_variable_count = 0;
   }

void visitorTraversal::visit(SgNode* n)
   {
       // Insert your tool code here!
   }

void visitorTraversal::atTraversalEnd()
   {
     printf ("%d", map_variable_count);
   }

int
main ( int argc, char* argv[] )
   {
  // Initialize and check compatibility. See Rose::initialize
     ROSE_INITIALIZE;

     SgProject* project = frontend(argc,argv);
     ROSE_ASSERT (project != NULL);

  // Build the traversal object
     visitorTraversal exampleTraversal;

  // Call the traversal function (member function of AstSimpleProcessing)
  // starting at the project node of the AST, using a preorder traversal.
     exampleTraversal.traverseInputFiles(project,preorder);

     return 0;
   }


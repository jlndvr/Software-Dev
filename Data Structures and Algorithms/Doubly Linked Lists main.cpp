#include "dequeue.h"

inline void _test(const char *expression, const char *file, int line) {
  cerr << "test(" << expression << ") failed in file " << file << ", line "
       << line << "." << endl;
  // abort();
}

#define test(EXPRESSION)                                                       \
  ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main() {
  Candidate* daniela = new Candidate("Daniela", "Developer");
  Candidate* daria = new Candidate("Daria", "Developer");
  Candidate* hector = new Candidate("Hector", "Salesman");
  Candidate* hugo = new Candidate("Hugo", "Salesman");
  Candidate* berta = new Candidate("Berta", "Designer");
  Candidate* bernardo = new Candidate("Bernardo", "Designer");
  

  Dequeue dq;
  dq.pushFront(daniela);//daniela
  dq.pushBack(daria);//daniela,daria
  dq.pushFront(hector);//hector,daniela,daria
  dq.pushBack(hugo);//hector,daniela,daria,hugo
  dq.pushFront(berta);//berta,hector,daniela,daria,hugo
  dq.pushBack(bernardo);//berta,hector,daniela,daria,hugo,bernardo
  

  test(dq.size()==6);
  cout << "Candidates:" << endl;
  cout << endl;
  dq.candidates();
  cout << endl;
  /*Your output should be:
  Berta is a Designer
  Hector is a Salesman
  Daniela is a Developer
  Daria is a Developer
  Hugo is a Salesman
  Bernardo is a Designer
  */

  test(dq.popFront()->getRole()=="Designer");
  test(dq.popBack()->getRole()=="Designer");
  
  test(dq.front()->getRole()=="Salesman");
  test(dq.rear()->getRole()=="Salesman");
  
  dq.popFront();
  dq.popBack();
  test(dq.front()->getRole()=="Developer");
  test(dq.rear()->getRole()=="Developer");
  test(dq.size()==2);

  cout << "Assignment complete. Check if your output matches the comment provided" << endl;
}
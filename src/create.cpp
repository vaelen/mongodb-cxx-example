#include <cstdlib>
#include <iostream>
#include "mongo/client/dbclient.h"
#include "mongo/bson/bsonobj.h"

using namespace std;
using namespace mongo;

void run() {
  string errmsg;
  
  DBClientConnection c;
  c.connect("localhost");
  
  BSONObjBuilder b;
  b.append("name", "Joe");
  b.append("age", 33);
  b.append("active", true);

  BSONObj p = b.obj();
  c.insert("tutorial.persons", p);

  errmsg = c.getLastError();
  if (!errmsg.empty()) {
    cout << "insert failed: " << errmsg << endl;
  }
}

int main() {
  client::initialize();
  try {
    run();
    cout << "success" << endl;
  } catch( const DBException &e ) {
    cout << "caught " << e.what() << endl;
  }
  return EXIT_SUCCESS;
}

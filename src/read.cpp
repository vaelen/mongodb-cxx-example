#include <cstdlib>
#include <iostream>
#include "mongo/client/dbclient.h" // for the driver

using namespace std;
using namespace mongo;

void run() {
  DBClientConnection c;
  c.connect("localhost");

  auto_ptr<DBClientCursor> cursor = c.query("tutorial.persons", BSONObj());

  while (cursor->more()) {
    cout << cursor->next().toString() << endl;
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

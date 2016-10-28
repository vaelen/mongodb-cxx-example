#include <cstdlib>
#include <iostream>
#include "mongo/client/dbclient.h" // for the driver

using namespace std;
using namespace mongo;

void run() {
  DBClientConnection c;
  c.connect("localhost");
}

int main() {
  client::initialize();
  try {
    run();
    cout << "connected ok" << endl;
  } catch( const DBException &e ) {
    cout << "caught " << e.what() << endl;
  }
  return EXIT_SUCCESS;
}

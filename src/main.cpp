
#include <fstream>
#include <vector>
#include <assert.h>

#include "Loaders/16bitBinaryLoader.h"

int main(int argc, char *argv[])
{
   std::ifstream instream(argv[1], std::ios::in | std::ios::binary);
   std::vector<uint8_t> dataVector((std::istreambuf_iterator<char>(instream)), std::istreambuf_iterator<char>());
   cout << dataVector.size() << endl;
   Game *_game = load16bitBinary(dataVector);
   assert(_game != nullptr);
   return 0;
}

#include <fstream>
#include <vector>
#include <assert.h>

#include "Loaders/16bitBinaryLoader.h"
#include "Loaders/8bitBinaryLoader.h"

#define OFFSET_DARKSIDE       0xc9ce
#define OFFSET_DRILLER        0xcf3e
#define OFFSET_TOTALECLIPSE   0xcdb7

int main(int argc, char *argv[])
{
   std::ifstream instream(argv[1], std::ios::in | std::ios::binary);
   std::vector<uint8_t> dataVector((std::istreambuf_iterator<char>(instream)), std::istreambuf_iterator<char>());
   cout << dataVector.size() << endl;
   Game *_game = load16bitBinary(dataVector);
   assert(_game != nullptr);
   return 0;
}

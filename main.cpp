#include <iostream>
#include <Magick++.h>
using namespace std;
using namespace Magick;
int main(int argc, char **argv) {
  if (argc<2){
    cout<<"usage: hello \"yourimage.yourextension\" \"secret message\""<<endl;
  }
  else{
  
  InitializeMagick(*argv);
  Image image;
    try {
      
    image.read(argv[1]);
  } 
  catch( Exception &error_ ) 
    { 
      cout << "Caught exception: " << error_.what() << endl; 
      return 1; 
    } 
  }
  
  return 0; 
    
}

#include "itkLightObject.h"
#include "itkTimeProbe.h"

int main(int argc, char * argv[])
{


  // create an objet and destroy it immediatly, 1000000 times
  itk::TimeProbe time;
  time.Start();
  for( int i=0; i<=1000000; i++ )
    {
    itk::LightObject::Pointer lo = itk::LightObject::New();
    }
  time.Stop();

  std::cout << time.GetMeanTime() << std::endl;

  return 0;
}


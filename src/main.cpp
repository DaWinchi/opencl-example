#define __CL_ENABLE_EXCEPTIONS

#include <iostream>
#include <CL/cl.hpp>

int main(int argc, char ** argv)
{
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);
    for(int i =0; i<platforms.size(); i++)
    {
        std::vector<cl::Device> devices;
        platforms[i].getDevices(CL_DEVICE_TYPE_ALL, &devices);
        
        for (int j = 0; j <devices.size(); j++)
        {
            std::cout<<devices[j].getInfo<CL_DEVICE_NAME>()<<std::endl;
        }
    }
    std::cout<<"Hello world"<<std::endl;
    return 0;
}
#include <stdio.h>

// INTERFACE_TYPE은 Windows 커널의 winddk.h 헤더 파일에 정의된 열거형
typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main()
{
    /*____________________________________________________________*/
    {
        printf("%d ", i);
    }

    return 0;
}

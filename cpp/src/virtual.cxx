#include "virtual.h"

class PureVirtualImpl : public PureVirtual
{
public:
    PureVirtualImpl() = default;
    ~PureVirtualImpl() override = default;

    virtual void PureFunc() override { }
};

PureVirtual* getPureVirtual()
{
    return new PureVirtualImpl;
}

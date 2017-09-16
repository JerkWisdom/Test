#ifndef __APP_INC_VIRTUAL_H__
#define __APP_INC_VIRTUAL_H__

class PureVirtual
{
public:
    virtual ~PureVirtual() = 0 { };
    virtual void PureFunc() = 0;
};

PureVirtual* getPureVirtual();

class Virtual
{
};

#endif //__APP_INC_VIRTUAL_H__

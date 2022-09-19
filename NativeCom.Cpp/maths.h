#pragma once

#include <atlbase.h>
#include <atlcom.h>
#include <Windows.h>

#include "maths_h.h"


class DECLSPEC_UUID("b643227e-beb7-418f-a006-47568786cccf") Maths :
    public CComObjectRootEx<CComMultiThreadModel>,
    public CComCoClass<Maths>,
    public IMaths
{
public:

    DECLARE_NO_REGISTRY();

    BEGIN_COM_MAP(Maths)
        COM_INTERFACE_ENTRY(IMaths)
    END_COM_MAP()

    // IFooObject
    HRESULT __stdcall PlusOne(int input, int* output) override;
};

OBJECT_ENTRY_AUTO(__uuidof(Maths), Maths);
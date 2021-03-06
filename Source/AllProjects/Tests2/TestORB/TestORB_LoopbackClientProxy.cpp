// ----------------------------------------------------------------------------
//  FILE: TestORB_LoopbackClientProxy.cpp
//  DATE: Fri, Feb 14 18:42:57 2020 -0500
//    ID: 1799C1BE4E47BA7E-19344A2250A462D2
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
// Includes
// ----------------------------------------------------------------------------
#include "TestORB.hpp"

// ----------------------------------------------------------------------------
// Magic macros
// ----------------------------------------------------------------------------
AdvRTTIDecls(TTestOrbIntfClientProxy,TOrbClientBase)


// ----------------------------------------------------------------------------
// TTestOrbIntfClientProxy: Public, static data
// ----------------------------------------------------------------------------
const TString TTestOrbIntfClientProxy::strInterfaceId(L"1799C1BE4E47BA7E-19344A2250A462D2");

// ----------------------------------------------------------------------------
// TTestOrbIntfClientProxy: Constructors and Destructor
// ----------------------------------------------------------------------------
TTestOrbIntfClientProxy::TTestOrbIntfClientProxy()
{
}

TTestOrbIntfClientProxy::
TTestOrbIntfClientProxy(const TOrbObjId& ooidSrc, const TString& strNSBinding)
{
    #if CID_DEBUG_ON
    if (!ooidSrc.oidKey().bIsInterfaceId(strInterfaceId))
    {
        facCIDOrb().ThrowErr
        (
            CID_FILE
            , CID_LINE
            , kOrbErrs::errcClient_BadIntfId
            , tCIDLib::ESeverities::Failed
            , tCIDLib::EErrClasses::BadParms
            , ooidSrc.oidKey().mhashInterface()
            , strInterfaceId
        );
    }
    #endif
    SetObjId(ooidSrc, strNSBinding, kCIDLib::False);
}

TTestOrbIntfClientProxy::~TTestOrbIntfClientProxy()
{
}

// ----------------------------------------------------------------------------
// TTestOrbIntfClientProxy: Public, non-virtual methods
// ----------------------------------------------------------------------------
tCIDLib::TBoolean TTestOrbIntfClientProxy::bBagParamTest
(
    const TBag<TArea>& colIn
    , TBag<TPoint>& colOut
    , TString& strFailReason)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bBagParamTest");
        ocmdToUse.strmOut() << colIn;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> colOut;
        ocmdToUse.strmIn() >> strFailReason;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TTestOrbIntfClientProxy::bParamTest
(
    const tCIDLib::TCard4 c4In
    , tCIDLib::TCard4& c4Out
    , const tCIDLib::TFloat8 f8In
    , tCIDLib::TFloat8& f8Out
    , const TString& strIn
    , TString& strOut
    , TString& strInOut
    , const tCIDLib::TBoolean bIn
    , tCIDLib::TBoolean& bOut
    , TString& strFailReason)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bParamTest");
        ocmdToUse.strmOut() << c4In;
        ocmdToUse.strmOut() << f8In;
        ocmdToUse.strmOut() << strIn;
        ocmdToUse.strmOut() << strInOut;
        ocmdToUse.strmOut() << bIn;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> c4Out;
        ocmdToUse.strmIn() >> f8Out;
        ocmdToUse.strmIn() >> strOut;
        ocmdToUse.strmIn() >> strInOut;
        ocmdToUse.strmIn() >> bOut;
        ocmdToUse.strmIn() >> strFailReason;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TTestOrbIntfClientProxy::bPollData
(
    tCIDLib::TCard4& c4SerialNum
    , TArea& areaRet)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bPollData");
        ocmdToUse.strmOut() << c4SerialNum;
        Dispatch(10000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        if (retVal)
        {
            ocmdToUse.strmIn() >> c4SerialNum;
            ocmdToUse.strmIn() >> areaRet;
        }
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TBoolean TTestOrbIntfClientProxy::bVectorParamTest
(
    TVector<TString>& colInOut
    , TString& strFailReason)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TBoolean retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"bVectorParamTest");
        ocmdToUse.strmOut() << colInOut;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        ocmdToUse.strmIn() >> colInOut;
        ocmdToUse.strmIn() >> strFailReason;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TCard4 TTestOrbIntfClientProxy::c4BumpIt
(
    const tCIDLib::TCard4 c4Input)
{
    #pragma warning(suppress : 26494)
    tCIDLib::TCard4 retVal;
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"c4BumpIt");
        ocmdToUse.strmOut() << c4Input;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> retVal;
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
    return retVal;
}

tCIDLib::TVoid TTestOrbIntfClientProxy::BulkTest
(
    tCIDLib::TCard4& c4BufSz_mbufOut
    , THeapBuf& mbufOut)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"BulkTest");
        ocmdToUse.strmOut() << c4BufSz_mbufOut;
        ocmdToUse.strmOut().c4WriteBuffer(mbufOut, c4BufSz_mbufOut);
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        ocmdToUse.strmIn() >> c4BufSz_mbufOut;
        ocmdToUse.strmIn().c4ReadBuffer(mbufOut, c4BufSz_mbufOut);
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TTestOrbIntfClientProxy::ExceptTest()
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"ExceptTest");
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TTestOrbIntfClientProxy::ExceptTest
(
    const tCIDLib::TCard4 c4Dummy)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"ExceptTest1");
        ocmdToUse.strmOut() << c4Dummy;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}

tCIDLib::TVoid TTestOrbIntfClientProxy::SetData
(
    const TArea& areaToSet)
{
    TCmdQItem* pcqiToUse = pcqiGetCmdItem(ooidThis().oidKey());
    TOrbCmd& ocmdToUse = pcqiToUse->ocmdData();
    try
    {
        ocmdToUse.strmOut() << TString(L"SetData");
        ocmdToUse.strmOut() << areaToSet;
        Dispatch(30000, pcqiToUse);
        ocmdToUse.strmIn().Reset();
        GiveBackCmdItem(pcqiToUse);
    }
    catch(TError& errToCatch)
    {
        GiveBackCmdItem(pcqiToUse);
        errToCatch.AddStackLevel(CID_FILE, CID_LINE);
        throw;
    }
}


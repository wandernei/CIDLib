// ----------------------------------------------------------------------------
//  FILE: TestORB_LoopbackServerBase.hpp
//  DATE: Fri, Nov 01 16:40:15 2019 -0400
//    ID: 1799C1BE4E47BA7E-19344A2250A462D2
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TTestOrbIntfServerBase : public TOrbServerBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        // --------------------------------------------------------------------
        // Constructors and destructor
        // --------------------------------------------------------------------
        TTestOrbIntfServerBase(const TTestOrbIntfServerBase&) = delete;
        ~TTestOrbIntfServerBase();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TTestOrbIntfServerBase& operator=(const TTestOrbIntfServerBase&) = delete;

        // --------------------------------------------------------------------
        // Public, pure virtual methods
        // --------------------------------------------------------------------
        virtual tCIDLib::TBoolean bBagParamTest
        (
            const TBag<TArea>& colIn
            , TBag<TPoint>& colOut
            , TString& strFailReason
        ) = 0;

        virtual tCIDLib::TBoolean bParamTest
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
            , TString& strFailReason
        ) = 0;

        virtual tCIDLib::TBoolean bPollData
        (
            tCIDLib::TCard4& c4SerialNum
            , TArea& areaRet
        ) = 0;

        virtual tCIDLib::TBoolean bVectorParamTest
        (
            TVector<TString>& colInOut
            , TString& strFailReason
        ) = 0;

        virtual tCIDLib::TCard4 c4BumpIt
        (
            const tCIDLib::TCard4 c4Input
        ) = 0;

        virtual tCIDLib::TVoid BulkTest
        (
            tCIDLib::TCard4& c4BufSz_mbufOut
            , THeapBuf& mbufOut
        ) = 0;

        virtual tCIDLib::TVoid ExceptTest() = 0;

        virtual tCIDLib::TVoid ExceptTest
        (
            const tCIDLib::TCard4 c4Dummy
        ) = 0;

        virtual tCIDLib::TVoid SetData
        (
            const TArea& areaToSet
        ) = 0;

    protected :
        // --------------------------------------------------------------------
        // Hidden constructors
        // --------------------------------------------------------------------
        TTestOrbIntfServerBase();
        TTestOrbIntfServerBase(const TOrbObjId& ooidThis);

        // --------------------------------------------------------------------
        // Protected, inherited methods
        // --------------------------------------------------------------------
        tCIDLib::TVoid Dispatch
        (
            const  TString&      strMethodName
            ,      TOrbCmd&      orbcToDispatch
        )   override;

    private :
        // --------------------------------------------------------------------
        // Magic macros
        // --------------------------------------------------------------------
        RTTIDefs(TTestOrbIntfServerBase,TOrbServerBase)
};

#pragma CIDLIB_POPPACK


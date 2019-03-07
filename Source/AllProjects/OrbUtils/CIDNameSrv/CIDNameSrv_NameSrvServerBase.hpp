// ----------------------------------------------------------------------------
//  FILE: CIDNameSrv_NameSrvServerBase.hpp
//  DATE: Tue, Feb 26 15:38:53 2019 -0500
//    ID: DA7622D8FE9D1744-8BBD12DB0DD8ABF3
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

class  TCIDNameSrvServerBase : public TOrbServerBase
{
    public :
        // --------------------------------------------------------------------
        // Public, static data
        // --------------------------------------------------------------------
        static const TString strInterfaceId;
        static const TString strAdminScope;
        static const TString strAdminBinding;


        // --------------------------------------------------------------------
        // Constructors and destructor
        // --------------------------------------------------------------------
        TCIDNameSrvServerBase(const TCIDNameSrvServerBase&) = delete;
        ~TCIDNameSrvServerBase();

        // --------------------------------------------------------------------
        // Public operators
        // --------------------------------------------------------------------
        TCIDNameSrvServerBase& operator=(const TCIDNameSrvServerBase&) = delete;

        // --------------------------------------------------------------------
        // Public, pure virtual methods
        // --------------------------------------------------------------------
        virtual tCIDLib::TBoolean bBindingExists
        (
            const TString& strToCheck
            , tCIDLib::TCard8& c8CurCookie
        ) = 0;

        virtual tCIDLib::TBoolean bGetObject
        (
            const TString& strBinding
            , TOrbObjId& ooidToFill
            , tCIDLib::TCard8& c8CurCookie
        ) = 0;

        virtual tCIDLib::TBoolean bQueryNameInfo
        (
            const TString& strNameToQuery
            , TString& strName
            , TString& strDescr
        ) = 0;

        virtual tCIDLib::TBoolean bQueryNameInfo2
        (
            const TString& strNameToQuery
            , TString& strName
            , TString& strDescr
            , TString& strExtra1
            , TString& strExtra2
            , TString& strExtra3
            , TString& strExtra4
        ) = 0;

        virtual tCIDLib::TBoolean bQueryScopeKeys
        (
            tCIDLib::TCard4& c4SerialNum
            , const TString& strScopeToEnum
            , TVector<TString>& colResults
            , const tCIDLib::TBoolean bObjectsOnly
            , const tCIDLib::TBoolean bThrowIfNot
        ) = 0;

        virtual tCIDLib::TBoolean bRebindObjs
        (
            const TVector<TNSRebindInfo>& colBindings
            , TFundVector<tCIDOrb::ERebindRes>& fcolResults
            , tCIDLib::TCard8& c8CurCookie
        ) = 0;

        virtual tCIDLib::TBoolean bRenewLeases
        (
            const TVector<TString>& colPaths
            , TFundVector<tCIDLib::TBoolean>& fcolResults
            , tCIDLib::TCard8& c8CurCookie
        ) = 0;

        virtual tCIDLib::TBoolean bScopeExists
        (
            const TString& strToCheck
            , tCIDLib::TCard8& c8CurCookie
        ) = 0;

        virtual tCIDLib::TCard4 c4EnumObjects
        (
            const TString& strScopeToEnum
            , TVector<TNameServerInfo>& colResults
            , const tCIDLib::TBoolean bThrowIfNot
        ) = 0;

        virtual tCIDLib::TCard4 c4EnumSubScopes
        (
            const TString& strScopeToEnum
            , TVector<TKeyValuePair>& colResults
            , const tCIDLib::TBoolean bThrowIfNot
        ) = 0;

        virtual tCIDLib::TCard8 c8QueryCookie() = 0;

        virtual tCIDLib::TVoid BindObj
        (
            const TString& strBinding
            , const TString& strDescription
            , const TString& strExtra1
            , const TString& strExtra2
            , const TString& strExtra3
            , const TString& strExtra4
            , const TOrbObjId& ooidToStore
        ) = 0;

        virtual tCIDLib::TVoid BindObj2
        (
            const TString& strParentScope
            , const TString& strNewName
            , const TString& strDescription
            , const TString& strExtra1
            , const TString& strExtra2
            , const TString& strExtra3
            , const TString& strExtra4
            , const TOrbObjId& ooidToStore
        ) = 0;

        virtual tCIDLib::TVoid BindObj3
        (
            const TNSRebindInfo& nsrbiToBind
        ) = 0;

        virtual tCIDLib::TVoid ClearScope
        (
            const TString& strToClear
        ) = 0;

        virtual tCIDLib::TVoid CreateScope
        (
            const TString& strParentScope
            , const TString& strNewScope
            , const TString& strDescription
        ) = 0;

        virtual tCIDLib::TVoid CreateScopePath
        (
            const TString& strScopePath
            , const TString& strDescription
        ) = 0;

        virtual tCIDLib::TVoid CreateScopePath
        (
            const TVector<TKeyValuePair>& colPathParts
        ) = 0;

        virtual tCIDLib::TVoid Dump
        (
            TString& strToFill
            , const tCIDOrbUC::EDumpFmts eFormat
        ) = 0;

        virtual tCIDLib::TVoid QueryNameInfo
        (
            const TString& strPath
            , TString& strName
            , TString& strDescr
        ) = 0;

        virtual tCIDLib::TVoid QueryNameInfo2
        (
            const TString& strPath
            , TString& strName
            , TString& strDescr
            , TString& strExtra1
            , TString& strExtra2
            , TString& strExtra3
            , TString& strExtra4
        ) = 0;

        virtual tCIDLib::TVoid RemoveBinding
        (
            const TString& strToRemove
            , const tCIDLib::TBoolean bThrowIfNot
        ) = 0;

        virtual tCIDLib::TVoid RemoveScope
        (
            const TString& strToRemove
        ) = 0;

        virtual tCIDLib::TVoid UpdateExtraVal
        (
            const TString& strBinding
            , const tCIDLib::TCard4 c4Index
            , const TString& strNewValue
        ) = 0;

    protected :
        // --------------------------------------------------------------------
        // Hidden constructors
        // --------------------------------------------------------------------
        TCIDNameSrvServerBase();
        TCIDNameSrvServerBase(const TOrbObjId& ooidThis);

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
        RTTIDefs(TCIDNameSrvServerBase,TOrbServerBase)
};

#pragma CIDLIB_POPPACK

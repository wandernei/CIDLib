// ----------------------------------------------------------------------------
//  FILE: CIDAI_Shared.hpp
//  DATE: Fri, Nov 01 16:40:14 2019 -0400
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Constants namespace
// ----------------------------------------------------------------------------
namespace kCIDAI
{
    
    // ------------------------------------------------------------------------
    //  The maximum number of child nodes a composite node can have.
    //                  
    // ------------------------------------------------------------------------
    constexpr tCIDLib::TCard4 c4MaxChildNodes = 64;
    
    // ------------------------------------------------------------------------
    //  The factory name for the default BT node factory (which handles creation
    //  of all of the built in node types.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strFact_Default;
     const extern TString strFact_DefPrefix;
    
    // ------------------------------------------------------------------------
    //  The node types supported by the default BT node factory.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strDefFact_Inverter;
     const extern TString strDefFact_Link;
     const extern TString strDefFact_Root;
     const extern TString strDefFact_RandChoice;
     const extern TString strDefFact_Selector;
     const extern TString strDefFact_Sequence;
     const extern TString strDefFact_Success;
     const extern TString strDefFact_VarTest;
    
    // ------------------------------------------------------------------------
    //  Some commonly used values.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strNParam_LinkTarget;
     const extern TString strNParam_VarTestComp;
     const extern TString strNParam_VarTestVal;
     const extern TString strNParam_VarTestVar;
    
    // ------------------------------------------------------------------------
    //  Some commonly used values.
    //                  
    // ------------------------------------------------------------------------
     const extern TString strVal_False;
     const extern TString strVal_True;
}

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tCIDAI
{
    
    // ------------------------------------------------------------------------
    //  The status that the behavior tree nodes can have.
    //                  
    // ------------------------------------------------------------------------
    enum class ENodeStates
    {
        Running
        , Success
        , Cancel
        , Failure
        , Count
        , Min = Running
        , Max = Failure
    };
     ENodeStates eXlatENodeStates(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strXlatENodeStates(const ENodeStates eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     tCIDLib::TBoolean bIsValidEnum(const ENodeStates eVal);

}

#pragma CIDLIB_POPPACK

 TBinOutStream& operator<<(TBinOutStream& strmTar, const tCIDAI::ENodeStates eToStream);
 TBinInStream& operator>>(TBinInStream& strmSrc, tCIDAI::ENodeStates& eToFill);
 tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCIDAI::ENodeStates* const aeList, const tCIDLib::TCard4 c4Count);
 tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCIDAI::ENodeStates* const aeList, const tCIDLib::TCard4 c4Count);
 TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDAI::ENodeStates eToStream);


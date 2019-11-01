// ----------------------------------------------------------------------------
//  FILE: CIDResEd_Types.cpp
//  DATE: Fri, Nov 01 16:40:14 2019 -0400
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "CIDResEd.hpp"

const TString kCIDResEd::strAttr_Area(L"Area");
const TString kCIDResEd::strAttr_Anchor(L"Anchor");
const TString kCIDResEd::strAttr_AppImage(L"AppImage");
const TString kCIDResEd::strAttr_Hints(L"Hints");
const TString kCIDResEd::strAttr_InitFocus(L"InitFocus");
const TString kCIDResEd::strAttr_ResId(L"Resource Id");
const TString kCIDResEd::strAttr_ScreenOrigin(L"ScreenOrigin");
const TString kCIDResEd::strAttr_SetFgn(L"SetFgn");
const TString kCIDResEd::strAttr_Sizeable(L"Sizeable");
const TString kCIDResEd::strAttr_Symbol(L"Symbol");
const TString kCIDResEd::strAttr_Theme(L"Theme");
const TString kCIDResEd::strAttr_Title(L"Title");
const TString kCIDResEd::strAttr_UseOrigin(L"UseOrigin");
const TString kCIDResEd::strSpecType_LoadText(L"LoadText");
const TString kCIDResEd::strSpecType_Hint(L"CtrlHint");
const TString kCIDResEd::strSpecType_DlgItemFlag(L"DlgItemFlag");


static TEnumMap::TEnumValItem aeitemValues_EMsgTypes[3] = 
{
    {  tCIDLib::TInt4(tCIDResEd::EMsgTypes::Common), 0, 0,  { L"", L"Com", L"", L"Common", L"EMsgTypes::Common", L"" } }
  , {  tCIDLib::TInt4(tCIDResEd::EMsgTypes::Error), 0, 0,  { L"", L"Err", L"", L"Error", L"EMsgTypes::Error", L"" } }
  , {  tCIDLib::TInt4(tCIDResEd::EMsgTypes::Message), 0, 0,  { L"", L"Msg", L"", L"Message", L"EMsgTypes::Message", L"" } }

};

static TEnumMap emapEMsgTypes
(
     L"EMsgTypes"
     , 3
     , kCIDLib::False
     , aeitemValues_EMsgTypes
     , nullptr
     , tCIDLib::TCard4(tCIDResEd::EMsgTypes::Count)
);

const TString& tCIDResEd::strAltXlatEMsgTypes(const tCIDResEd::EMsgTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMsgTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::AltText, bThrowIfNot);
}

tCIDResEd::EMsgTypes tCIDResEd::eAltXlatEMsgTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDResEd::EMsgTypes(emapEMsgTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::AltText, bThrowIfNot));
}

const TString& tCIDResEd::strLoadEMsgTypes(const tCIDResEd::EMsgTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMsgTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDResEd::EMsgTypes eVal)
{
    strmTar << emapEMsgTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDResEd::EMsgTypes operator++(tCIDResEd::EMsgTypes& eVal, int)
{
    tCIDResEd::EMsgTypes eTmp = eVal;
    eVal = tCIDResEd::EMsgTypes(int(eVal)+1);
    return eTmp;
}

TBinOutStream& operator<<(TBinOutStream& strmTar, const tCIDResEd::EMsgTypes eVal)
{
    strmTar.WriteEnum(tCIDLib::TCard4(eVal));
    return strmTar;
}
TBinInStream& operator>>(TBinInStream& strmSrc, tCIDResEd::EMsgTypes& eVal)
{
    eVal = tCIDResEd::EMsgTypes(strmSrc.c4ReadEnum());
    return strmSrc;
}
tCIDLib::TVoid TBinInStream_ReadArray(TBinInStream& strmSrc, tCIDResEd::EMsgTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    tCIDLib::TCard4 c4Cur;
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
    {
        strmSrc >> c4Cur;
        aeList[c4Index] = tCIDResEd::EMsgTypes(c4Cur);
    }
}
tCIDLib::TVoid TBinOutStream_WriteArray(TBinOutStream& strmTar, const tCIDResEd::EMsgTypes* const aeList, const tCIDLib::TCard4 c4Count)
{
    for (tCIDLib::TCard4 c4Index = 0; c4Index < c4Count; c4Index++)
        strmTar << tCIDLib::TCard4(aeList[c4Index]);
}
tCIDLib::TBoolean tCIDResEd::bIsValidEnum(const tCIDResEd::EMsgTypes eVal)
{
    return emapEMsgTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ETextSyms[3] = 
{
    {  tCIDLib::TInt4(tCIDResEd::ETextSyms::Cue), 0, 0,  { L"", L"", L"", L"Cue", L"ETextSyms::Cue", L"" } }
  , {  tCIDLib::TInt4(tCIDResEd::ETextSyms::Flyover), 0, 0,  { L"", L"", L"", L"Flyover", L"ETextSyms::Flyover", L"" } }
  , {  tCIDLib::TInt4(tCIDResEd::ETextSyms::Text), 0, 0,  { L"", L"", L"", L"Text", L"ETextSyms::Text", L"" } }

};

static TEnumMap emapETextSyms
(
     L"ETextSyms"
     , 3
     , kCIDLib::False
     , aeitemValues_ETextSyms
     , nullptr
     , tCIDLib::TCard4(tCIDResEd::ETextSyms::Count)
);

const TString& tCIDResEd::strXlatETextSyms(const tCIDResEd::ETextSyms eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapETextSyms.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDResEd::ETextSyms tCIDResEd::eXlatETextSyms(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDResEd::ETextSyms(emapETextSyms.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDResEd::ETextSyms operator++(tCIDResEd::ETextSyms& eVal, int)
{
    tCIDResEd::ETextSyms eTmp = eVal;
    eVal = tCIDResEd::ETextSyms(int(eVal)+1);
    return eTmp;
}

tCIDLib::TBoolean tCIDResEd::bIsValidEnum(const tCIDResEd::ETextSyms eVal)
{
    return emapETextSyms.bIsValidEnum(tCIDLib::TCard4(eVal));

}


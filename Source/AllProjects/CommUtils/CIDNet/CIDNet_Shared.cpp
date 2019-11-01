// ----------------------------------------------------------------------------
//  FILE: CIDNet_Shared.cpp
//  DATE: Fri, Nov 01 16:40:14 2019 -0400
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "CIDNet_.hpp"



static TEnumMap::TEnumValItem aeitemValues_EHTTPAuthTypes[2] = 
{
    {  tCIDLib::TInt4(tCIDNet::EHTTPAuthTypes::Basic), 0, 0,  { L"", L"", L"", L"Basic", L"EHTTPAuthTypes::Basic", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPAuthTypes::Digest), 0, 0,  { L"", L"", L"", L"Digest", L"EHTTPAuthTypes::Digest", L"" } }

};

static TEnumMap emapEHTTPAuthTypes
(
     L"EHTTPAuthTypes"
     , 2
     , kCIDLib::False
     , aeitemValues_EHTTPAuthTypes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::EHTTPAuthTypes::Count)
);

const TString& tCIDNet::strLoadEHTTPAuthTypes(const tCIDNet::EHTTPAuthTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEHTTPAuthTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
const TString& tCIDNet::strXlatEHTTPAuthTypes(const tCIDNet::EHTTPAuthTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEHTTPAuthTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDNet::EHTTPAuthTypes tCIDNet::eXlatEHTTPAuthTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::EHTTPAuthTypes(emapEHTTPAuthTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::EHTTPAuthTypes eVal)
{
    return emapEHTTPAuthTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMailAuthTypes[3] = 
{
    {  tCIDLib::TInt4(tCIDNet::EMailAuthTypes::None), 0, 0,  { L"", L"", L"", L"None", L"EMailAuthTypes::None", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EMailAuthTypes::SMTP), 0, 0,  { L"", L"", L"", L"SMTP", L"EMailAuthTypes::SMTP", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EMailAuthTypes::POPFirst), 0, 0,  { L"", L"", L"", L"POPFirst", L"EMailAuthTypes::POPFirst", L"" } }

};

static TEnumMap emapEMailAuthTypes
(
     L"EMailAuthTypes"
     , 3
     , kCIDLib::False
     , aeitemValues_EMailAuthTypes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::EMailAuthTypes::Count)
);

const TString& tCIDNet::strLoadEMailAuthTypes(const tCIDNet::EMailAuthTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMailAuthTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
const TString& tCIDNet::strXlatEMailAuthTypes(const tCIDNet::EMailAuthTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMailAuthTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDNet::EMailAuthTypes tCIDNet::eXlatEMailAuthTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::EMailAuthTypes(emapEMailAuthTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::EMailAuthTypes eVal)
{
    return emapEMailAuthTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EHTTPCodes[6] = 
{
    {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::Unknown), 0, 0,  { L"", L"", L"", L"Unknown", L"EHTTPCodes::Unknown", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::Info), 0, 0,  { L"", L"", L"", L"Info", L"EHTTPCodes::Info", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::Success), 0, 0,  { L"", L"", L"", L"Success", L"EHTTPCodes::Success", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::Redirect), 0, 0,  { L"", L"", L"", L"Redirect", L"EHTTPCodes::Redirect", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::ClientErr), 0, 0,  { L"", L"", L"", L"ClientErr", L"EHTTPCodes::ClientErr", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EHTTPCodes::SrvErr), 0, 0,  { L"", L"", L"", L"SrvErr", L"EHTTPCodes::SrvErr", L"" } }

};

static TEnumMap emapEHTTPCodes
(
     L"EHTTPCodes"
     , 6
     , kCIDLib::False
     , aeitemValues_EHTTPCodes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::EHTTPCodes::Count)
);

const TString& tCIDNet::strLoadEHTTPCodes(const tCIDNet::EHTTPCodes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEHTTPCodes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
const TString& tCIDNet::strXlatEHTTPCodes(const tCIDNet::EHTTPCodes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEHTTPCodes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDNet::EHTTPCodes tCIDNet::eXlatEHTTPCodes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::EHTTPCodes(emapEHTTPCodes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDNet::EHTTPCodes eVal)
{
    strmTar << emapEHTTPCodes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::EHTTPCodes eVal)
{
    return emapEHTTPCodes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EJSONVTypes[7] = 
{
    {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::Array), 0, 0,  { L"", L"", L"", L"Array", L"EJSONVTypes::Array", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::False), 0, 0,  { L"", L"", L"", L"False", L"EJSONVTypes::False", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::Null), 0, 0,  { L"", L"", L"", L"Null", L"EJSONVTypes::Null", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::Number), 0, 0,  { L"", L"", L"", L"Number", L"EJSONVTypes::Number", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::Object), 0, 0,  { L"", L"", L"", L"Object", L"EJSONVTypes::Object", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::String), 0, 0,  { L"", L"", L"", L"String", L"EJSONVTypes::String", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EJSONVTypes::True), 0, 0,  { L"", L"", L"", L"True", L"EJSONVTypes::True", L"" } }

};

static TEnumMap emapEJSONVTypes
(
     L"EJSONVTypes"
     , 7
     , kCIDLib::False
     , aeitemValues_EJSONVTypes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::EJSONVTypes::Count)
);

const TString& tCIDNet::strLoadEJSONVTypes(const tCIDNet::EJSONVTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEJSONVTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
const TString& tCIDNet::strXlatEJSONVTypes(const tCIDNet::EJSONVTypes eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEJSONVTypes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDNet::EJSONVTypes tCIDNet::eXlatEJSONVTypes(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::EJSONVTypes(emapEJSONVTypes.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::EJSONVTypes eVal)
{
    return emapEJSONVTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ELogFlags[5] = 
{
    {  tCIDLib::TInt4(tCIDNet::ELogFlags::CoreParser), 0, 0,  { L"", L"CIDNet/CoreParser", L"", L"CoreParser", L"ELogFlags::CoreParser", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ELogFlags::HTTPClient), 0, 0,  { L"", L"CIDNet/HTTPClient", L"", L"HTTPClient", L"ELogFlags::HTTPClient", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ELogFlags::JSON), 0, 0,  { L"", L"CIDNet/JSON", L"", L"JSON", L"ELogFlags::JSON", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ELogFlags::SMTP), 0, 0,  { L"", L"CIDNet/SMTP", L"", L"SMTP", L"ELogFlags::SMTP", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ELogFlags::XMLURLEntitySrc), 0, 0,  { L"", L"CIDNet/XMLURLEntitySrc", L"", L"XMLURLEntitySrc", L"ELogFlags::XMLURLEntitySrc", L"" } }

};

static TEnumMap emapELogFlags
(
     L"ELogFlags"
     , 5
     , kCIDLib::False
     , aeitemValues_ELogFlags
     , nullptr
     , tCIDLib::TCard4(tCIDNet::ELogFlags::Count)
);

const TString& tCIDNet::strAltXlatELogFlags(const tCIDNet::ELogFlags eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapELogFlags.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::AltText, bThrowIfNot);
}

tCIDNet::ELogFlags tCIDNet::eAltXlatELogFlags(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::ELogFlags(emapELogFlags.i4MapEnumText(strVal, TEnumMap::ETextVals::AltText, bThrowIfNot));
}

const TString& tCIDNet::strLoadELogFlags(const tCIDNet::ELogFlags eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapELogFlags.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}
const TString& tCIDNet::strXlatELogFlags(const tCIDNet::ELogFlags eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapELogFlags.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDNet::ELogFlags tCIDNet::eXlatELogFlags(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDNet::ELogFlags(emapELogFlags.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::ELogFlags eVal)
{
    return emapELogFlags.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ENetPReadRes[10] = 
{
    {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::Success), 0, 0,  { L"", L"", L"", L"Success", L"ENetPReadRes::Success", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::BadFirstLine), 0, 0,  { L"", L"", L"", L"BadFirstLine", L"ENetPReadRes::BadFirstLine", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::BadHdrLine), 0, 0,  { L"", L"", L"", L"BadHdrLine", L"ENetPReadRes::BadHdrLine", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::BadLineCont), 0, 0,  { L"", L"", L"", L"BadLineCont", L"ENetPReadRes::BadLineCont", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::BadProtoVer), 0, 0,  { L"", L"", L"", L"BadProtoVer", L"ENetPReadRes::BadProtoVer", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::BufTooSmall), 0, 0,  { L"", L"", L"", L"BufTooSmall", L"ENetPReadRes::BufTooSmall", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::ContLen), 0, 0,  { L"", L"", L"", L"ContLen", L"ENetPReadRes::ContLen", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::InvalidMsg), 0, 0,  { L"", L"", L"", L"InvalidMsg", L"ENetPReadRes::InvalidMsg", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::PartialMsg), 0, 0,  { L"", L"", L"", L"PartialMsg", L"ENetPReadRes::PartialMsg", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::ENetPReadRes::Timeout), 0, 0,  { L"", L"", L"", L"Timeout", L"ENetPReadRes::Timeout", L"" } }

};

static TEnumMap emapENetPReadRes
(
     L"ENetPReadRes"
     , 10
     , kCIDLib::False
     , aeitemValues_ENetPReadRes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::ENetPReadRes::Count)
);

TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDNet::ENetPReadRes eVal)
{
    strmTar << emapENetPReadRes.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::ENetPReadRes eVal)
{
    return emapENetPReadRes.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EReadTypes[2] = 
{
    {  tCIDLib::TInt4(tCIDNet::EReadTypes::Client), 0, 0,  { L"", L"", L"", L"Client", L"EReadTypes::Client", L"" } }
  , {  tCIDLib::TInt4(tCIDNet::EReadTypes::Server), 0, 0,  { L"", L"", L"", L"Server", L"EReadTypes::Server", L"" } }

};

static TEnumMap emapEReadTypes
(
     L"EReadTypes"
     , 2
     , kCIDLib::False
     , aeitemValues_EReadTypes
     , nullptr
     , tCIDLib::TCard4(tCIDNet::EReadTypes::Count)
);

tCIDLib::TBoolean tCIDNet::bIsValidEnum(const tCIDNet::EReadTypes eVal)
{
    return emapEReadTypes.bIsValidEnum(tCIDLib::TCard4(eVal));

}


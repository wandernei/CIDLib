//
// FILE NAME: CIDSChan.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 11/11/2104
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2019
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and
//  the author (Dean Roddey.) It is licensed under the MIT Open Source
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main public header for the facility. It is the single point
//  of contact for the outside world. By including it, they get what we
//  have to offer.
//
//  This facility provides secure sockets functionality. This guy has per-platfrom
//  code that implements the secure channel stuff. Currently there is only a Win32
//  version, so this guy is only built on Win32 for now.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//
#pragma once


// ---------------------------------------------------------------------------
//  Set up our import/export attributes
// ---------------------------------------------------------------------------
#if     defined(PROJ_CIDSCHAN)
#define CIDSCHANEXP CID_DLLEXPORT
#else
#define CIDSCHANEXP CID_DLLIMPORT
#endif


// ---------------------------------------------------------------------------
//  Include our underlying headers
// ---------------------------------------------------------------------------
#include    "CIDLib.hpp"
#include    "CIDCrypto.hpp"
#include    "CIDSock.hpp"


// ---------------------------------------------------------------------------
//  Facility types
// ---------------------------------------------------------------------------
namespace tCIDSChan
{
    enum class EKeyTypes
    {
        Public
        , Private
    };
}


// ---------------------------------------------------------------------------
//  Include our public headers
// ---------------------------------------------------------------------------
#include "CIDSChan_ErrorIds.hpp"
#include "CIDSChan_Shared.hpp"
#include "CIDSChan_SChan.hpp"
#include "CIDSChan_DataSrc.hpp"
#include "CIDSChan_ThisFacility.hpp"


// ---------------------------------------------------------------------------
//  Export the facility object lazy evaluator function
// ---------------------------------------------------------------------------
extern CIDSCHANEXP TFacCIDSChan& facCIDSChan();



#ifndef _COR_TYPE_BASIC_TYPES_H_
#define _COR_TYPE_BASIC_TYPES_H_

#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <memory>
#include <functional>
#include <float.h>

#ifdef WIN32
#define THEAD_LOCAL static __declspec(thread)
#else
#define THEAD_LOCAL thread_local
#endif

namespace cor
{

    typedef int RBool;
    typedef float RFloat;
    typedef double RDouble;
    typedef int RInt32;
    typedef unsigned int RUInt32;
    typedef char RChar;
    typedef wchar_t RWChar;
    typedef unsigned char RByte;
    typedef short RInt16;
    typedef unsigned short RUInt16;
    typedef char RInt8;
    typedef unsigned char RUInt8;
    typedef size_t RSize;
    typedef std::string RString;
    typedef std::wstring RWString;
    typedef void* RPointer;
    typedef const void* RCPointer;
    typedef std::stringstream RStringStream;

//#ifdef __CYGWIN__
//    typedef __int64 RInt64;
//    typedef unsigned __int64 RUInt64;
//#elif defined __MINGW32__
//    typedef __int64 RInt64;
//    typedef unsigned __int64 RUInt64;
//#elif defined __GNUC__
#ifdef __GNUC__
    typedef long long int RInt64;
    typedef unsigned long long int RUInt64;
#elif defined WIN32
    typedef __int64 RInt64;
    typedef unsigned __int64 RUInt64;
#else
    typedef long long int RInt64;
    typedef unsigned long long int RUInt64;
#endif

    static const RBool rtrue = 1;
    static const RBool rfalse = 0;

    typedef std::vector<RString> RStringArray;
    typedef std::vector<RByte> RByteArray;
    typedef std::vector<RChar> RCharArray;
    typedef std::vector<RWChar> RWCharArray;
    typedef std::vector<RInt32> RInt32Array;
    typedef std::vector<RInt16> RInt16Array;
    typedef std::vector<RBool> RBoolArray;
    typedef std::vector<RFloat> RFloatArray;
    typedef std::vector<RDouble> RDoubleArray;
    typedef std::vector<RSize> RSizeArray;

    typedef RBool* RBoolPtr;
    typedef RFloat* RFloatPtr;
    typedef RDouble* RDoublePtr;
    typedef RInt32* RInt32Ptr;
    typedef RUInt32* RUInt32Ptr;
    typedef RChar* RCharPtr;
    typedef RWChar* RWCharPtr;
    typedef RByte* RBytePtr;
    typedef RInt16* RInt16Ptr;
    typedef RUInt16* RUInt16Ptr;
    typedef RInt8* RInt8Ptr;
    typedef RUInt8* RUInt8Ptr;
    typedef RSize* RSizePtr;

    typedef std::shared_ptr<void> AnySP;
    typedef std::weak_ptr<void> AnyWP;

    static const RDouble PI = 3.14159265358979323846;
    static const RFloat FloatMax = FLT_MAX;
}

#endif

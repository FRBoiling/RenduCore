#ifndef RENDU_BANNER_H
#define RENDU_BANNER_H

#include "Define.h"

namespace Rendu
{
    namespace Banner
    {
        RENDU_COMMON_API void Show(char const* applicationName, void(*log)(char const* text), void(*logExtraInfo)());
    }
}

#endif // RENDU_BANNER_H

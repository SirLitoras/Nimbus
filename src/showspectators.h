#pragma once

#include "settings.h"
#include "SDK/SDK.h"
#include "interfaces.h"
#include "entity.h"

namespace ShowSpectators
{
	std::list<int> GetObservervators(C_BaseEntity* pEntity);
}
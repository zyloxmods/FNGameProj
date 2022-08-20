#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPrimitiveCrosstalkFunctions : uint8 
{
	SendTaggedObjectPayload,
	SendTaggedStringPayload,
	SendTaggedIntPayload,
	GetTaggedObjectPayload,
	GetTaggedStringPayload,
	GetTaggedIntPayload,
	BindNoParamEventToTaggedDelegate,
	UnbindNoParamEventFromTaggedDelegate,
	UnbindObjectCallbacksFromAllTaggedDelegates,
	EPrimitiveCrosstalkFunctions_MAX,
};

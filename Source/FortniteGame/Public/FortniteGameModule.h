#pragma once
#include "CoreMinimal.h"
DECLARE_LOG_CATEGORY_EXTERN(LogFortniteGame, Log, All);

class FFortniteGameModule final : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override;
};
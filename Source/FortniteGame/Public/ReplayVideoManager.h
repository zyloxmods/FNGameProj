#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayVideoManager.generated.h"

UCLASS(Blueprintable, Within=FortGameInstance)
class FORTNITEGAME_API UReplayVideoManager : public UObject {
    GENERATED_BODY()
public:
    UReplayVideoManager();
};


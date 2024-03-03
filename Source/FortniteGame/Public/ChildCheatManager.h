#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChildCheatManager.generated.h"

UCLASS(Blueprintable, Within=FortCheatManager)
class FORTNITEGAME_API UChildCheatManager : public UObject {
    GENERATED_BODY()
public:
    UChildCheatManager();
};


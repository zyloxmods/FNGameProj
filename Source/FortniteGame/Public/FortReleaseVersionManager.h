#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortReleaseVersionManager.generated.h"

UCLASS(Blueprintable, Config=FortReleaseVersion)
class FORTNITEGAME_API UFortReleaseVersionManager : public UObject {
    GENERATED_BODY()
public:
    UFortReleaseVersionManager();
};


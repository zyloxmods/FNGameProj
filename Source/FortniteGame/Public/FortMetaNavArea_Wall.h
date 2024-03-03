#pragma once
#include "CoreMinimal.h"
#include "FortMetaNavArea.h"
#include "FortMetaNavArea_Wall.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMetaNavArea_Wall : public UFortMetaNavArea {
    GENERATED_BODY()
public:
    UFortMetaNavArea_Wall();
};


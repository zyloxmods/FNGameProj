#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IslandInspectorCommand.generated.h"

UCLASS(Abstract, Blueprintable)
class UIslandInspectorCommand : public UObject {
    GENERATED_BODY()
public:
    UIslandInspectorCommand();
};


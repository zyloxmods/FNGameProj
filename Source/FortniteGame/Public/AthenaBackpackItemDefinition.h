#pragma once
#include "CoreMinimal.h"
#include "AthenaCharacterPartItemDefinition.h"
#include "AthenaBackpackItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAthenaBackpackItemDefinition : public UAthenaCharacterPartItemDefinition {
    GENERATED_BODY()
public:
    UAthenaBackpackItemDefinition();

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaBackpack", GetFName());
    }
};


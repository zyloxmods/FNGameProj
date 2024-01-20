#pragma once
#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "FortBuildingItemDefinition.generated.h"

class UBuildingEditModeMetadata;

UCLASS(Blueprintable, MinimalAPI)
class UFortBuildingItemDefinition : public UFortWeaponItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingEditModeMetadata> BuildingMetaData;
    
public:
    UFortBuildingItemDefinition();
};


#pragma once
#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "FortBuildingItemDefinition.generated.h"

class UBuildingEditModeMetadata;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UFortBuildingItemDefinition : public UFortWeaponItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingEditModeMetadata> BuildingMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> InactivePreviewImage;
    
public:
    UFortBuildingItemDefinition(const FObjectInitializer& ObjectInitializer);
};


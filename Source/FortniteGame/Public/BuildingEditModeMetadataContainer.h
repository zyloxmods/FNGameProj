#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BuildingEditModeMetadataContainer.generated.h"

class UBuildingEditModeMetadata;

UCLASS(Blueprintable, Config=Game)
class UBuildingEditModeMetadataContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata*> MetadataCollection;
    
    UBuildingEditModeMetadataContainer();
};


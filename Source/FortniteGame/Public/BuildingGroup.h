#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EBuildingFoundationType.h"
#include "FortMapData.h"
#include "BuildingGroup.generated.h"

class UBuildingGroup;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UBuildingGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingGroup* FallbackGroup;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingFoundationType> FoundationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllBuildingLevelTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMapData> BuildingLevelData;
    
    UBuildingGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMapNames(TArray<FString>& AllMaps) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ItemWrapPreviewEntry.h"
#include "ItemWrapSlotMetadata.h"
#include "FortItemWrapMappingData.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemWrapMappingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemWrapSlotMetadata> SlotMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemWrapPreviewEntry> NonSlotPreviewList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MasterVehicleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MasterWeaponMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DoNotApplyWrapsTag;
    
    UFortItemWrapMappingData();
};


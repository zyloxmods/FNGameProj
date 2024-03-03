#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CharmPreviewEntry.h"
#include "CharmSlotMetadata.h"
#include "FortCharmsMappingData.generated.h"

UCLASS(Blueprintable)
class UFortCharmsMappingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharmSlotMetadata> SlotMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharmPreviewEntry> NonSlotPreviewList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DoNotApplyCharmsTag;
    
    UFortCharmsMappingData();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortItemType.h"
#include "ItemWrapPreviewEntry.h"
#include "ItemWrapSlotMetadata.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemWrapSlotMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MatchCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemWrapPreviewEntry> PreviewList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType PreviewListItemDefinitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewListSortOrder;
    
    FORTNITEGAME_API FItemWrapSlotMetadata();
};


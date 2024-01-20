#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemWrapPreviewEntry.h"
#include "ItemWrapSlotMetadata.generated.h"

USTRUCT(BlueprintType)
struct FItemWrapSlotMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MatchCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemWrapPreviewEntry> PreviewList;
    
    FORTNITEGAME_API FItemWrapSlotMetadata();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharmPreviewEntry.h"
#include "EFortCustomPartType.h"
#include "CharmSlotMetadata.generated.h"

USTRUCT(BlueprintType)
struct FCharmSlotMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomPartType AttachToPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WeaponCharm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackPresentedCharm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MatchCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharmPreviewEntry> PreviewList;
    
    FORTNITEGAME_API FCharmSlotMetadata();
};


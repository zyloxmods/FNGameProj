#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCrewSlotInformation.generated.h"

USTRUCT(BlueprintType)
struct FFortCrewSlotInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SlotTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotStatContribution;
    
    FORTNITEGAME_API FFortCrewSlotInformation();
};


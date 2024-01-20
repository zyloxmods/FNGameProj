#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortItemType.h"
#include "ESquadSlotType.h"
#include "HomebaseSquadAttributeBonus.h"
#include "HomebaseSquadSlot.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHomebaseSquadSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> ValidSlottableItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHomebaseSquadAttributeBonus> SlottingBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* PersonalityMatchBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESquadSlotType SlotType;
    
    FHomebaseSquadSlot();
};


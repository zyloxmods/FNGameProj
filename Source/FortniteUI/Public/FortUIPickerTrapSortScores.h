#pragma once
#include "CoreMinimal.h"
#include "FortUIPickerTrapSortScores.generated.h"

USTRUCT(BlueprintType)
struct FFortUIPickerTrapSortScores {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UniqueTrapBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlottedBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FavoriteBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTrackedTrapBonusTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedTrapBonusMultiplier;
    
    FORTNITEUI_API FFortUIPickerTrapSortScores();
};


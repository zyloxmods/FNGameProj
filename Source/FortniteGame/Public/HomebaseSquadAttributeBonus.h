#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "AttributeSet.h"
#include "HomebaseSquadAttributeBonus.generated.h"

USTRUCT(BlueprintType)
struct FHomebaseSquadAttributeBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AttributeGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle BonusCurve;
    
    FORTNITEGAME_API FHomebaseSquadAttributeBonus();
};


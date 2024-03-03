#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortAIPawnUpgradeData.generated.h"

class UFortGameplayModifierItemDefinition;

USTRUCT(BlueprintType)
struct FFortAIPawnUpgradeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle SpawnPointsMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle LifespanMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ScoreMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameplayModifierItemDefinition* ModifierDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> AdditionalModifiers;
    
public:
    FORTNITEGAME_API FFortAIPawnUpgradeData();
};


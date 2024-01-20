#pragma once
#include "CoreMinimal.h"
#include "SupplyDropSubPhaseModifier.h"
#include "SupplyDropModifierData.generated.h"

USTRUCT(BlueprintType)
struct FSupplyDropModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SupplyDropID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSupplyDropSubPhaseModifier> ModifierList;
    
    FORTNITEGAME_API FSupplyDropModifierData();
};


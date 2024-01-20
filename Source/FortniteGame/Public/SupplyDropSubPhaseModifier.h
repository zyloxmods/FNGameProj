#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "SupplyDropSubPhaseModifier.generated.h"

USTRUCT(BlueprintType)
struct FSupplyDropSubPhaseModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase GamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubPhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInPreviousZonePercentChance;
    
    FORTNITEGAME_API FSupplyDropSubPhaseModifier();
};


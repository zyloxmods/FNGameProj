#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "NitrogenPickupItemToDropOnDeath.generated.h"

class ANitrogenPickup;
class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FNitrogenPickupItemToDropOnDeath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* PickupItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenPickup> PickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeBeforeDespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bHidePickupForDyingPlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalableFloat> PlacementBasedPickupDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TossDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinTeamScoreRequiredToDrop;
    
    NITROGENRUNTIME_API FNitrogenPickupItemToDropOnDeath();
};


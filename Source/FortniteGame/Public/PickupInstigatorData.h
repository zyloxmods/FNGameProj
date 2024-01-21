#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "PickupInstigatorData.generated.h"

class AFortPickup;

USTRUCT(BlueprintType)
struct FPickupInstigatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TargetAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccentColorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPickup> OverridePickupClass;
    
    FORTNITEGAME_API FPickupInstigatorData();
};


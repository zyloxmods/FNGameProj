#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapFloor_TargetDummy.generated.h"

UCLASS(Blueprintable)
class ABuildingTrapFloor_TargetDummy : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPointLocations;
    
    ABuildingTrapFloor_TargetDummy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


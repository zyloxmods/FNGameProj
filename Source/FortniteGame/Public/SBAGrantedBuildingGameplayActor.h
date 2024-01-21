#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "TeamStrategicBuildingHandle.h"
#include "SBAGrantedBuildingGameplayActor.generated.h"

class AStrategicBuildingActor;

UCLASS(Blueprintable, MinimalAPI)
class ASBAGrantedBuildingGameplayActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTeamStrategicBuildingHandle OwningSBAHandle;
    
public:
    ASBAGrantedBuildingGameplayActor();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AStrategicBuildingActor* GetOwnerStrategicBuildingActor() const;
    
};


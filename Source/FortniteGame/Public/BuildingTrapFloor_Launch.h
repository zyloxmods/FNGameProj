#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapFloor_Launch.generated.h"

class AActor;
class UForceFeedbackEffect;

UCLASS(Blueprintable)
class ABuildingTrapFloor_Launch : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UForceFeedbackEffect> ForceFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceFeedbackName;
    
public:
    ABuildingTrapFloor_Launch();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetImpulseDirection(AActor* LaunchingActor);
    
};


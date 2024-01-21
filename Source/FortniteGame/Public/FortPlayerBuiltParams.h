#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "FortMissionEventParams.h"
#include "FortPlayerBuiltParams.generated.h"

class ABuildingActor;
class AFortPlayerController;
class UFortPlayerBuiltParams;

UCLASS(Blueprintable)
class UFortPlayerBuiltParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBuildingType BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* Builder;
    
    UFortPlayerBuiltParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(ABuildingActor* _Building, EFortBuildingType _BuildingType, AFortPlayerController* _Builder, UFortPlayerBuiltParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(ABuildingActor*& _Building, EFortBuildingType& _BuildingType, AFortPlayerController*& _Builder);
    
};


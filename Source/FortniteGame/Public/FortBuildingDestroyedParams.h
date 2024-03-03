#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "FortMissionEventParams.h"
#include "FortBuildingDestroyedParams.generated.h"

class ABuildingActor;
class AController;
class UFortBuildingDestroyedParams;

UCLASS(Blueprintable)
class UFortBuildingDestroyedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Destroyer;
    
    UFortBuildingDestroyedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AController* _Destroyer, UFortBuildingDestroyedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AController*& _Destroyer);
    
};


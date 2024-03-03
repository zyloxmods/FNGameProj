#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "FortMissionEventParams.h"
#include "FortBuildingUpgradedParams.generated.h"

class ABuildingActor;
class AFortPlayerController;
class UFortBuildingUpgradedParams;

UCLASS(Blueprintable)
class UFortBuildingUpgradedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* OriginalBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* NewBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* Editor;
    
    UFortBuildingUpgradedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingUpgradedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor);
    
};


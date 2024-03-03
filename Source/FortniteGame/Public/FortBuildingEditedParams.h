#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "FortMissionEventParams.h"
#include "FortBuildingEditedParams.generated.h"

class ABuildingActor;
class AFortPlayerController;
class UFortBuildingEditedParams;

UCLASS(Blueprintable)
class UFortBuildingEditedParams : public UFortMissionEventParams {
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
    
    UFortBuildingEditedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingEditedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor);
    
};


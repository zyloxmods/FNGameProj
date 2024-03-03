#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_Harvest.generated.h"

class AActor;
class ABuildingProp;
class AFortAthenaTutorialMarker;
class AFortStaticMeshActor;
class ATriggerBox;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Harvest : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaTutorialMarker* HarvestMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorTargetAppearDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DoorTargetVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBox* HarvestTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortStaticMeshActor* BlockerHarvest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HarvestHUDElementTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingProp* BuildingToDestroy;
    
    AFortAthenaTutorial_Harvest();
private:
    UFUNCTION(BlueprintCallable)
    void OnBuildingDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapHarvestTriggerBox(AActor* OverlappedActor, AActor* OtherActor);
    
};


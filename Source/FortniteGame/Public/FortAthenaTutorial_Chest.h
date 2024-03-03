#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaTutorial_Chest.generated.h"

class AActor;
class ABuildingContainer;
class ATriggerBox;
class UFortItemDefinition;
class UUserWidget;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Chest : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingContainer* Chest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ItemsToCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractButtonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChestLookMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InteractButtonHighlightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBox* TriggerBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowEasyInteractIconDelay;
    
public:
    AFortAthenaTutorial_Chest();
    UFUNCTION(BlueprintCallable)
    void OnPlayerEntersTrigger(AActor* OverlappedActor, AActor* OtherActor);
    
};


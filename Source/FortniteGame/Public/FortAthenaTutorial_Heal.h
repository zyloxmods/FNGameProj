#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_Heal.generated.h"

class AActor;
class UFortItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Heal : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ItemsToCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LootPositionMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* MedkitItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ShieldPotionItem;
    
    AFortAthenaTutorial_Heal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnAmbushLoot();
    
};


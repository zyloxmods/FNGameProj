#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_HighTowerAbilityIntro.generated.h"

class AFortPlayerControllerZone;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_HighTowerAbilityIntro : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowAbilityIntroTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyOnce;
    
public:
    AFortAthenaMutator_HighTowerAbilityIntro();
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginSkydiveFromBus(AFortPlayerControllerZone* PlayerController);
    
};


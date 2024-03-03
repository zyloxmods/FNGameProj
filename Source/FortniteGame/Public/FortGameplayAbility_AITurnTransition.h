#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility.h"
#include "TurnTransitionData.h"
#include "FortGameplayAbility_AITurnTransition.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_AITurnTransition : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTurnTransitionYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTurnTransitionData> TransitionPriorityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickedMontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickedTurnYawRotationRate;
    
public:
    UFortGameplayAbility_AITurnTransition();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTurnTransitionMontageSectionNameAndYawRotationRate(FName MontageSectionName, float& TurnYawRotationRate) const;
    
};


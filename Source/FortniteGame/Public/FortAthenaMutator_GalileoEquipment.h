#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_OverrideInventoryOnce.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_GalileoEquipment.generated.h"

class AFortPlayerState;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_GalileoEquipment : public AFortAthenaMutator_OverrideInventoryOnce {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StopDropsByApplyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStopDropsAfterApplying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotToSwapToAfterGrant;
    
public:
    AFortAthenaMutator_GalileoEquipment();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MarkPlayerLoadoutChoice(AFortPlayerState* State, int32 Choice);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyPlayerLoadout(AFortPlayerState* State);
    
};


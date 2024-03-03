#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortEventLevelNavigationActor.h"
#include "FortNavigationActor_EventGraphItem.generated.h"

class UAthenaRewardEventGraph;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortNavigationActor_EventGraphItem : public AFortEventLevelNavigationActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParentNavObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LevelDefinedNodeToRollFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag NodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaRewardEventGraph* RewardGraphToReprisent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitializedCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanNavigateToWhenClaimed;
    
public:
    AFortNavigationActor_EventGraphItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayMeshToOpened();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNodeTag();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CosmeticVariantAssets_PostLoad();
    
};


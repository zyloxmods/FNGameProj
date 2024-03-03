#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "BattlePassViewRewardListEntry.generated.h"

class UBattlePassViewRewardData;
class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassViewRewardListEntry : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassViewRewardData* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TierLevel;
    
public:
    UBattlePassViewRewardListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggerTimeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggerTimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetup(UBattlePassViewRewardData* InReward);
    
    
    // Fix for true pure virtual functions not being implemented
};


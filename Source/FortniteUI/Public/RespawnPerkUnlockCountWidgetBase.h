#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "RespawnPerkUnlockCountWidgetBase.generated.h"

class AFortAthenaMutator_SpyRumble;
class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class URespawnPerkUnlockCountWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SpyRumble* CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_RequiredKills;
    
public:
    URespawnPerkUnlockCountWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewTechAvailable(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleRequiredKillsForPerkUnlockChanged(int32 KillCount);
    
};


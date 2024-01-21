#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SeasonPassLevelWidget.generated.h"

class UFortSeasonPassLevelInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USeasonPassLevelWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSeasonPassLevelInfo* LevelInfo;
    
public:
    USeasonPassLevelWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigateTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttemptClaimFinished(bool FreeClaimed, bool PaidClaimed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSeasonPassLevelInfo* GetLevelInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void AttemptClaim();
    
};


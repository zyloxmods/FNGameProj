#pragma once
#include "CoreMinimal.h"
#include "XPUIEvent.h"
#include "FortHUDElementWidget.h"
#include "AthenaXPBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaXPBarWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpWaitingToBeEarned;
    
public:
    UAthenaXPBarWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRestXP(int32 RestXpRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBar(int32 XpToGain, int32 CurrentDisplayXp, int32 XpToLevel, int32 CurrentLevel, int32 TotalRestXpRemaining, bool bIsXPBarOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPUIEvent& XPEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredWithQuestManager();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUp(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnForwardedXPEvent(const FXPUIEvent& XPEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitilizeBar(int32 CurrentLevel, int32 CurrentXp, int32 TotalXp);
    
    UFUNCTION(BlueprintCallable)
    void DoneUpdatingBar();
    
};


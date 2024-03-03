#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SeasonPassPageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USeasonPassPageWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    USeasonPassPageWidget();
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldPlayInto(int32 FirstLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenShown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnsSeasonPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NavigatePageRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NavigatePageLeft();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeasonNumber() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ContainsLevel(int32 Level);
    
};


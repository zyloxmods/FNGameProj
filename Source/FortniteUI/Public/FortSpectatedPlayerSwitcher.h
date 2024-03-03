#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PotentialSpectatorTarget.h"
#include "FortSpectatedPlayerSwitcher.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortSpectatedPlayerSwitcher : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayersToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPotentialSpectatorTarget> DisplayedTargets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPotentialSpectatorTarget> AvailableTargets;
    
public:
    UFortSpectatedPlayerSwitcher();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayedTargetsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusWidget();
    
};


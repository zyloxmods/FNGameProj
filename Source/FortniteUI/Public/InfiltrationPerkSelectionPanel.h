#pragma once
#include "CoreMinimal.h"
#include "PerkMutatorData.h"
#include "FortActivatablePanelLTM.h"
#include "InfiltrationPerkSelectionPanel.generated.h"

class AFortAthenaMutator_PerkSystemMutator;
class UOverlay;
class UPerkIntroScreenWidget;
class UPerkSelectionEntryWidget;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInfiltrationPerkSelectionPanel : public UFortActivatablePanelLTM {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_PerkSystemMutator> CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPerkSelectionEntryWidget*> EntryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkIntroScreenWidget* PerkIntroScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkMutatorData MutatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PerkIntroOverlay;
    
public:
    UInfiltrationPerkSelectionPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBackgroundImage(const bool bShouldShowBackground);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartClosingWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeRemaining(float TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReRollCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionMade(UPerkSelectionEntryWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnReRollSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPerkIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void AttempShowPerkIntro();
    
};


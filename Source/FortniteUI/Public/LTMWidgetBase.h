#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "Templates/SubclassOf.h"
#include "LTMWidgetBase.generated.h"

class AFortGameplayMutator;
class AFortPlayerStateAthena;
class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API ULTMWidgetBase : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortGameplayMutator> MutatorClassToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
public:
    ULTMWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompedByOtherWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_HasActiveContent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetViewingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetViewingPlayerState() const;
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};


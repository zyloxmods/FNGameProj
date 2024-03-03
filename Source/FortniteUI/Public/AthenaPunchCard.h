#pragma once
#include "CoreMinimal.h"
#include "CardSlotMedalData.h"
#include "XPUIEvent.h"
#include "EPunchCardLocation.h"
#include "EPunchType.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "Templates/SubclassOf.h"
#include "AthenaPunchCard.generated.h"

class UAthenaChallengeCountdownDisplay;
class UFortAccoladeItemDefinition;
class UFortMcpProfileAthena;
class UUniformGridPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPunchCard : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPunchType PunchCardLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPunchCardNumForNoPunchCardOnMcp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText XpSourceDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAccoladeItemDefinition*> MedalsToPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPunchCardLocation PunchCardLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* GridPanel_Accolades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Timer_Countdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Timer_FrontendCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCardSlotMedalData> MedalPunchData;
    
public:
    UAthenaPunchCard();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimers();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePunchCardFromItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePunchCard(UFortMcpProfileAthena* McpProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCardCompleted(bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    void TryToShowNextMedal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunIntroAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPUIEvent& XPEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnProfileUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MedalFInishedPlacing();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MedalEarned(const UFortAccoladeItemDefinition* Medal);
    
    UFUNCTION(BlueprintCallable)
    void InternalMedalPlacementFinished(int32 SlotIndex, float XpValueForSlot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedPlacingMedals(bool bPlayOutro);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};


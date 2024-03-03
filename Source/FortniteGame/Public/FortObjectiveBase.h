#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortMissionAudibility.h"
#include "EFortMissionVisibilityOverride.h"
#include "EFortObjectiveRequirement.h"
#include "EFortObjectiveStatus.h"
#include "EFortRewardType.h"
#include "EFortTeam.h"
#include "FortMissionState.h"
#include "OnObjectiveIsVisibilityOverrideChangedDelegate.h"
#include "OnObjectiveIsVisibleChangedDelegate.h"
#include "OnObjectiveStatusChangedDelegate.h"
#include "FortObjectiveBase.generated.h"

class AFortMission;
class UFortBadgeItemDefinition;
class UFortMissionTimerComponent;
class UFortWorldItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AFortObjectiveBase : public AFortMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UFortBadgeItemDefinition* ObjectiveRewardBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItemDefinition*> ItemsToGiveOnObjectiveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartPlayingOnMissionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptsMissionEventsWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ObjectiveHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectiveAnalyticsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortObjectiveRequirement::Type> MissionRequirement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_bIsObjectiveVisible, meta=(AllowPrivateAccess=true))
    bool bIsObjectiveVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveVisibilityOverride, meta=(AllowPrivateAccess=true))
    EFortMissionVisibilityOverride VisibilityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsProgressBarHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    EFortMissionAudibility ObjectiveAudiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelevantToSpecificTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeam::Type> RelevantTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveStatus, meta=(AllowPrivateAccess=true))
    EFortObjectiveStatus ObjectiveStatus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMissionTimerComponent* TimerComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveStatusChanged OnObjectiveStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveIsVisibleChanged OnObjectiveVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveIsVisibilityOverrideChanged OnObjectiveVisibilityOverrideChanged;
    
    AFortObjectiveBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnpauseObjectiveTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopObjective(EFortObjectiveStatus Status, const FString& Description, UFortBadgeItemDefinition* ExtraBadgeToGrant);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartPlayingObjective();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUIVisibilityOverride(EFortMissionVisibilityOverride InVisibilityOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUiVisibility(bool bInIsObjectiveVisible);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetObjectiveTimer(const FString& FunctionName, float TimerLength, bool bStartPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseObjectiveTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveVisibilityOverride();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsObjectiveVisible();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnGenericObjectiveEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelevantToTeam(uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelevantToASpecificTeam() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveTimerPaused() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GrantRewardsByTag(const FGameplayTag RewardTag, TEnumAsByte<EFortRewardType::Type> RewardType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMissionTimerComponent* GetTimerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRewardItemsByTag(const FGameplayTag RewardTag, TArray<UFortWorldItemDefinition*>& OutRewardItems);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveTimerTimeRemaining() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveDisplayString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetMissionGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMission* GetMission() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableTick(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearObjectiveTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPostObjectiveLoad();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStartPlaying();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnObjectiveEnd(EFortObjectiveStatus Status);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    FText BlueprintGetProgressBarText(int32 ProgressBarIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    float BlueprintGetProgressBarPercentage(int32 ProgressBarIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    UTexture2D* BlueprintGetProgressBarIcon(int32 ProgressBarIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor BlueprintGetProgressBarColor(int32 ProgressBarIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    FText BlueprintGetObjectiveDisplayText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent, BlueprintPure)
    int32 BlueprintGetNumProgressBars() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttemptMissionSave(const FString& OptionalSaveName);
    
};


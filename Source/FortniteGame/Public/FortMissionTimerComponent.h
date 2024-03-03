#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETimerOverrideSetting.h"
#include "MissionTimeDisplayData.h"
#include "MissionTimerData.h"
#include "OnMissionTimerComponentUpdatedDelegate.h"
#include "OnMissionTimerTimeAddedOrRemovedDelegate.h"
#include "FortMissionTimerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMissionTimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowTimeElapsed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateQuestsTimeElapsed: 1;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionTimerComponentUpdated OnMissionTimerComponentUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionTimerTimeAddedOrRemoved OnMissionTimerTimeAddedOrRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionTimeDisplayData> DisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimerData, meta=(AllowPrivateAccess=true))
    FMissionTimerData TimerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText TimerLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisplayInTimeFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimerVisibilityOverride, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETimerOverrideSetting::Type> TimerVisibilityOverrideSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimerVisibilityOverride, meta=(AllowPrivateAccess=true))
    float TimerVisibilityShowAtEndTime;
    
public:
    UFortMissionTimerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnpauseMissionTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerVisibilityOverrideToShowAtEnd(float ShowTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerVisibilityOverrideSetting(TEnumAsByte<ETimerOverrideSetting::Type> NewVisibilitySetting);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerLabelText(FText NewLabelText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerDisplayFormat(bool bNewDisplayInTimeFormat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionTimer(const FString& FunctionName, float TimerLength, AActor* CallbackActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionTimeElapsedTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetMissionTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseMissionTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerVisibilityOverride();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimerVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionTimerSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionTimerPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTimeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTimerLabelText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionTimerTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionTimerTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionTimeDisplayData GetCorrectTimeDisplayData() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DummyTimer();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearMissionTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddOrRemoveTime(float TimeToAdd);
    
};


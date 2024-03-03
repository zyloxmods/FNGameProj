#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "ECaptureState.h"
#include "ESmoothProgressState.h"
#include "OnCaptureProgressUpdateDelegate.h"
#include "OnCaptureStateChangedEventDelegate.h"
#include "CaptureComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureStateChangedEvent OnCaptureStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureProgressUpdate OnCaptureProgressUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OldSmoothedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothProgressTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressReverseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCaptureSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CaptureSpeedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CaptureSpeedBoostEmoting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NeutralizingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeneutralizingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CaptureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CaptureTimeCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECaptureState PreviousCaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CapturingStateOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 NeutralizingStateOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 StateOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CaptureState, meta=(AllowPrivateAccess=true))
    ECaptureState CaptureState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CaptureProgress, meta=(AllowPrivateAccess=true))
    float CaptureProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SmoothProgressState, meta=(AllowPrivateAccess=true))
    ESmoothProgressState SmoothProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SnapCaptureProgressTimerHandle;
    
public:
    UCaptureComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSmoothProgressStateByCaptureState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateProgressReverseSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateCaptureSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetProgressDecaySpeed(float NewProgressDecaySpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNeutralizingTime(int32 NewNeutralizingSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCaptureTime(float NewCaptureTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCaptureState(ECaptureState NewCaptureState, uint8 TriggerTeamIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCaptureSpeedBoostEmoting(float NewCaptureSpeedBoostEmoting);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCaptureSpeedBoost(float NewCaptureSpeedBoost);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SmoothProgressState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureState(ECaptureState OldCaptureState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CaptureProgress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCaptureStateOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECaptureState GetCaptureState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceCaptureProgress(float NewCaptureProgress);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SavedSpectatorCameras.h"
#include "FortReplaySequenceComponent.generated.h"

class UFortReplayContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortReplaySequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedSpectatorCameras SequenceShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentShotIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortReplayContext* ReplayContext;
    
public:
    UFortReplaySequenceComponent();
    UFUNCTION(BlueprintCallable)
    void RestartSequence();
    
    UFUNCTION(BlueprintCallable)
    void PreviousShot();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVideoExportFinished(bool bSuccess, const FString& Video);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReplayLevelStreamingChanged(bool bIsStreaming);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaybackTimeChanged(float NowTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void NoRecorderVideoFinishedCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    void NextShot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfShotsInSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentShotIndex() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELiveStreamStandaloneBlocked.h"
#include "LiveStreamStandalonePlayer.generated.h"

class UFortStreamMediaSource;
class UFortVideoPlayerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULiveStreamStandalonePlayer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* StreamMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVideoPlayerWidget* VideoPlayerWidget;
    
public:
    ULiveStreamStandalonePlayer();
    UFUNCTION(BlueprintCallable)
    static void UnblockPlayer(ELiveStreamStandaloneBlocked BlockedReason);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    static void SetPIPStartTime(float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetPIPMediaID(const FString& InVideoUID);
    
    UFUNCTION(BlueprintCallable)
    static void SetPIPLive(bool bInLive);
    
    UFUNCTION(BlueprintCallable)
    static void SetPIPCDNDistribution(const TArray<float>& Weights);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPIPState();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRetrieveVideoUrlSuccess(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnRetrieveVideoUrlFailure(const FString& URL);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIsBlocked();
    
    UFUNCTION(BlueprintCallable)
    void FireStandalonePIPAnalytics(bool bInStarted);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckMediaStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    static void BlockPlayer(ELiveStreamStandaloneBlocked BlockedReason);
    
};


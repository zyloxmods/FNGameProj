#pragma once
#include "CoreMinimal.h"
#include "BuildingPropMusicPlayer.h"
#include "EFortMinigameState.h"
#include "BuildingPropPlaygroundMusicPlayer.generated.h"

class AController;
class AFortMinigame;
class UFortGameplayReceiverMessageComponent;
class UFortMinigameLogicComponent;

UCLASS(Blueprintable)
class ABuildingPropPlaygroundMusicPlayer : public ABuildingPropMusicPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMinigameLogicComponent* MinigameLogicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* PlayReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* StopReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringPregame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringGameplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringRoundEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDuringGameEnd;
    
public:
    ABuildingPropPlaygroundMusicPlayer();
protected:
    UFUNCTION(BlueprintCallable)
    void StopReceiver(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void PlayReceiver(AController* TriggerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
    
    UFUNCTION(BlueprintCallable)
    void ConditionallyLoadSongBasedOnMinigameState();
    
};


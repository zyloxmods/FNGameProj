#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_WarmupMovie.generated.h"

class AActor;
class UCommonActivatablePanel;
class UMediaPlayer;
class USoundBase;
class USoundMix;

UCLASS(Blueprintable)
class AFortAthenaMutator_WarmupMovie : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovieLengthSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bServerMovieStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* MovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SkydiveTransitionMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* WarmupMovieMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* WaitingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    AFortAthenaMutator_WarmupMovie();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowMovieWidget(UCommonActivatablePanel* InMovieWidget, UMediaPlayer* InMediaPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushMovieWidget(UCommonActivatablePanel* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovie();
    
    UFUNCTION(BlueprintCallable)
    void OnMediaClosedOrEndReached();
    
};


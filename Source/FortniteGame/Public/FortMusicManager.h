#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortCombatEvents.h"
#include "EFortCombatThresholds.h"
#include "EFortDayPhase.h"
#include "FortInitializationInterface.h"
#include "FortPlayerDeathReport.h"
#include "FortMusicManager.generated.h"

class AFortPlayerController;
class UFortMusicAsset;
class UFortMusicManagerBank;
class UFortMusicVoice;

UCLASS(Blueprintable)
class AFortMusicManager : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* ControllerOwner;
    
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMusicVoice* Voices[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMusicVoice*> VoicesToCleanUp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldReadyCalled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMusicManagerBank* MusicBank;
    
public:
    AFortMusicManager();
    UFUNCTION(BlueprintCallable)
    void StopPrimaryMusic(bool bPlayOutro);
    
    UFUNCTION(BlueprintCallable)
    void StopMusicVoice(UFortMusicVoice* Voice);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPrimaryMusicVolume(float InVolumeMultiplier);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMusicBank(UFortMusicManagerBank* Bank);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayStinger(UFortMusicAsset* NewMusicAsset);
    
    UFUNCTION(BlueprintCallable)
    UFortMusicVoice* PlayMusicVoice(UFortMusicAsset* Asset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceFinished(UFortMusicVoice* Voice);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThresholdChange(EFortCombatThresholds OldThreshold, EFortCombatThresholds NewThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDowned(const FFortPlayerDeathReport& DeathReport);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMusicBankChanged(UFortMusicManagerBank* NewBank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryMusicVolume() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMusicManagerBank* GetMusicBank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercentTotal(EFortCombatEvents CombatEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercent(EFortCombatEvents CombatEvent);
    
    UFUNCTION(BlueprintCallable)
    UFortMusicVoice* ChangePrimaryMusic(UFortMusicAsset* NewMusicAsset, bool bPlayStinger);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};


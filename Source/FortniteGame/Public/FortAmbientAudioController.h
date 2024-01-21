#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EFortDayPhase.h"
#include "FortPOIAmbientAudioLoop.h"
#include "FortAmbientAudioController.generated.h"

class AFortPlayerController;
class AFortPoiVolume;
class AFortTimeOfDayManager;
class UAudioComponent;
class UFortAmbientAudioController;
class UFortAmbientOneShotInstance;
class UFortPOIAmbientAudioBank;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAmbientAudioController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPOIAmbientAudioBank* DefaultAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTagSubstr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FadingAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPOIAmbientAudioBank* CurrentAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPOIAmbientAudioBank* OverriddenAudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAmbientOneShotInstance*> CurrentOneShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* TimeOfDayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, AFortPoiVolume*> VolumeMap;
    
public:
    UFortAmbientAudioController();
    UFUNCTION(BlueprintCallable)
    void SetAudioBankOverride(UFortPOIAmbientAudioBank* BankOverride);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetAudioBank(UFortPOIAmbientAudioBank* NewBank);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLocationTagChanged(const FGameplayTag Tag, int32 Num);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePlayerState();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeCurrentAudioBank();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPOIAmbientAudioBank* GetAudioBank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortAmbientAudioController* GetAmbientAudioControllerFromContext(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void Crossfade(FFortPOIAmbientAudioLoop& NewLoop);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAudioBankOverride();
    
};


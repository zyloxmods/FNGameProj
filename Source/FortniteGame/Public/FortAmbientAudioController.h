#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EFortDayPhase.h"
#include "FortAmbientAudioController.generated.h"

class AFortPlayerController;
class UFortAmbientAudioController;
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseFadeTime;
    
    UFortAmbientAudioController();
    UFUNCTION(BlueprintCallable)
    void SetAudioBankOverride(UFortPOIAmbientAudioBank* BankOverride);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortAmbientAudioController* GetAmbientAudioControllerFromContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearAudioBankOverride();
    
};


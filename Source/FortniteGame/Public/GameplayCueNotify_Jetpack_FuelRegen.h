#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayCueNotify_Looping.h"
#include "GameplayCueNotify_Jetpack_FuelRegen.generated.h"

class AFortPlayerPawn;
class UAudioComponent;
class UCurveFloat;
class USoundBase;

UCLASS(Blueprintable)
class AGameplayCueNotify_Jetpack_FuelRegen : public AFortGameplayCueNotify_Looping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> FortPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAudioEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OnFuelRegenRampComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FuelRegenRampVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute FuelAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute FuelMaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ReserveFuelAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ReserveFuelMaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnFuelChangeRamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnFuelRecharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FuelRegenRampVolumeCurve;
    
public:
    AGameplayCueNotify_Jetpack_FuelRegen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetBlink(AFortPlayerPawn* PlayerPawn);
    
};


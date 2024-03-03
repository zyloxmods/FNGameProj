#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArsenicCoreGCNGhostAudioHelperComponent.generated.h"

class APawn;
class UAudioComponent;
class USoundMix;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UArsenicCoreGCNGhostAudioHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityAudioInputRange_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityAudioInputRange_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* VelocitySoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityThresholdForMixModActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioScalarParameterName;
    
public:
    UArsenicCoreGCNGhostAudioHelperComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetPawn(APawn* InTargetPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopingAudioComponent(UAudioComponent* InLoopingAudioComponent);
    
    UFUNCTION(BlueprintCallable)
    void PopVelocitySoundMix();
    
};


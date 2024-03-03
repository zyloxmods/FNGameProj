#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortCollisionAudioTriggerData.h"
#include "FortCollisionAudioComponent.generated.h"

class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCollisionAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCollisionAudioTriggerData> CollisionSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckCollisionLeashInterval;
    
    UFortCollisionAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetCollisionSoundAtIndex(int32 Index, USoundBase* SoundToUse);
    
    UFUNCTION(BlueprintCallable)
    void OnCollision(const FVector& HitLocation, const FVector& HitNormalImpulse, bool& OutResult, float& OutMagnitude);
    
};


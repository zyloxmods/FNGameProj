#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectVolume.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable)
class AGameplayEffectVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayEffectLevel;
    
    AGameplayEffectVolume();
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayEffect(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGameplayEffect(AActor* Actor);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "BuildingGameplayActor.h"
#include "Templates/SubclassOf.h"
#include "BuildingGameplayActorConsumable.generated.h"

class AFortPawn;
class UAnimMontage;
class UFortGameplayAbility;
class UGameplayEffect;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingGameplayActorConsumable : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnConsumeGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> OnConsumeMontageAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OnConsumeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnerCalculateRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDistanceStw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDistanceAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatNameWhenConsumed;
    
public:
    ABuildingGameplayActorConsumable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareOnConsumeGameplayEffectSpec(UPARAM(Ref) FGameplayEffectSpecHandle& SpecHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalBeginUse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnInteractAllowedToConsume(const AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllowedToConsumeFailed(const AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FGameplayEffectSpecHandle MakeOnConsumeGameplayEffectSpec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetOnConsumeMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetOnConsumeGameplayEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeathFXTransform() const;
    
};


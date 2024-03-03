#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "EInteractionBeingAttempted.h"
#include "Templates/SubclassOf.h"
#include "BuildingGameplayActorConsumable.generated.h"

class AActor;
class AFortPawn;
class UAnimMontage;
class UFortGameplayAbility;
class UGameplayEffect;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingGameplayActorConsumable : public ABuildingGameplayActor {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FailedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SearchAnim;
    
public:
    ABuildingGameplayActorConsumable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareOnConsumeGameplayEffectSpec(UPARAM(Ref) FGameplayEffectSpecHandle& SpecHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnInteractAllowedToConsume(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGatherOrInteract(const AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllowedToConsumeFailed(const AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FGameplayEffectSpecHandle MakeOnConsumeGameplayEffectSpec(AActor* EventCauser, const int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortGameplayAbility> GetOnConsumeMontageAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetOnConsumeMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetOnConsumeGameplayEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeathFXTransform() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UFortGameplayAbility> DetermineOnConsumeMontageAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* DetermineOnConsumeMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> DetermineOnConsumeGameplayEffect() const;
    
};


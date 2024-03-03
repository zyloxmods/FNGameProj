#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EScoreDistributionType.h"
#include "FortMinigameLogicComponent.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeCreatureManagerInfoComponent.generated.h"

class AFortAIPawn;
class UFortCreativeCreatureManagerComponent;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeCreatureManagerInfoComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAIPawn> CreatureBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingAggroRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentalDamageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeCreatureManagerComponent* CreatureManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EnvironmentalDamageOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MovementSpeedOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreDistributionType ScoreDistribution;
    
public:
    UFortCreativeCreatureManagerInfoComponent();
    UFUNCTION(BlueprintCallable)
    void SetScorePoints(int32 InScorePoints);
    
    UFUNCTION(BlueprintCallable)
    void SetScoreDistribution(const EScoreDistributionType InScoreDistribution);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDamage(float InOverrideDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedOverrideEffect(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementOverrideTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHealth(int32 InMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetHearingAggroRange(float InHearingAggroRange);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentalDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentalDamageOverride(float InOverrideDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageOverrideTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatureManagerComponent(UFortCreativeCreatureManagerComponent* InCreatureManagerComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatureBlueprintClass(TSoftClassPtr<AFortAIPawn> InCreatureBlueprintClass);
    
    UFUNCTION(BlueprintCallable)
    void ResetScorePoints();
    
    UFUNCTION(BlueprintCallable)
    void ResetScoreDistribution();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideDamage();
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementSpeedMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void ResetHearingAggroRange();
    
    UFUNCTION(BlueprintCallable)
    void ResetEnvironmentalDamageOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScoreDistributionType GetScoreDistribution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverrideDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHearingAggroRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnvironmentalDamageOverride() const;
    
    UFUNCTION(BlueprintCallable)
    UFortCreativeCreatureManagerComponent* GetCreatureManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AFortAIPawn> GetCreatureBlueprintClass() const;
    
};


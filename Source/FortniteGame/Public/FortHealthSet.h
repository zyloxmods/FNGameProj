#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortHealthSet.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortHealthSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentShield, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData CurrentShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Shield, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DamageResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData DamageVulnerability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ReflectDamageAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ReflectDamageFromSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData HealingSourceBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData ShieldDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData HealingSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData HealingBonusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Healing;
    
    UFortHealthSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Shield();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShield();
    
};


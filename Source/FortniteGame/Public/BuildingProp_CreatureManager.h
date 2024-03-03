#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuildingProp.h"
#include "EFortMinigameState.h"
#include "EScoreDistributionType.h"
#include "Templates/SubclassOf.h"
#include "BuildingProp_CreatureManager.generated.h"

class AFortAIPawn;
class AFortMinigame;
class UFortCreativeCreatureManagerInfoComponent;
class UGameplayEffect;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABuildingProp_CreatureManager : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortAIPawn>> AITypeOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAIPawn> SelectedAIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedOverrideAggroDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedOverrideHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedOverrideScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreDistributionType SelectedOverrideScoreDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedOverrideDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedEnvironmentalDamageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EnvironmentalDamageOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MovementSpeedOverrideEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DamageOverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MovementOverrideTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeCreatureManagerInfoComponent* CreatureInfoComponent;
    
public:
    ABuildingProp_CreatureManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkeletalMeshLoadComplete(UMaterialInterface* Material, USkeletalMesh* Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupConfigurables();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MinigameStateChange(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
    
    UFUNCTION(BlueprintCallable)
    void LoadSkeletalMeshDisplayOption();
    
    UFUNCTION(BlueprintCallable)
    void AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh);
    
};


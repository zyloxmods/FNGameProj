#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortSpawnGroupEncounterTypeData.h"
#include "SpawnGroupEnemy.h"
#include "Templates/SubclassOf.h"
#include "FortAISpawnGroup.generated.h"

class UFortAIPawnVariant;

UCLASS(Blueprintable, MinimalAPI)
class UFortAISpawnGroup : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyUtilities[16];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnGroupEnemy> EnemiesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidForEnemySpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLargeSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDiscountRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeightSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSpawnGroupEncounterTypeData> EncounterTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnGroupGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredTagQuery;
    
public:
    UFortAISpawnGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidForEnemySpawners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrototype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLargeSpawnGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortAIPawnVariant> GetEnemy(int32 EnemyIndex) const;
    
};


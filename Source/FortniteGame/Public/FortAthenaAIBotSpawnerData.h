#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIBotSpawnerData.generated.h"

class UFortAthenaAISpawnerDataComponent_ConstructionBase;
class UFortAthenaAISpawnerDataComponent_CosmeticBase;
class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase;
class UFortAthenaAISpawnerDataComponent_InventoryBase;
class UFortAthenaAISpawnerDataComponent_SkillsetBase;

UCLASS(Blueprintable, MinimalAPI)
class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_CosmeticBase> CosmeticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_GameplayAbilityBase> GameplayAbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_SkillsetBase> SkillSetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_InventoryBase> InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerDataComponent_ConstructionBase> ConstructionComponent;
    
public:
    UFortAthenaAIBotSpawnerData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_InventoryBase* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetGameplayAbilityComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent() const;
    
};


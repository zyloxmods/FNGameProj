#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_SkillsetBase.generated.h"

class UFortAthenaAIBotSkillSet;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_SkillsetBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_SkillsetBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseMatchMMRToOverrideSkillLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UFortAthenaAIBotSkillSet>> GetSkillSets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSkill();
    
};


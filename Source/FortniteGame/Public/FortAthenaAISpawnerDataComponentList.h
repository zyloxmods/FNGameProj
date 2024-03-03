#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponentList.generated.h"

class UFortAthenaAISpawnerDataComponent;
class UFortAthenaAISpawnerDataComponentList;

UCLASS(Blueprintable, MinimalAPI)
class UFortAthenaAISpawnerDataComponentList : public UObject {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponentList();
    UFUNCTION(BlueprintCallable)
    UFortAthenaAISpawnerDataComponentList* OverrideComponentClass(const TSubclassOf<UFortAthenaAISpawnerDataComponent> NewComponentSubClass);
    
    UFUNCTION(BlueprintCallable)
    UFortAthenaAISpawnerDataComponentList* OverrideComponent(const UFortAthenaAISpawnerDataComponent* NewComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAthenaAISpawnerDataComponent* GetOrCreateComponentClassForModification(UObject* ComponentOuter, const TSubclassOf<UFortAthenaAISpawnerDataComponent> ClassToClone) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFortAthenaAISpawnerDataComponent*> GetList();
    
};


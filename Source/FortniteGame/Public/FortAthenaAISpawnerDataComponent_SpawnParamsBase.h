#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_SpawnParamsBase.generated.h"

class APawn;
class UFortAthenaAISpawnerData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_SpawnParamsBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_SpawnParamsBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCheckForOverlaps();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpawnTracePadding();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UFortAthenaAISpawnerData>> GetSpawnerDataSpawnedAsChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<APawn> GetPawnClass();
    
};


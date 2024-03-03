#pragma once
#include "CoreMinimal.h"
#include "ClientAILODSettings.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "FortAthenaAISpawnerDataComponent_LODBase.generated.h"

class UFortAthenaAILODSettingsContainer;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_LODBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_LODBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FClientAILODSettings GetClientAILODSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFortAthenaAILODSettingsContainer* GetAILODSettingsContainer() const;
    
};


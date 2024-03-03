#pragma once
#include "CoreMinimal.h"
#include "ClientAILODSettings.h"
#include "FortAthenaAISpawnerDataComponent_LODBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_LOD.generated.h"

class UFortAthenaAILODSettingsContainer;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_LOD : public UFortAthenaAISpawnerDataComponent_LODBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAILODSettingsContainer> LODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientAILODSettings ClientLODSettings;
    
    UFortAthenaAISpawnerDataComponent_LOD();
};


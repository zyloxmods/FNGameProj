#pragma once
#include "CoreMinimal.h"
#include "DebugMinimapData.h"
#include "FortAthenaAISpawnerDataComponent_DebugBase.h"
#include "FortAthenaAISpawnerDataComponent_AIBotDebug.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotDebug : public UFortAthenaAISpawnerDataComponent_DebugBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMinimapData DebugMinimapData;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotDebug();
};


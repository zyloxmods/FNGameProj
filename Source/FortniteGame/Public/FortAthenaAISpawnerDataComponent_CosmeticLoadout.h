#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticLoadout.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_CosmeticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadout;
    
public:
    UFortAthenaAISpawnerDataComponent_CosmeticLoadout();
};


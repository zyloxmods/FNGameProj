#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavAreaMeta.h"
#include "FortMetaNavArea_Obstacles.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortMetaNavArea_Obstacles : public UNavAreaMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthThreshold;
};


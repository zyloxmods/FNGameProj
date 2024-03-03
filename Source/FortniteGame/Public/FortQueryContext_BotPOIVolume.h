#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "UObject/NoExportTypes.h"
#include "FortQueryContext_BotPOIVolume.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_BotPOIVolume : public UEnvQueryContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetProjectedToNavmeshLocationAsContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectionExtent;
    
public:
    UFortQueryContext_BotPOIVolume();
};


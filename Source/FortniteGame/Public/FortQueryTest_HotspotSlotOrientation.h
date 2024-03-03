#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_HotspotSlotOrientation.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> FaceToward;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DotThreshold;
    
    UFortQueryTest_HotspotSlotOrientation();
};


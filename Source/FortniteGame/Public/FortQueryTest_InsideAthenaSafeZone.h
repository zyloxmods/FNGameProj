#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortQueryTest_InsideAthenaSafeZone.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue SafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNextSafeZone;
    
    UFortQueryTest_InsideAthenaSafeZone();
};


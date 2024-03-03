#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortQueryTest_TowardNextAthenaSafeZone.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue SafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckAcceptanceAngleTowardNextCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceAngleTowardNextCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExclusionSafeZoneIndex;
    
public:
    UFortQueryTest_TowardNextAthenaSafeZone();
};


#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_IsCloseToHotspotSlot.generated.h"

class AFortAIHotSpot;

UCLASS(Blueprintable)
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAIHotSpot> HotspotClass;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreItemsWithSlotData;
    
    UFortQueryTest_IsCloseToHotspotSlot();
};


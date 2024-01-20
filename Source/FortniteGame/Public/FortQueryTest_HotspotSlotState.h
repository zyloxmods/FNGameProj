#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EAIHotSpotSlot.h"
#include "FortQueryTest_HotspotSlotState.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIHotSpotSlot SlotState;
    
    UFortQueryTest_HotspotSlotState();
};


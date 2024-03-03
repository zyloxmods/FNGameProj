#pragma once
#include "CoreMinimal.h"
#include "FortAIHotSpot.h"
#include "FortAIHotSpot_Building.generated.h"

class UAIHotSpotConfig;

UCLASS(Blueprintable)
class AFortAIHotSpot_Building : public AFortAIHotSpot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIHotSpotConfig* ExtraTypeConfig;
    
public:
    AFortAIHotSpot_Building();
};


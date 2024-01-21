#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortInescapableZoneTracker.generated.h"

class AFortNavigationGraph;

UCLASS(Blueprintable)
class UFortInescapableZoneTracker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortNavigationGraph* NavGraph;
    
public:
    UFortInescapableZoneTracker();
};


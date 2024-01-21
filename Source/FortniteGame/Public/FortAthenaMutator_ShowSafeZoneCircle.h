#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ShowSafeZoneCircle.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ShowSafeZoneCircle : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSafeZoneCircle;
    
public:
    AFortAthenaMutator_ShowSafeZoneCircle();
};


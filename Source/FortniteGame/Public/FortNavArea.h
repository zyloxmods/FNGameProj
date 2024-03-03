#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "FortNavArea.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortNavArea : public UNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bObstacle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSmashable: 1;
    
    UFortNavArea();
};


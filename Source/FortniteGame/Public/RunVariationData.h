#pragma once
#include "CoreMinimal.h"
#include "RunVariationData.generated.h"

class AFortAIPawn;

USTRUCT(BlueprintType)
struct FRunVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAIPawn> FortAIPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FORTNITEGAME_API FRunVariationData();
};


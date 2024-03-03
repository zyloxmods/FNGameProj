#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventModeFocusActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEventModeFocusActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    EVENTMODERUNTIME_API FEventModeFocusActor();
};


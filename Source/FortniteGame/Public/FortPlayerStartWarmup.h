#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "FortPlayerStartWarmup.generated.h"

UCLASS(Blueprintable)
class AFortPlayerStartWarmup : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsePriority;
    
    AFortPlayerStartWarmup();
};


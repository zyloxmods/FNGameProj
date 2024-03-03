#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortMoveConfig.generated.h"

class AActor;
class AFortPawn;

USTRUCT(BlueprintType)
struct FFortMoveConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPawn> PushPawnClassOnBump;
    
    FORTNITEGAME_API FFortMoveConfig();
};


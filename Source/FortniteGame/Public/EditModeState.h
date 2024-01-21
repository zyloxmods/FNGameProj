#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EditModeState.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FEditModeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> EditClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RotationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyValid;
    
    FORTNITEGAME_API FEditModeState();
};


#pragma once
#include "CoreMinimal.h"
#include "FortAimAssist2D_OwnerInfo.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UFortPlayerInput;

USTRUCT(BlueprintType)
struct FFortAimAssist2D_OwnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FortPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerInput* FortPI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* FortPawn;
    
    FORTNITEGAME_API FFortAimAssist2D_OwnerInfo();
};


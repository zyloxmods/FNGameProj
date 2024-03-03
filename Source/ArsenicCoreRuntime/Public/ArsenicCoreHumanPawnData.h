#pragma once
#include "CoreMinimal.h"
#include "ArsenicCoreHumanPawnData.generated.h"

class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FArsenicCoreHumanPawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    ARSENICCORERUNTIME_API FArsenicCoreHumanPawnData();
};


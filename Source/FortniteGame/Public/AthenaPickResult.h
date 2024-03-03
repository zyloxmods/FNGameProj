#pragma once
#include "CoreMinimal.h"
#include "EAthenaPickerType.h"
#include "AthenaPickResult.generated.h"

class ABuildingActor;
class AFortPlayerPawnAthena;

USTRUCT(BlueprintType)
struct FAthenaPickResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaPickerType PickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* FoundBuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* FoundPlayer;
    
    FORTNITEGAME_API FAthenaPickResult();
};


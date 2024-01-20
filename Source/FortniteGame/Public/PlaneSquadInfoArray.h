#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlaneSquadInfo.h"
#include "PlaneSquadInfoArray.generated.h"

class AFortPlayerControllerAthena;

USTRUCT(BlueprintType)
struct FPlaneSquadInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneSquadInfo> SquadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerAthena*> RemovedControllers;
    
    FORTNITEGAME_API FPlaneSquadInfoArray();
};


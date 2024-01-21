#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeferredActorData.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FDeferredActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorRecordIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BuildingTransform;
    
    FORTNITEGAME_API FDeferredActorData();
};


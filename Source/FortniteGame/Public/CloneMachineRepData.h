#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CloneMachineRepData.generated.h"

class ABuildingGameplayActorCloneMachine;

USTRUCT(BlueprintType)
struct FCloneMachineRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActorCloneMachine* CloneMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FORTNITEGAME_API FCloneMachineRepData();
};


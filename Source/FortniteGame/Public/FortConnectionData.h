#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortConnectionData.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FFortConnectionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* ConnectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid ConnectedActorGuid;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName MySocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName TheirSocketName;
    
    FORTNITEGAME_API FFortConnectionData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TeamSpottedActorInfo.generated.h"

class AActor;
class AFortPlayerController;

USTRUCT(BlueprintType)
struct FTeamSpottedActorInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortPlayerController* Spotter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpottedActor;
    
    FORTNITEGAME_API FTeamSpottedActorInfo();
};


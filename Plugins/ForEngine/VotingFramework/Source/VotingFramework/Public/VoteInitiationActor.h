#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "VoteInitiationActor.generated.h"

class UVoteBroadcasterComponent;

UCLASS(Blueprintable)
class AVoteInitiationActor : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVoteBroadcasterComponent* VoteBroadcasterComponent;
    
public:
    AVoteInitiationActor();
};


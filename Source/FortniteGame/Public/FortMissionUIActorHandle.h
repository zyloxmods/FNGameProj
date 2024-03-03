#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortMissionUIActorHandle.generated.h"

class AActor;
class UFortMissionInfoIndicator;

USTRUCT(BlueprintType)
struct FFortMissionUIActorHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachmentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MissionGuid;
    
    UPROPERTY(EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMissionInfoIndicator> MissionUIIndicator;
    
    FORTNITEGAME_API FFortMissionUIActorHandle();
};


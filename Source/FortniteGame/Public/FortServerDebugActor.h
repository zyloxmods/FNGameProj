#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortServerDebugActor.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class AFortServerDebugActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint64 ServerMemSharedInKb;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint64 ServerMemUniqueInKb;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint64 ServerMemVirtualInKb;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint64 ServerMemPhysicalInKb;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 SharedDeltaInLastMinute;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 SharedDeltaSinceProcessStart;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 SharedDeltaSinceDebugStart;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 UniqueDeltaInLastMinute;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 UniqueDeltaSinceProcessStart;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 UniqueDeltaSinceDebugStart;
    
public:
    AFortServerDebugActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};


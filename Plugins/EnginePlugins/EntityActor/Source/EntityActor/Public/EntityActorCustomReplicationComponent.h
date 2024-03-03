#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EEntityActorReplicationOverrideType.h"
#include "EEntityActorReplicationRelevancyBucketType.h"
#include "EntityActorCustomReplicationComponent.generated.h"

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorCustomReplicationComponent : public UEntityComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEntityActorReplicationOverrideType> ReplicationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEntityActorReplicationRelevancyBucketType> ReplicationRelevancyBucketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomReplicationRelevancyRange;
    
public:
    UEntityActorCustomReplicationComponent();
};


#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
//#include "ReplicationGraphNode_ActorList.h"
#include "MeshReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    //UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
  //  TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewTarget;
    
    UMeshReplicationGraphNode_AlwaysRelevant_ForConnection();
};


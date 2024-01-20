#pragma once
#include "CoreMinimal.h"
#include "HoverDronePawn.h"
#include "Templates/SubclassOf.h"
#include "BattleMapPawn.generated.h"

class ABattleMapNode;

UCLASS(Blueprintable)
class ABattleMapPawn : public AHoverDronePawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> GroundMoveNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> AirMoveNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> GotKillNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> ZoneNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattleMapNode> TeamFlightNodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattleMapNode*> SpawnedNodes;
    
public:
    ABattleMapPawn();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompletedAllRequestedEvent();
    
};


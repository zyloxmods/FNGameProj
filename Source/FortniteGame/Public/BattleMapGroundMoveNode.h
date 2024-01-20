#pragma once
#include "CoreMinimal.h"
#include "BattleMapNode.h"
#include "BattleMapGroundMoveNode.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API ABattleMapGroundMoveNode : public ABattleMapNode {
    GENERATED_BODY()
public:
    ABattleMapGroundMoveNode();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAllNodesSpawned();
    
};


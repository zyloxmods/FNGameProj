#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleMapEdge.generated.h"

class ABattleMapNode;
class UMaterialInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABattleMapEdge : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CustomMaterialsPerPlayerIndex;
    
public:
    ABattleMapEdge();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNextNextSet(const ABattleMapNode* NextNextNode);
    
    UFUNCTION(BlueprintCallable)
    void HandeResizedBattleNode(float NewScaling, const ABattleMapNode* Node);
    
};


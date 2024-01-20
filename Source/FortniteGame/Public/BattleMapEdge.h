#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleMapEdge.generated.h"

class ABattleMapNode;
class USplineMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABattleMapEdge : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ABattleMapEdge();
protected:
    UFUNCTION(BlueprintCallable)
    void OnResizedBattleNode(ABattleMapNode* Node, float NewScaling);
    
    UFUNCTION(BlueprintCallable)
    void OnNextNextSet(ABattleMapNode* NextNextNode);
    
};


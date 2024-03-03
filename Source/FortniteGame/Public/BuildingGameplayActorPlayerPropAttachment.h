#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorPlayerPropAttachment.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABuildingGameplayActorPlayerPropAttachment : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    ABuildingGameplayActorPlayerPropAttachment();
    UFUNCTION(BlueprintCallable)
    void InitProp(AActor* PropActorToAttach);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesMeshComponentHaveVisibleMaterial(const UStaticMeshComponent* StaticMeshComponent) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcWorldSpaceBounds(AActor* PropActor, FVector& Origin, FVector& Extent) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachProp(AActor* PropActorToAttach);
    
};


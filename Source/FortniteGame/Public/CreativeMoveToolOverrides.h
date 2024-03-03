#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeMoveToolOverrides.generated.h"

class UMeshComponent;
class UStaticMesh;

UINTERFACE(Blueprintable)
class UCreativeMoveToolOverrides : public UInterface {
    GENERATED_BODY()
};

class ICreativeMoveToolOverrides : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMeshComponent*> GetMeshComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMesh* GetCollisionStaticMesh() const;
    
};


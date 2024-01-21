#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeMoveToolOverrides.generated.h"

class UStaticMesh;

UINTERFACE(Blueprintable, MinimalAPI)
class UCreativeMoveToolOverrides : public UInterface {
    GENERATED_BODY()
};

class ICreativeMoveToolOverrides : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMesh* GetCollisionStaticMesh() const;
    
};


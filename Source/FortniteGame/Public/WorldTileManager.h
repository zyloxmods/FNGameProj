#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WorldTileManager.generated.h"

class AFortWorldManager;

UCLASS(Blueprintable)
class UWorldTileManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWorldManager* WorldManager;
    
    UWorldTileManager();
};

